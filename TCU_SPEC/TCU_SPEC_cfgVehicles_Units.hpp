//Spectra Front Soldiers 
class TCU_SPEC_MSL_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	backpack = "tf_anprc155_SPEC_MSL";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MSL_IND";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers SquadLeader";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"CUP_glaunch_M32",
                        "RH_kimber",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_glaunch_M32",
                        "RH_kimber",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(CUP_6Rnd_HE_M203),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(CUP_6Rnd_HE_M203),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "MC_Cap",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "MC_Cap",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MTL_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	backpack = "tf_anprc155_SPEC_MSL";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MTL_IND";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers TeamLeader";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"CUP_glaunch_M32",
                        "RH_kimber",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_glaunch_M32",
                        "RH_kimber",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(CUP_6Rnd_HE_M203),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(CUP_6Rnd_HE_M203),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "MC_Cap",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "MC_Cap",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };

class TCU_SPEC_MOF_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MOF_IND";
	icon = "iconManOfficer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers Officer";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Beret_blk",
						"G_Aviator",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Beret_blk",
						"G_Aviator",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MRM_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MRM_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers Rifleman";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MRMAT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MRMAT_IND";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers Rifleman (AT)";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
						"launch_NLAW_F",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
						"launch_NLAW_F",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MMKM_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MMKM_IND";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers Marksman/Spotter";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"SC_SCAR_H_blk_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SC_SCAR_H_blk_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(20Rnd_762x51_Mag),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(20Rnd_762x51_Mag),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "MC_Cap",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "MC_Cap",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MSNP_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MSNP_IND";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers Sniper";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"SC_SCAR_H_Long_blk_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SC_SCAR_H_Long_blk_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(20Rnd_762x51_Mag),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(20Rnd_762x51_Mag),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "MC_Cap",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "MC_Cap",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MMMG_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MMMG_IND";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers Heavy Gunner";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"HLC_wp_M134Painless_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "HLC_wp_M134Painless_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(hlc_500rnd_762x51_Belt),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(hlc_500rnd_762x51_Belt),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MMMGA_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_SPEC_MMMGA";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MMMGA_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers Assist MMG";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MUAV_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	backpack = "I_UAV_01_backpack_F";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MUAV_IND";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers UAV Operator";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "MC_Cap",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"I_UavTerminal",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "MC_Cap",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"I_UavTerminal",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MAMMO_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_SPEC_MAMMO";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MAMMO_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers Ammo Bearer";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MEN_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_SPEC_MEN";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MEN_IND";
	icon = "iconManEngineer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = true;
    engineer = true;
    attendant = 0;
    displayName = "Spectra Front Soldiers Engineer";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MMD_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_SPEC_MMD";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MMD_IND";
	icon = "iconManMedic";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 1;
    displayName = "Spectra Front Soldiers Medic";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MAAR_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_SPEC_MAAR";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MAAR_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers Assist AutoRifleman";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MAR_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_SPEC_MAR";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MAR_IND";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers AutoRifleman";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_lmg_mk48_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_lmg_mk48_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(hlc_100Rnd_762x51_M_M60E4),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(hlc_100Rnd_762x51_M_M60E4),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MAAT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_SPEC_MAAT";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MAAT_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers Assist AT Missile Tech";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MAT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_SPEC_MAT";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MAT_IND";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers AT Missile Tech";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
						"launch_I_Titan_short_F",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
						"launch_I_Titan_short_F",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "29rnd_300BLK_STANAG_T", "29rnd_300BLK_STANAG_T", "29rnd_300BLK_STANAG_T", "29rnd_300BLK_STANAG_T",
						"RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911",
						"Titan_AT",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };

        respawnMagazines[] = {
                        "29rnd_300BLK_STANAG_T", "29rnd_300BLK_STANAG_T", "29rnd_300BLK_STANAG_T", "29rnd_300BLK_STANAG_T",
						"RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911",
						"Titan_AT",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MAAA_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_SPEC_MAAA";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MAAA_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers Assist AA Missile Tech";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MAA_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_SPEC_MAAA";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MAA_IND";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers AA Missile Tech";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
						"launch_I_Titan_F",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
						"launch_I_Titan_F",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "29rnd_300BLK_STANAG_T", "29rnd_300BLK_STANAG_T", "29rnd_300BLK_STANAG_T", "29rnd_300BLK_STANAG_T",
						"RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911",
						"Titan_AA",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };

        respawnMagazines[] = {
                        "29rnd_300BLK_STANAG_T", "29rnd_300BLK_STANAG_T", "29rnd_300BLK_STANAG_T", "29rnd_300BLK_STANAG_T",
						"RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911",
						"Titan_AA",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_Watchcap_blk",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MHP_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MHP_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers Helicopter Pilot";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_PilotHelmetHeli_I",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_PilotHelmetHeli_I",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };
	
class TCU_SPEC_MFP_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_SPEC_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "DualTex_Camo_Cyre_TS";
    author = "VeZer0";
    _generalMacro = "TCU_SPEC_MFP_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Spectra Front Soldiers Fighter Pilot";
	vehicleClass = "TCU_SPEC_MAR_IND";

	weapons[] = {
						"hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_Bushmaster300_SPEC_MAR",
                        "RH_kimber",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_PilotHelmetFighter_I",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };
        respawnLinkedItems[] = {
                        "MC_MBSS_PACA",
                        "H_PilotHelmetFighter_I",
						"SFG_Tac_BeardD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"GEN4_A3_GPNVG18_BLK_F"
                    };


    };