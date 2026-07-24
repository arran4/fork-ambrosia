include $(GNUSTEP_MAKEFILES)/common.make

BUNDLE_NAME     = AmbrosiaModule
BUNDLE_EXTENSION = .prefPane
BUNDLE_INSTALL_DIR = $(GNUSTEP_SYSTEM_LIBRARY)/Bundles

AmbrosiaModule_OBJC_FILES = AmbrosiaModule.m

ifeq ($(LEGACY_OBJC_RUNTIME),1)
AmbrosiaModule_OBJCFLAGS  = -fno-objc-arc -DAMBROSIA_LEGACY_MRC=1
else
AmbrosiaModule_OBJCFLAGS  = -fobjc-arc
endif

AmbrosiaModule_PRINCIPAL_CLASS = AmbrosiaModule
AmbrosiaModule_MAIN_MODEL_FILE = AmbrosiaModule

AmbrosiaModule_RESOURCE_FILES = Ambrosia.tiff \
  Resources/English.lproj


ADDITIONAL_FRAMEWORK_DIRS += $(GNUSTEP_LOCAL_DOMAIN_ROOT)
AmbrosiaModule_FRAMEWORKS  = PreferencePanes

include $(GNUSTEP_MAKEFILES)/bundle.make
