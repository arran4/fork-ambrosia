#import <AppKit/AppKit.h>
#import "AmbrosiaStatusItemPlugin.h"
#import "TrayItem.h"

@class MenuBarController;
@class TrayManager;

/**
 * MenuBarView — full-width custom view that draws the Ambrosia menu bar.
 *
 * Layout (left-to-right):
 *
 *   [  Ambrosia ▾ ] | AppName | TopMenu1 ▾ | TopMenu2 ▾ | …  [BT▾]  HH:MM:SS  [ ⏻ ]
 *   ^               ^                                          ^       ^          ^
 *   System menu     Current app  Frontmost app's top-level    Status  Clock      Session
 *   (always shown)  name         menus (via DO registration)  items              menu
 *
 * The view is entirely drawn in -drawRect: for maximum control over appearance.
 * Mouse events are dispatched by checking pre-computed hit-test rectangles.
 */
@interface MenuBarView : NSView <AmbrosiaStatusItemPluginDelegate>
{
    MenuBarController  *_controller;
    NSArray            *_statusPlugins;
    NSArray            *_trayItems;

    NSString           *_activeAppName;
    NSArray            *_activeMenuItems;
    NSString           *_clockString;
    NSTimer            *_clockTimer;

    NSRect              _ambrosiaRect;
    NSMutableArray     *_menuRects;
    NSMutableArray     *_menuItemIndices;
    NSMutableArray     *_pluginRects;
    NSMutableArray     *_trayRects;
    NSRect              _clockRect;
    NSRect              _sessionRect;
    NSInteger           _pressedRegion;

    NSInteger           _openTag;
    NSArray            *_openDescriptors;
    NSInteger           _openPluginIdx;
    NSMutableArray     *_dropdownRects;
    CGFloat             _dropdownX;
    CGFloat             _dropdownW;
    NSInteger           _hoveredIdx;

    NSInteger           _draggingSliderRowIdx;
    NSInteger           _draggingSliderPluginIdx;
}


/** Back-pointer to the controller that handles actions. */
@property (nonatomic, assign) MenuBarController *controller;

/**
 * Ordered array of right-side status item plugins (drawn right-to-left,
 * inserted between the clock and tray area).
 * Set by MenuBarController after construction.
 */
@property (nonatomic, copy) NSArray *statusPlugins;

/**
 * Tray items from the SNI StatusNotifierWatcher, drawn between the status
 * plugins and the clock.  Set by MenuBarController when the TrayManager
 * reports a change.
 */
@property (nonatomic, copy) NSArray *trayItems;

/**
 * Update the displayed application name and optional menu-item descriptors.
 *
 * @param appName   Name of the frontmost application, or nil to clear.
 * @param menuItems NSArray of top-level menu descriptors as
 *                  defined in MenuServerProtocol.h, or nil for name-only display.
 */
- (void)setActiveAppName:(NSString *)appName menuItems:(NSArray *)menuItems;

@end
