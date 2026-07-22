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
}
/* Compositor settings outlets */
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)

/* Dock settings outlets */
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)

/* Session settings outlets */
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)

/* Desktop settings outlets */
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
/* Background mode radio buttons (replaces the old rotatingCheck checkbox) */
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
/* Rotating-mode controls */
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
/* 3D-mode controls */
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)
@property (nonatomic, retain)

/* Tab view for switching sections */
@property (nonatomic, retain)
@property (nonatomic, retain)

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

