#import <AppKit/AppKit.h>

@class MenuBarController;

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    MenuBarController *_menuBarController;
}

@property (nonatomic, retain) MenuBarController *menuBarController;

@end
