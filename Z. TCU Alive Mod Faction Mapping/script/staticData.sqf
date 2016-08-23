

// TCU SPEC Forces
// ---------------------------------------------------------------------------------------------------------------------
tcu_spec_mappings = [] call ALIVE_fnc_hashCreate;
[tcu_spec_mappings, "Side", "INDEP"] call ALIVE_fnc_hashSet;
[tcu_spec_mappings, "GroupSideName", "INDEP"] call ALIVE_fnc_hashSet;
[tcu_spec_mappings, "FactionName", "TCU_SPEC_IND"] call ALIVE_fnc_hashSet;
[tcu_spec_mappings, "GroupFactionName", "TCU_SPEC_IND"] call ALIVE_fnc_hashSet;
 
tcu_spec_typeMappings = [] call ALIVE_fnc_hashCreate;
[tcu_spec_typeMappings, "Air", "Air"] call ALIVE_fnc_hashSet;
[tcu_spec_typeMappings, "Infantry", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_spec_typeMappings, "Motorized", "Motorized"] call ALIVE_fnc_hashSet;

 
[tcu_spec_mappings, "GroupFactionTypes", tcu_spec_typeMappings] call ALIVE_fnc_hashSet;
[ALIVE_factionCustomMappings, "TCU_SPEC_IND", tcu_spec_mappings] call ALIVE_fnc_hashSet;
 
[ALIVE_factionDefaultSupplies, "TCU_SPEC_IND", ["TCU_SPEC_MAR_ammobox"]] call ALIVE_fnc_hashSet;
 
// ---------------------------------------------------------------------------------------------------------------------


// TCU SABRE Forces
// ---------------------------------------------------------------------------------------------------------------------
tcu_sabr_mappings = [] call ALIVE_fnc_hashCreate;
[tcu_sabr_mappings, "Side", "EAST"] call ALIVE_fnc_hashSet;
[tcu_sabr_mappings, "GroupSideName", "EAST"] call ALIVE_fnc_hashSet;
[tcu_sabr_mappings, "FactionName", "TCU_SABR_OPF"] call ALIVE_fnc_hashSet;
[tcu_sabr_mappings, "GroupFactionName", "TCU_SABR_OPF"] call ALIVE_fnc_hashSet;
 
tcu_sabr_typeMappings = [] call ALIVE_fnc_hashCreate;
[tcu_sabr_typeMappings, "Air", "Air"] call ALIVE_fnc_hashSet;
[tcu_sabr_typeMappings, "Armored", "Armored"] call ALIVE_fnc_hashSet;
[tcu_sabr_typeMappings, "Infantry", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_sabr_typeMappings, "Mechanized", "Mechanized"] call ALIVE_fnc_hashSet;
[tcu_sabr_typeMappings, "Motorized", "Motorized"] call ALIVE_fnc_hashSet;
[tcu_sabr_typeMappings, "SpecOps", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_sabr_typeMappings, "Support", "Infantry"] call ALIVE_fnc_hashSet;
 
[tcu_sabr_mappings, "GroupFactionTypes", tcu_sabr_typeMappings] call ALIVE_fnc_hashSet;
[ALIVE_factionCustomMappings, "TCU_SABR_OPF", tcu_sabr_mappings] call ALIVE_fnc_hashSet;
 
[ALIVE_factionDefaultSupplies, "TCU_SABR_OPF", ["TCU_SABR_MAR_ammobox"]] call ALIVE_fnc_hashSet;
 
// ---------------------------------------------------------------------------------------------------------------------


// TCU ZERT Forces
// ---------------------------------------------------------------------------------------------------------------------
tcu_ZERT_mappings = [] call ALIVE_fnc_hashCreate;
[tcu_ZERT_mappings, "Side", "EAST"] call ALIVE_fnc_hashSet;
[tcu_ZERT_mappings, "GroupSideName", "EAST"] call ALIVE_fnc_hashSet;
[tcu_ZERT_mappings, "FactionName", "TCU_ZERT_OPF"] call ALIVE_fnc_hashSet;
[tcu_ZERT_mappings, "GroupFactionName", "TCU_ZERT_OPF"] call ALIVE_fnc_hashSet;
 
tcu_ZERT_typeMappings = [] call ALIVE_fnc_hashCreate;
[tcu_ZERT_typeMappings, "Air", "Air"] call ALIVE_fnc_hashSet;
[tcu_ZERT_typeMappings, "Armored", "Armored"] call ALIVE_fnc_hashSet;
[tcu_ZERT_typeMappings, "Infantry", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_ZERT_typeMappings, "Mechanized", "Mechanized"] call ALIVE_fnc_hashSet;
[tcu_ZERT_typeMappings, "Motorized", "Motorized"] call ALIVE_fnc_hashSet;
[tcu_ZERT_typeMappings, "SpecOps", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_ZERT_typeMappings, "Support", "Infantry"] call ALIVE_fnc_hashSet;
 
[tcu_ZERT_mappings, "GroupFactionTypes", tcu_ZERT_typeMappings] call ALIVE_fnc_hashSet;
[ALIVE_factionCustomMappings, "TCU_ZERT_OPF", tcu_ZERT_mappings] call ALIVE_fnc_hashSet;
 
[ALIVE_factionDefaultSupplies, "TCU_ZERT_OPF", ["TCU_ZERT_MAR_ammobox"]] call ALIVE_fnc_hashSet;
 
// ---------------------------------------------------------------------------------------------------------------------
