		
	
	class TCU_SPEC_MAR_ammobox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Spectra Front Supply Crate";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop.p3d";
		icon = "iconCrate";
		ace_cargo_canLoad = 1;
		ace_cargo_size = 1;
		ace_cargo_hasCargo = 1;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0; 
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 1.2, 0};
		ace_dragging_carryDirection = 0;
		
		class TransportMagazines {

			class _xx_30Rnd_556x45_Stanag {
				magazine = "30Rnd_556x45_Stanag";
				count = 20;
			};
			
			class _xx_150Rnd_762x54_Box {
				magazine = "150Rnd_762x54_Box";
				count = 2;
			};
			
			class _xx_hlc_500rnd_762x51_Belt {
				magazine = "hlc_500rnd_762x51_Belt";
				count = 2;
			};
			
			class _xx_20Rnd_762x51_Mag {
				magazine = "20Rnd_762x51_Mag";
				count = 6;
			};
			
			class _xx_RH_7Rnd_45cal_m1911 {
				magazine = "RH_7Rnd_45cal_m1911";
				count = 6;
			};
			
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = 6;
			};
			
			class _xx_SmokeShellOrange {
				magazine = "SmokeShellOrange";
				count = 2;
			};

			class _XX_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 2;
			};
			
			class _xx_CUP_6Rnd_HE_M203 {
				magazine = "CUP_6Rnd_HE_M203";
				count = 6;
			};
			
			class _xx_CUP_6Rnd_SmokeGreen_M203 {
				magazine = "CUP_6Rnd_SmokeGreen_M203";
				count = 2;
			};

			class _XX_UGL_FlareYellow_F {
				magazine = "UGL_FlareYellow_F";
				count = 2;
			};
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 2;
			};

			class _xx_Chemlight_green {
				magazine = "Chemlight_green";
				count = 5;
			};

			class _xx_ACE_HandFlare_Green {
				magazine = "ACE_HandFlare_Green";
				count = 2;
			};
			
			class _xx_SatchelCharge_Remote_Mag {
				magazine = "SatchelCharge_Remote_Mag";
				count = 2;
			};
			
			class _xx_Laserbatteries {
				magazine = "Laserbatteries";
				count = 2;
			};

		};
		
		class TransportItems {

			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 20;
			};

			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 10;
			};

			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 10;
			};

			class _xx_bloodIV_250 {
				name = "ACE_bloodIV_250";
				count = 5;
			};
			
			class _xx_ACE_CableTie {
				name = "ACE_CableTie";
				count = 5;
			};
		};
		
		class Transportweapons {
			
			class _xx_hlc_rifle_Bushmaster300 {
				weapon = "hlc_rifle_Bushmaster300";
				count = 2;
			};
			
			class _xx_launch_NLAW_F {
				weapon = "launch_NLAW_F";
				count = 2;
			};
		};
		
		class Transportbackpacks {
			
			class _xx_M90_Backpack_Kitbag {
				backpack = "M90_Backpack_Kitbag";
				count = 2;
			};
			class _xx_tf_anprc155 {
				backpack = "tf_anprc155";
				count = 1;
			};
		};
	};
	
	class TCU_SPEC_MAR_wbox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Spectra Front Weapons Crate";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop.p3d";
		icon = "iconCrate";
		ace_cargo_size = 1;
		ace_cargo_hasCargo = 1;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0; 
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 1.2, 0};
		ace_dragging_carryDirection = 0;
		
		class TransportMagazines {

			class _xx_30Rnd_556x45_Stanag {
				magazine = "30Rnd_556x45_Stanag";
				count = 20;
			};
			
			class _xx_150Rnd_762x54_Box {
				magazine = "150Rnd_762x54_Box";
				count = 2;
			};

			class _xx_20Rnd_762x51_Mag {
				magazine = "20Rnd_762x51_Mag";
				count = 6;
			};
			
			class _xx_RH_7Rnd_45cal_m1911 {
				magazine = "RH_7Rnd_45cal_m1911";
				count = 6;
			};
			
			class _xx_CUP_6Rnd_HE_M203 {
				magazine = "CUP_6Rnd_HE_M203";
				count = 6;
			};
			
			class _xx_CUP_6Rnd_SmokeGreen_M203 {
				magazine = "CUP_6Rnd_SmokeGreen_M203";
				count = 2;
			};

			class _XX_UGL_FlareYellow_F {
				magazine = "UGL_FlareYellow_F";
				count = 2;
			};

		};
		
		class Transportweapons {
			
			class _xx_hlc_rifle_Bushmaster300_SPEC_MAR {
				weapon = "hlc_rifle_Bushmaster300_SPEC_MAR";
				count = 2;
			};
			
			class _xx_CUP_glaunch_M32_SPEC_MAR {
				weapon = "CUP_glaunch_M32_SPEC_MAR";
				count = 1;
			};
			
			class _xx_hlc_lmg_mk48_SPEC_MAR {
				weapon = "hlc_lmg_mk48_SPEC_MAR";
				count = 1;
			};
		};
	};
	
	