class CfgPatches {
    class sogvanillamainmenu {
        requiredAddons[] = {
            "vn_emm_main_menu"
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
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
