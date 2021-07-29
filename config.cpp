/*
	Warner's Barriers for Arma 3
	Fortifications Edition
	
	Author: Matthew Warner (Warnerm14)
	Discord: Warnerm14#3936
	Site: www.twitter.com/Warnerm14
	
	With edits by: <Your Name Here>
		
	Permission: 
		You may use the Warners-Barriers-Fortifications.pbo on your server without receiving permission from the Author.
		You may redistribute the Warners-Barriers-Fortifications.pbo as long as you give proper credit to the Author. 
		You may not remove any code from the Warners-Barriers-Fortifications.pbo to use in your own mods/mission/projects without permission from the Author.
		You may repack the Warners-Barriers-Fortifications.pbo with edits made to the code as long as you do not modify the comment blocks. (Except the "With edits by:" part).
		
	File Desc: This is where functions and items are defined.
*/

class CfgPatches {
	class warners_barriers_fortifications {
		name = "Warner's Barriers - Fortifications Edition";
		author = "Matthew Warner (Warnerm14)";
		url = "https://twitter.com/Warnerm14";
				
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions
{
    class warner_fortifications
    {
        class functions
        {
            file = "\Warners-Barriers-Fortifications\scripts";
            class init {postInit = 1;};
        };
    };
};


class cfgMagazines
{
	class CA_Magazine;
	class warn_baseItem_plp : CA_Magazine
	{
		mass = 1;
		scope = 0;
		
		warner_placeable = 1;
		warner_pos = "[0, 2, 0.8]";
		warner_dir = 0;
		warner_allowDamage = 1;
		warner_texture[] = {};
		
		author = "Warnerm14";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\Warners-Barriers-Fortifications\textures\blank_ico.paa";
	};
	
	class warn_sandBagWall_Long_Tan: warn_baseItem_plp
	{
		mass = 4;
		scope = 2;
		
		displayName = "Sandbag Wall (Tan/Long)";
		warner_class = "Land_BagFence_Long_F";	
		warner_pos = "[0, 2, 0.4]";
	};
	
	class warn_sandBagWall_Round_Tan: warn_baseItem_plp
	{
		mass = 5;
		scope = 2;
		
		displayName = "Sandbag Wall (Tan/Round)";
		warner_class = "Land_BagFence_Round_F";	
		warner_pos = "[0, 2, 0.4]";
		warner_dir = 180;
	};
	
	class warn_sandBagWall_Short_Tan: warn_baseItem_plp
	{
		mass = 2;
		scope = 2;
		
		displayName = "Sandbag Wall (Tan/Short)";
		warner_class = "Land_BagFence_Short_F";	
		warner_pos = "[0, 2, 0.4]";
	};
	
	class warn_sandBagWall_Long_Green: warn_baseItem_plp
	{
		mass = 4;
		scope = 2;
		
		displayName = "Sandbag Wall (Green/Long)";
		warner_class = "Land_BagFence_01_long_green_F";	
		warner_pos = "[0, 2, 0.4]";
	};
	
	class warn_sandBagWall_Round_Green: warn_baseItem_plp
	{
		mass = 5;
		scope = 2;
		
		displayName = "Sandbag Wall (Green/Round)";
		warner_class = "Land_BagFence_01_round_green_F";	
		warner_pos = "[0, 2, 0.4]";
		warner_dir = 180;
	};
	
	class warn_sandBagWall_Short_Green: warn_baseItem_plp
	{
		mass = 2;
		scope = 2;
		
		displayName = "Sandbag Wall (Green/Short)";
		warner_class = "Land_BagFence_01_short_green_F";	
		warner_pos = "[0, 2, 0.4]]";
	};
	
	class warn_czechHedgehog_New: warn_baseItem_plp
	{
		mass = 9;
		scope = 2;
		
		displayName = "Czech Hedgehog (New)";
		warner_class = "Land_CzechHedgehog_01_new_F";	
		warner_pos = "[0, 2, 0.8]";
	};
	
	class warn_czechHedgehog_Old: warn_baseItem_plp
	{
		mass = 9.05;
		scope = 2;
		
		displayName = "Czech Hedgehog (Old)";
		warner_class = "Land_CzechHedgehog_01_old_F";	
		warner_pos = "[0, 2, 0.8]";
	};
	
	class warn_junkBarricade: warn_baseItem_plp
	{
		mass = 8;
		scope = 2;
		
		displayName = "Junk Barricade";
		warner_class = "Land_Barricade_01_4m_F";	
		warner_pos = "[0, 4, 0]";
	};
	
	class warn_sandBagBarricade_Short_Tan: warn_baseItem_plp
	{
		mass = 6;
		scope = 2;
		
		displayName = "Sandbag Barricade (Tan/Short)";
		warner_class = "Land_SandbagBarricade_01_half_F";	
		warner_pos = "[0, 2, 0.65]";
		warner_dir = 180;
	};
	
	class warn_sandBagWall_Tall_Tan: warn_baseItem_plp
	{
		mass = 10;
		scope = 2;
		
		displayName = "Sandbag Barricade (Tan/Tall)";
		warner_class = "Land_SandbagBarricade_01_F";	
		warner_pos = "[0, 2, 1.3]";
		warner_dir = 180;
	};
	
	class warn_sandBagWall_Tall_Tan_Hole: warn_baseItem_plp
	{
		mass = 10;
		scope = 2;
		
		displayName = "Sandbag Wall w/ Hole (Tan/Tall)";
		warner_class = "Land_SandbagBarricade_01_hole_F";	
		warner_pos = "[0, 2, 1.3]";
		warner_dir = 180;
	};
	
};


class CfgVehicles
{
	class Box_NATO_Wps_F;
	class warner_barrierBox: Box_NATO_Wps_F
	{
		author="Warnerm14";
		displayName="Warner's Barriers Items";
		class TransportMagazines
		{
			class _xx_warn_sandBagWall_Long_Tan
			{
				magazine="warn_sandBagWall_Long_Tan";
				count=50;
			};
			class _xx_warn_sandBagWall_Round_Tan
			{
				magazine="warn_sandBagWall_Round_Tan";
				count=50;
			};
			class _xx_warn_sandBagWall_Short_Tan
			{
				magazine="warn_sandBagWall_Short_Tan";
				count=50;
			};
			class _xx_warn_sandBagWall_Long_Green
			{
				magazine="warn_sandBagWall_Long_Green";
				count=50;
			};
			class _xx_warn_sandBagWall_Round_Green
			{
				magazine="warn_sandBagWall_Round_Green";
				count=50;
			};
			class _xx_warn_sandBagWall_Short_Green
			{
				magazine="warn_sandBagWall_Short_Green";
				count=50;
			};
			class _xx_warn_czechHedgehog_New
			{
				magazine="warn_czechHedgehog_New";
				count=50;
			};
			class _xx_warn_czechHedgehog_Old
			{
				magazine="warn_czechHedgehog_Old";
				count=50;
			};
			class _xx_warn_junkBarricade
			{
				magazine="warn_junkBarricade";
				count=50;
			};
			class _xx_warn_sandBagBarricade_Short_Tan
			{
				magazine="warn_sandBagBarricade_Short_Tan";
				count=50;
			};
			class _xx_warn_sandBagWall_Tall_Tan
			{
				magazine="warn_sandBagWall_Tall_Tan";
				count=50;
			};
			class _xx_warn_sandBagWall_Tall_Tan_Hole
			{
				magazine="warn_sandBagWall_Tall_Tan_Hole";
				count=50;
			};
			
		};
		class TransportWeapons{};
		class TransportItems{};
	};
};