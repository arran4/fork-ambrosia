#ifndef AMBROSIA_MODULE_H
#define AMBROSIA_MODULE_H

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import <PreferencePanes/PreferencePanes.h>

/**
 * AmbrosiaModule — GNUstep PreferencePane bundle for configuring
 * the Ambrosia Wayland compositor and dock.
 *
 * Sections:
 *   • Compositor  – transparency, compositor flags
 *   • Dock        – icon size, zoom factor, position, auto-hide, items
 */
@interface AmbrosiaModule : NSPreferencePane
{
    BOOL loaded;
    NSString            *_compPrefsPath;
    NSString            *_dockPrefsPath;
    NSString            *_sessionPrefsPath;
    NSString            *_desktopPrefsPath;
    NSMutableDictionary *_compPrefs;
    NSMutableDictionary *_dockPrefs;
    NSMutableDictionary *_sessionPrefs;
    NSMutableDictionary *_desktopPrefs;
    NSSlider       *_transparencySlider;
    NSTextField    *_transparencyLabel;
    NSButton       *_enableDecorationsCheck;
    NSButton       *_enableBlurCheck;
    NSButton       *_x11DecorationsCheck;
    NSSlider       *_iconSizeSlider;
    NSTextField    *_iconSizeLabel;
    NSSlider       *_zoomFactorSlider;
    NSTextField    *_zoomFactorLabel;
    NSSegmentedControl *_positionControl;
    NSButton       *_autoHideCheck;
    NSSlider       *_autoHideDelaySlider;
    NSTextField    *_autoHideDelayLabel;
    NSButton       *_showRunningIndicatorCheck;
    NSTableView    *_dockItemsTable;
    NSButton       *_addItemButton;
    NSButton       *_removeItemButton;
    NSTableView    *_sessionItemsTable;
    NSButton       *_addSessionItemButton;
    NSButton       *_removeSessionItemButton;
    NSTableView    *_startupCommandsTable;
    NSButton       *_addStartupCommandButton;
    NSButton       *_removeStartupCommandButton;
    NSTextField    *_bgImagePathField;
    NSButton       *_bgImageChooseButton;
    NSButton       *_bgImageRadio;
    NSButton       *_rotatingRadio;
    NSButton       *_bg3DRadio;
    NSTextField    *_bgFolderPathField;
    NSButton       *_bgFolderChooseButton;
    NSSlider       *_intervalSlider;
    NSTextField    *_intervalLabel;
    NSTextField    *_sceneFilePathField;
    NSButton       *_sceneFileChooseButton;
    NSTabView      *_tabView;
}
/* Compositor settings outlets */
@property (nonatomic, retain) IBOutlet NSSlider       *transparencySlider;
@property (nonatomic, retain) IBOutlet NSTextField    *transparencyLabel;
@property (nonatomic, retain) IBOutlet NSButton       *enableDecorationsCheck;
@property (nonatomic, retain) IBOutlet NSButton       *enableBlurCheck;
@property (nonatomic, retain) IBOutlet NSButton       *x11DecorationsCheck;

/* Dock settings outlets */
@property (nonatomic, retain) IBOutlet NSSlider       *iconSizeSlider;
@property (nonatomic, retain) IBOutlet NSTextField    *iconSizeLabel;
@property (nonatomic, retain) IBOutlet NSSlider       *zoomFactorSlider;
@property (nonatomic, retain) IBOutlet NSTextField    *zoomFactorLabel;
@property (nonatomic, retain) IBOutlet NSSegmentedControl *positionControl;
@property (nonatomic, retain) IBOutlet NSButton       *autoHideCheck;
@property (nonatomic, retain) IBOutlet NSSlider       *autoHideDelaySlider;
@property (nonatomic, retain) IBOutlet NSTextField    *autoHideDelayLabel;
@property (nonatomic, retain) IBOutlet NSButton       *showRunningIndicatorCheck;
@property (nonatomic, retain) IBOutlet NSTableView    *dockItemsTable;
@property (nonatomic, retain) IBOutlet NSButton       *addItemButton;
@property (nonatomic, retain) IBOutlet NSButton       *removeItemButton;

/* Session settings outlets */
@property (nonatomic, retain) IBOutlet NSTableView    *sessionItemsTable;
@property (nonatomic, retain) IBOutlet NSButton       *addSessionItemButton;
@property (nonatomic, retain) IBOutlet NSButton       *removeSessionItemButton;
@property (nonatomic, retain) IBOutlet NSTableView    *startupCommandsTable;
@property (nonatomic, retain) IBOutlet NSButton       *addStartupCommandButton;
@property (nonatomic, retain) IBOutlet NSButton       *removeStartupCommandButton;

/* Desktop settings outlets */
@property (nonatomic, retain) IBOutlet NSTextField    *bgImagePathField;
@property (nonatomic, retain) IBOutlet NSButton       *bgImageChooseButton;
/* Background mode radio buttons (replaces the old rotatingCheck checkbox) */
@property (nonatomic, retain) IBOutlet NSButton       *bgImageRadio;
@property (nonatomic, retain) IBOutlet NSButton       *rotatingRadio;
@property (nonatomic, retain) IBOutlet NSButton       *bg3DRadio;
/* Rotating-mode controls */
@property (nonatomic, retain) IBOutlet NSTextField    *bgFolderPathField;
@property (nonatomic, retain) IBOutlet NSButton       *bgFolderChooseButton;
@property (nonatomic, retain) IBOutlet NSSlider       *intervalSlider;
@property (nonatomic, retain) IBOutlet NSTextField    *intervalLabel;
/* 3D-mode controls */
@property (nonatomic, retain) IBOutlet NSTextField    *sceneFilePathField;
@property (nonatomic, retain) IBOutlet NSButton       *sceneFileChooseButton;

/* Tab view for switching sections */
@property (nonatomic, retain) IBOutlet NSTabView      *tabView;

/* IBActions */
- (IBAction)transparencyChanged:(id)sender;
- (IBAction)toggleDecorations:(id)sender;
- (IBAction)toggleBlur:(id)sender;
- (IBAction)toggleX11Decorations:(id)sender;

- (IBAction)iconSizeChanged:(id)sender;
- (IBAction)zoomFactorChanged:(id)sender;
- (IBAction)dockPositionChanged:(id)sender;
- (IBAction)toggleAutoHide:(id)sender;
- (IBAction)autoHideDelayChanged:(id)sender;
- (IBAction)toggleRunningIndicator:(id)sender;
- (IBAction)addDockItem:(id)sender;
- (IBAction)removeDockItem:(id)sender;

- (IBAction)addSessionItem:(id)sender;
- (IBAction)removeSessionItem:(id)sender;
- (IBAction)addStartupCommand:(id)sender;
- (IBAction)removeStartupCommand:(id)sender;

- (IBAction)chooseBgImage:(id)sender;
- (IBAction)backgroundModeChanged:(id)sender;
- (IBAction)chooseBgFolder:(id)sender;
- (IBAction)intervalChanged:(id)sender;
- (IBAction)chooseSceneFile:(id)sender;

- (IBAction)applyChanges:(id)sender;
- (IBAction)revertChanges:(id)sender;

@end

#endif /* AMBROSIA_MODULE_H */
