#import <AppKit/AppKit.h>

@class MenuBarController;

@interface AppDelegate : NSObject <NSApplicationDelegate>

#ifdef AMBROSIA_LEGACY_MRC
@property (nonatomic, retain)
#else
@property (nonatomic, strong)
#endif MenuBarController *menuBarController;

@end
