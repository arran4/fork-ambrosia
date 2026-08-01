#import "AppDelegate.h"
#import "MenuBarController.h"

@implementation AppDelegate
@synthesize menuBarController = _menuBarController;

- (void)applicationDidFinishLaunching:(NSNotification *)notification
{
    _menuBarController = [[MenuBarController alloc] init];
    // [_menuBarController showMenuBar]; /* Method does not exist */

    [[NSDistributedNotificationCenter defaultCenter]
        addObserver:self
           selector:@selector(_handleSessionWillQuit:)
               name:@"AmbrosiaSessionWillQuit"
             object:nil];
}

- (void)_handleSessionWillQuit:(NSNotification *)note
{
    [NSApp terminate:nil];
}

- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication *)app
{
    return NO;
}

- (void)dealloc
{
    [_menuBarController release];
    [[NSDistributedNotificationCenter defaultCenter] removeObserver:self];
    [super dealloc];
}

@end
