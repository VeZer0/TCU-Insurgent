//OPFOR
		class EAST
        {
                name = "OPFOR"; 
                side = 0; 
				class TCU_SABR_OPF
                {
                        name = "[TCU] SABR Militants"; 
						class Infantry
                        {
                                name = "Infantry";
								class TCU_SABR_MAR_RS
                                {
										name = "Rifleman Squad"; 
                                        faction = "TCU_SABR_OPF"; 
                                        side = 0; 
                                        class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MSL_OPF"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                         class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MTL_OPF";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MMD_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit3
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MMD_OPF";
                                                rank = "Corporal";
                                                position[] = {10,-10,0};
                                        };
										class Unit4
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MEN_OPF";
                                                rank = "Private";
                                                position[] = {-10,-10,0};
                                        };
										class Unit5
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MEN_OPF";
                                                rank = "Private";
                                                position[] = {15,-15,0};
                                        };
										class Unit6
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MRMAT_OPF";
                                                rank = "Private";
                                                position[] = {-15,-15,0};
                                        };
										class Unit7
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MRM_OPF";
                                                rank = "Private";
                                                position[] = {20,-20,0};
                                        };
										class Unit8
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MRM_OPF";
                                                rank = "Private";
                                                position[] = {5,0,0};
                                        };
										class Unit9
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MAR_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
										class Unit10
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MAAR_OPF";
                                                rank = "Private";
                                                position[] = {7,0,0};
                                        };
										class Unit11
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MAMMO_OPF";
                                                rank = "Private";
                                                position[] = {0,0,3};
                                        };
								};
								class TCU_SABR_MAR_FT
                                {
										name = "Rifleman Fireteam"; 
                                        faction = "TCU_SABR_OPF"; 
                                        side = 0; 
                                        class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MTL_OPF";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MMD_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MEN_OPF";
                                                rank = "Private";
                                                position[] = {-10,-10,0};
                                        };
										class Unit3
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MRMAT_OPF";
                                                rank = "Private";
                                                position[] = {-15,-15,0};
                                        };
										class Unit4
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MAR_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};
								class TCU_SABR_MAR_ST
                                {
										name = "Rifleman Sentryteam"; 
                                        faction = "TCU_SABR_OPF"; 
                                        side = 0; 
										class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MMD_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MAR_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};
								class TCU_SABR_MAR_SNP
                                {
										name = "Rifleman Sniperteam"; 
                                        faction = "TCU_SABR_OPF"; 
                                        side = 0; 
										class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MSNP_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MMKM_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};
								class TCU_SABR_MAR_MAT
                                {
										name = "Rifleman ATteam"; 
                                        faction = "TCU_SABR_OPF"; 
                                        side = 0; 
										class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MAT_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MAAT_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};
								class TCU_SABR_MAR_MAA
                                {
										name = "Rifleman AAteam"; 
                                        faction = "TCU_SABR_OPF"; 
                                        side = 0; 
										class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MAA_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MAAA_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};
								class TCU_SABR_MAR_MMG
                                {
										name = "Rifleman MMGteam"; 
                                        faction = "TCU_SABR_OPF"; 
                                        side = 0; 
										class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MMMG_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MMMGA_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};
								class TCU_SABR_MAR_REC
                                {
										name = "Rifleman Reconteam"; 
                                        faction = "TCU_SABR_OPF"; 
                                        side = 0; 
										class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MUAV_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MUAV_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};
						};
						class Motorized
						{
								name = "Motorized";
								class TCU_SABR_MAR_MOT
								{
										name = "Motorized Convoy"; 
                                        faction = "TCU_SABR_OPF"; 
                                        side = 0; 
                                        class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MAR_MLMG"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                        class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MAR_MLMG";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
								};
								class TCU_SABR_MAR_MOT2
								{
										name = "Motorized Team"; 
                                        faction = "TCU_SABR_OPF"; 
                                        side = 0; 
                                        class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MAR_MLMG"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                        class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MAR_OPF";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 0; 
                                                vehicle = "TCU_SABR_MMD_OPF";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
								};									
						};
				};
				class TCU_ZENT_OPF
                {
                        name = "[TCU] ZENT Freedom Party"; 
						class Infantry
                        {
                                name = "Infantry";
								class TCU_ZENT_MAR_RS
                                {
										name = "Rifleman Squad"; 
                                        faction = "TCU_ZENT_OPF"; 
                                        side = 0; 
                                        class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MSL_OPF"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                         class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MTL_OPF";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MMD_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit3
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MMD_OPF";
                                                rank = "Corporal";
                                                position[] = {10,-10,0};
                                        };
										class Unit4
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MEN_OPF";
                                                rank = "Private";
                                                position[] = {-10,-10,0};
                                        };
										class Unit5
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MEN_OPF";
                                                rank = "Private";
                                                position[] = {15,-15,0};
                                        };
										class Unit6
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MRMAT_OPF";
                                                rank = "Private";
                                                position[] = {-15,-15,0};
                                        };
										class Unit7
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MRM_OPF";
                                                rank = "Private";
                                                position[] = {20,-20,0};
                                        };
										class Unit8
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MRM_OPF";
                                                rank = "Private";
                                                position[] = {5,0,0};
                                        };
										class Unit9
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MAR_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
										class Unit10
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MAAR_OPF";
                                                rank = "Private";
                                                position[] = {7,0,0};
                                        };
										class Unit11
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MAMMO_OPF";
                                                rank = "Private";
                                                position[] = {0,0,3};
                                        };
								};
								class TCU_ZENT_MAR_FT
                                {
										name = "Rifleman Fireteam"; 
                                        faction = "TCU_ZENT_OPF"; 
                                        side = 0; 
                                        class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MTL_OPF";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MMD_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MEN_OPF";
                                                rank = "Private";
                                                position[] = {-10,-10,0};
                                        };
										class Unit3
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MRMAT_OPF";
                                                rank = "Private";
                                                position[] = {-15,-15,0};
                                        };
										class Unit4
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MAR_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};
								class TCU_ZENT_MAR_ST
                                {
										name = "Rifleman Sentryteam"; 
                                        faction = "TCU_ZENT_OPF"; 
                                        side = 0; 
										class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MMD_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MAR_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};
								class TCU_ZENT_MAR_SNP
                                {
										name = "Rifleman Sniperteam"; 
                                        faction = "TCU_ZENT_OPF"; 
                                        side = 0; 
										class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MSNP_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MMKM_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};
								class TCU_ZENT_MAR_MAT
                                {
										name = "Rifleman ATteam"; 
                                        faction = "TCU_ZENT_OPF"; 
                                        side = 0; 
										class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MAT_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MAAT_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};
								class TCU_ZENT_MAR_MAA
                                {
										name = "Rifleman AAteam"; 
                                        faction = "TCU_ZENT_OPF"; 
                                        side = 0; 
										class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MAA_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MAAA_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};
								class TCU_ZENT_MAR_MMG
                                {
										name = "Rifleman MMGteam"; 
                                        faction = "TCU_ZENT_OPF"; 
                                        side = 0; 
										class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MMMG_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MMMGA_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};
								class TCU_ZENT_MAR_REC
                                {
										name = "Rifleman Reconteam"; 
                                        faction = "TCU_ZENT_OPF"; 
                                        side = 0; 
										class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MUAV_OPF";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MUAV_OPF";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};
						};
						class Motorized
						{
								name = "Motorized";
								class TCU_ZENT_MAR_MOT
								{
										name = "Motorized Convoy"; 
                                        faction = "TCU_ZENT_OPF"; 
                                        side = 0; 
                                        class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MAR_MLMG"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                        class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MAR_MLMG";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
								};
								class TCU_ZENT_MAR_MOT2
								{
										name = "Motorized Team"; 
                                        faction = "TCU_ZENT_OPF"; 
                                        side = 0; 
                                        class Unit0
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MAR_MLMG"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                        class Unit1
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MAR_OPF";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 0; 
                                                vehicle = "TCU_ZENT_MMD_OPF";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
								};									
						};
				};
		};