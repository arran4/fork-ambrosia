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
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSSlider       *transparencySlider;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSTextField    *transparencyLabel;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *enableDecorationsCheck;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *enableBlurCheck;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *x11DecorationsCheck;

/* Dock settings outlets */
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSSlider       *iconSizeSlider;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSTextField    *iconSizeLabel;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSSlider       *zoomFactorSlider;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSTextField    *zoomFactorLabel;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSSegmentedControl *positionControl;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *autoHideCheck;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSSlider       *autoHideDelaySlider;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSTextField    *autoHideDelayLabel;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *showRunningIndicatorCheck;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSTableView    *dockItemsTable;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *addItemButton;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *removeItemButton;

/* Session settings outlets */
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSTableView    *sessionItemsTable;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *addSessionItemButton;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *removeSessionItemButton;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSTableView    *startupCommandsTable;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *addStartupCommandButton;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *removeStartupCommandButton;

/* Desktop settings outlets */
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSTextField    *bgImagePathField;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *bgImageChooseButton;
/* Background mode radio buttons (replaces the old rotatingCheck checkbox) */
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *bgImageRadio;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *rotatingRadio;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *bg3DRadio;
/* Rotating-mode controls */
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSTextField    *bgFolderPathField;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *bgFolderChooseButton;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSSlider       *intervalSlider;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSTextField    *intervalLabel;
/* 3D-mode controls */
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSTextField    *sceneFilePathField;
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSButton       *sceneFileChooseButton;

/* Tab view for switching sections */
#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif IBOutlet NSTabView      *tabView;

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
