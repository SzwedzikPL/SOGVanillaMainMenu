// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX sogvanillamainmenu

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCHLVL,BUILD

#define REQUIRED_VERSION 2.04

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(SOG Vanilla Main Menu - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(SOG Vanilla Main Menu - COMPONENT)
#endif
