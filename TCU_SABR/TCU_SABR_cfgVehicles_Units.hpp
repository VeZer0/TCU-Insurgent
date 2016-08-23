//Sabre Militants
class TCU_SABR_MSL_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "tf_mr3000_SABR_MSL";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MSL_OPF";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant SquadLeader";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"arifle_TRG21_GL_F_SABR_MAR",
                        //"RH_fn57_g",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "arifle_TRG21_GL_F_SABR_MAR",
                        //"RH_fn57_g",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),,
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Watchcap_cbr",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Watchcap_cbr",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MTL_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "tf_mr3000_SABR_MSL";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MTL_OPF";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant TeamLeader";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"arifle_TRG21_GL_F_SABR_MAR",
                        //"RH_fn57_g",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "arifle_TRG21_GL_F_SABR_MAR",
                        //"RH_fn57_g",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };

class TCU_SABR_MOF_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MOF_OPF";
	icon = "iconManOfficer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant Officer";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Beret_blk",
						"G_Aviator",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Beret_blk",
						"G_Aviator",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MRM_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MRM_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant Rifleman";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MRMAT_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MRMAT_OPF";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant Rifleman (AT)";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
						"CUP_launch_M136",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
						"CUP_launch_M136",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MMKM_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MMKM_OPF";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant Marksman/Spotter";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"srifle_DMR_01_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "srifle_DMR_01_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(ACE_10Rnd_762x54_Tracer_mag),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(ACE_10Rnd_762x54_Tracer_mag),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Watchcap_cbr",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Watchcap_cbr",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MSNP_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MSNP_OPF";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant Sniper";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"hlc_rifle_awcovert_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_awcovert_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_5rnd_300WM_FMJ_AWM),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_5rnd_300WM_FMJ_AWM),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Watchcap_cbr",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Watchcap_cbr",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MMMG_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MMMG_OPF";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant Heavy Gunner";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"CUP_lmg_M60E4_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_lmg_M60E4_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MMMGA_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "M81_Backpack_Kitbag_SABR_MMMGA";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MMMGA_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant Assist MMG";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MUAV_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "I_UAV_01_backpack_F";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MUAV_OPF";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant UAV Operator";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Watchcap_cbr",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"I_UavTerminal",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Watchcap_cbr",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"I_UavTerminal",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MAMMO_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "B_Carryall_khk_SABR_MAMMO";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MAMMO_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant Ammo Bearer";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MEN_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "B_Carryall_khk_SABR_MEN";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MEN_OPF";
	icon = "iconManEngineer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = true;
    engineer = true;
    attendant = 0;
    displayName = "Sabre Militant Engineer";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MMD_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "M81_Backpack_Kitbag_SABR_MMD";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MMD_OPF";
	icon = "iconManMedic";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 1;
    displayName = "Sabre Militant Medic";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MAAR_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "M81_Backpack_Kitbag_SABR_MAAR";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MAAR_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant Assist AutoRifleman";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MAR_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "M81_Backpack_Kitbag_SABR_MAR";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MAR_OPF";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant AutoRifleman";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"CUP_lmg_m249_SQuantoon_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_lmg_m249_SQuantoon_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(CUP_200Rnd_TE4_Red_Tracer_556x45_M249),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(CUP_200Rnd_TE4_Red_Tracer_556x45_M249),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MAAT_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "M81_Backpack_Kitbag_SABR_MAAT";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MAAT_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant Assist AT Missile Tech";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MAT_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "M81_Backpack_Kitbag_SABR_MAT";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MAT_OPF";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant AT Missile Tech";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
						"launch_I_Titan_short_F",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
						"launch_I_Titan_short_F",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red",
						"RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN",
						"Titan_AT",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };

        respawnMagazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red",
						"RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN",
						"Titan_AT",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MAAA_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "M81_Backpack_Kitbag_SABR_MAAA";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MAAA_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant Assist AA Missile Tech";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MAA_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "M81_Backpack_Kitbag_SABR_MAAA";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MAA_OPF";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant AA Missile Tech";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
						"launch_I_Titan_F",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
						"launch_I_Titan_F",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red",
						"RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN",
						"Titan_AA",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };

        respawnMagazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red",
						"RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN",
						"Titan_AA",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_Bandanna_camo",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MHP_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MHP_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant Helicopter Pilot";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_PilotHelmetHeli_O",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_PilotHelmetHeli_O",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };
	
class TCU_SABR_MFP_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_SABR_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "M81_Camo_TShirt";
    author = "VeZer0";
    _generalMacro = "TCU_SABR_MFP_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Sabre Militant Fighter Pilot";
	vehicleClass = "TCU_SABR_MAR_OPF";

	weapons[] = {
						"SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMA_TavorOD_F_SABR_MAR",
                        //"RH_fn57_g",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Red),
						//mag_3(RH_20Rnd_57x28_FN),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_PilotHelmetFighter_O",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };
        respawnLinkedItems[] = {
                        "M81_MBSS_PACA",
                        "H_PilotHelmetFighter_O",
						"G_Squares",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_OPFOR"
                    };


    };