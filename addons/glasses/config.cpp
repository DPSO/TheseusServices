#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {
            QCLASS(Goggles_Black),
            QCLASS(Goggles_Green),
            QCLASS(Goggles_Sand)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author[]= {"Jonpas", "Pomigit"};
        authorUrl = "https://github.com/Theseus-Aegis/TheseusServices";
        VERSION_CONFIG;
    };
};

#include "CfgGlasses.hpp"
