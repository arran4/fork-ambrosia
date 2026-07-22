include $(GNUSTEP_MAKEFILES)/common.make

APP_NAME = MenuServer

MenuServer_OBJC_FILES = \
	main.m \
	AppDelegate.m \
	MenuBarController.m \
	MenuBarView.m \
	BluetoothStatusItem.m \
	WiFiStatusItem.m \
	VolumeStatusItem.m \
	TrayItem.m \
	TrayManager.m

ifeq ($(LEGACY_OBJC_RUNTIME),1)
MenuServer_OBJCFLAGS  = -fno-objc-arc -DAMBROSIA_LEGACY_MRC=1 \
	$(shell pkg-config --cflags dbus-1)
else
MenuServer_OBJCFLAGS  = -fobjc-arc \
	$(shell pkg-config --cflags dbus-1)
endif

MenuServer_LDFLAGS    = \
	$(shell pkg-config --libs dbus-1)

MenuServer_PRINCIPAL_CLASS = AppDelegate

include $(GNUSTEP_MAKEFILES)/application.make
