#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"vn_emm_main_menu"};
        author = "SzwedzikPL";
        authors[] = {"SzwedzikPL"};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

class RscStandardDisplay;
class RscDisplayFilter: RscStandardDisplay {
	class controls {
		delete VN_EMM_mainMenu_displayEventDummy;
	};
};
class RscDisplayMain: RscStandardDisplay {
	class controls {
		delete VN_EMM_mainMenu_displayEventDummy;
	};
};
class RscDisplayMultiplayer: RscStandardDisplay {
	class controls {
		delete VN_EMM_mainMenu_displayEventDummy;
	};
};
