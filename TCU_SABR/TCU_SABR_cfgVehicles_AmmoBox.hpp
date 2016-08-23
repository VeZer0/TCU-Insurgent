		
	
	class TCU_SABR_MAR_ammobox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Sabre Militant Supply Crate";
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
			
			class _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M {
				magazine = "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count = 2;
			};

			class _xx_hlc_5rnd_300WM_FMJ_AWM {
				magazine = "hlc_5rnd_300WM_FMJ_AWM";
				count = 6;
			};
			
			class _xx_10Rnd_338_Mag {
				magazine = "10Rnd_338_Mag";
				count = 6;
			};
			
			class _xx_RH_20Rnd_57x28_FN {
				magazine = "RH_20Rnd_57x28_FN";
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

			class _XX_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 2;
			};
			
			class _xx_1Rnd_HE_Grenade_shell {
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				magazine = "1Rnd_SmokeRed_Grenade_shell";
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

			class _xx_Chemlight_Red {
				magazine = "Chemlight_Red";
				count = 5;
			};

			class _xx_ACE_HandFlare_Red {
				magazine = "ACE_HandFlare_Red";
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
			
			class _xx_SMA_TavorOD_F_SABR_MAR {
				weapon = "SMA_TavorOD_F_SABR_MAR";
				count = 2;
			};
			
			class _xx_CUP_launch_M136 {
				weapon = "CUP_launch_M136";
				count = 2;
			};
		};
		
		class Transportbackpacks {
			
			class _xx_M81_Backpack_Kitbag {
				backpack = "M81_Backpack_Kitbag";
				count = 2;
			};
			class _xx_tf_mr3000 {
				backpack = "tf_mr3000";
				count = 1;
			};
		};
	};
	
	class TCU_SABR_MAR_wbox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Sabre Militant Weapons Crate";
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

			class _xx_hlc_5rnd_300WM_FMJ_AWM {
				magazine = "hlc_5rnd_300WM_FMJ_AWM";
				count = 6;
			};
			
			class _xx_RH_20Rnd_57x28_FN {
				magazine = "RH_20Rnd_57x28_FN";
				count = 6;
			};
			
			class _xx_1Rnd_HE_Grenade_shell {
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 2;
			};

			class _XX_UGL_FlareYellow_F {
				magazine = "UGL_FlareYellow_F";
				count = 2;
			};		

		};
		
		class Transportweapons {
			
			class _xx_SMA_TavorOD_F_SABR_MAR {
				weapon = "SMA_TavorOD_F_SABR_MAR";
				count = 2;
			};
			
			class _xx_arifle_TRG21_GL_F_SABR_MAR {
				weapon = "arifle_TRG21_GL_F_SABR_MAR";
				count = 1;
			};
			
			class _xx_CUP_lmg_m249_SQuantoon_SABR_MAR {
				weapon = "CUP_lmg_m249_SQuantoon_SABR_MAR";
				count = 1;
			};
		};
	};
	
	
	
	
	