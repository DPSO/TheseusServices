class CfgWeapons {
    class arifle_MX_F;
    class CLASS(Rifle_MX_BlackCamo): arifle_MX_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz";
        displayName = CSTRING(Rifle_MX_BlackCamo);
        //picture = PATHTOF(UI\mx_blackcamo_ca.paa);//@todo
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx_blackcamo_base_co.paa),
            QPATHTOF(data\mx_blackcamo_short_co.paa)
        };
    };

    class arifle_MX_GL_F;
    class CLASS(Rifle_MX_GL_BlackCamo): arifle_MX_GL_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz";
        displayName = CSTRING(Rifle_MX_GL_BlackCamo);
        //picture = PATHTOF(UI\mx_gl_blackcamo_ca.paa);//@todo
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx_blackcamo_base_co.paa),
            QPATHTOF(data\mx_blackcamo_gl_co.paa)
        };
    };
};
