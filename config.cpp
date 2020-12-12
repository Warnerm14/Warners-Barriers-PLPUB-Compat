/*
	Warner's Barriers for Arma 3
	PLP Urban Packs: Barriers and Fences Compatibility 
	
	Author: Matthew Warner (Warnerm14)
	Site: www.twitter.com/Warnerm14
	
	"PLP Urban Packs: Barriers and Fences" 
	Created by poolpunk
	https://steamcommunity.com/sharedfiles/filedetails/?id=701300272
	
	With edits by: <Your Name Here>
		
	Permission: 
		You may use the Warners-Barriers-PLPUB-Compat.pbo on your server without receiving permission from the Author.
		You may redistribute the Warners-Barriers-PLPUB-Compat.pbo as long as you give proper credit to the Author. 
		You may not remove any code from the Warners-Barriers-PLPUB-Compat.pbo to use in your own mods/mission/projects without permission from the Author.
		You may repack the Warners-Barriers-PLPUB-Compat.pbo with edits made to the code as long as you do not modify the comment blocks. (Except the "With edits by:" part).
		
	File Desc: This is where functions and items are defined.
*/

class CfgPatches {
	class warners_barriers_plpub_compat {
		name = "Warner's Barriers - 'PLP Urban Packs: Barriers and Fences' Compatibility";
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
    class warner_plp
    {
        class functions
        {
            file = "\Warners-Barriers-PLPUB-Compat\scripts";
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
		
		author = "Warnerm14";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\Warners-Barriers-PLPUB-Compat\textures\blank_ico.paa";
	};
	
	class warn_metalFenceGrey: warn_baseItem_plp
	{
		mass = 8;
		scope = 2;
		
		displayName = "Pedestrian Fence";
		warner_class = "plp_upm_metalFenceGrey";	
		warner_pos = "[0, 2, 0.8]";
	};
	
	class warn_metalFenceGreyShort: warn_baseItem_plp
	{
		mass = 5;
		scope = 2;
		
		displayName = "Pedestrian Fence (Short)";
		warner_class = "plp_upm_metalFenceGreyShort";	
		warner_pos = "[0, 2, 0.8]";
	};
	
	class warn_metalFenceGreySign: warn_baseItem_plp
	{
		mass = 8;
		scope = 2;
		
		displayName = "Pedestrian Fence (Sign)";
		warner_class = "plp_upm_metalFenceGreySign";	
		warner_pos = "[0, 2, 0.8]";
	};
	
	class warn_metalFenceRusty: warn_baseItem_plp
	{
		mass = 8;
		scope = 2;
		
		displayName = "Pedestrian Fence 2";
		warner_class = "plp_upm_metalFenceRusty";	
		warner_pos = "[0, 2, 0.8]";
	};
	
	class warn_metalFenceRustyShort: warn_baseItem_plp
	{
		mass = 5;
		scope = 2;
		
		displayName = "Pedestrian Fence 2 (Short)";
		warner_class = "plp_upm_metalFenceRustyShort";	
		warner_pos = "[0, 2, 0.8]";
	};
	
	class warn_metalFenceRustySign: warn_baseItem_plp
	{
		mass = 8;
		scope = 2;
		
		displayName = "Pedestrian Fence 2 (Sign)";
		warner_class = "plp_upm_metalFenceRustySign";	
		warner_pos = "[0, 2, 0.8]";
	};
	
	class warn_plasticBarrierOrange: warn_baseItem_plp
	{
		mass = 1;
		scope = 2;
		
		displayName = "Plastic Barrier 2 (Orange)";
		warner_class = "plp_upm_PlasticBarrierOrange";	
		warner_pos = "[0, 2, 0.5]";
		warner_dir = 90;
	};
	
	class warn_plasticBarrierRed: warn_baseItem_plp
	{
		mass = 1;
		scope = 2;
		
		displayName = "Plastic Barrier 2 (Red)";
		warner_class = "plp_upm_PlasticBarrierRed";	
		warner_pos = "[0, 2, 0.5]";
		warner_dir = 90;
	};
	
	class warn_plasticTubeOrange: warn_baseItem_plp
	{
		mass = 1.5;
		scope = 2;
		
		displayName = "Traffic Barrel";
		warner_class = "plp_upm_PlasticTubeOrange";	
		warner_pos = "[0, 2, 0.7]";
	};
	
	class warn_plasticTubeOrangeLightOn: warn_baseItem_plp
	{
		mass = 1.5;
		scope = 2;
		
		displayName = "Traffic Barrel w/ Light";
		warner_class = "plp_upm_PlasticTubeOrangeLightOn";	
		warner_pos = "[0, 2, 0.9]";
	};
	
	class warn_trafficConeOrange: warn_baseItem_plp
	{
		mass = 0.2;
		scope = 2;
		
		displayName = "Road Cone (Orange)";
		warner_class = "plp_upm_TrafficConeOrange";	
		warner_pos = "[0, 2, 0.4]";
	};
	
	class warn_trafficConeRed: warn_baseItem_plp
	{
		mass = 0.2;
		scope = 2;
		
		displayName = "Road Cone (Red)";
		warner_class = "plp_upm_TrafficConeRed";	
		warner_pos = "[0, 2, 0.4]";
	};
	
	class warn_trafficConeYellow: warn_baseItem_plp
	{
		mass = 0.2;
		scope = 2;
		
		displayName = "Road Cone (Yellow)";
		warner_class = "plp_upm_TrafficConeYellow";	
		warner_pos = "[0, 2, 0.4]";
	};
	
	class warn_trafficFenceOrange: warn_baseItem_plp
	{
		mass = 3;
		scope = 2;
		
		displayName = "Traffic Fence (Orange)";
		warner_class = "plp_upm_TrafficFenceOrange";	
		warner_pos = "[0, 2, 0.6]";
	};
	
	class warn_trafficFenceRed: warn_baseItem_plp
	{
		mass = 3;
		scope = 2;
		
		displayName = "Traffic Fence (Red)";
		warner_class = "plp_upm_TrafficFenceRed";	
		warner_pos = "[0, 2, 0.6]";
	};
	
	class warn_trafficFenceWhite: warn_baseItem_plp
	{
		mass = 3;
		scope = 2;
		
		displayName = "Traffic Fence (White)";
		warner_class = "plp_upm_TrafficFenceWhite";	
		warner_pos = "[0, 2, 0.6]";
	};
	
	class warn_warningPyramidCaution: warn_baseItem_plp
	{
		mass = 1;
		scope = 2;
		
		displayName = "Warning Pyramid (Caution)";
		warner_class = "plp_upm_WarningPyramidCaution";	
		warner_pos = "[0, 2, 0.3]";
	};
	
	class warn_warningPyramidRoadworks: warn_baseItem_plp
	{
		mass = 1;
		scope = 2;
		
		displayName = "Warning Pyramid (Roadwork)";
		warner_class = "plp_upm_WarningPyramidRoadworks";	
		warner_pos = "[0, 2, 0.3]";
	};
	
	class warn_woodBarrierLongPolice: warn_baseItem_plp
	{
		mass = 4;
		scope = 2;
		
		displayName = "Road Barrier (Police)";
		warner_class = "plp_upm_WoodBarrierLongPolice";	
		warner_pos = "[0, 2, 0.6]";
	};
	
	class warn_woodBarrierLongRed: warn_baseItem_plp
	{
		mass = 4;
		scope = 2;
		
		displayName = "Road Barrier (Striped)";
		warner_class = "plp_upm_WoodBarrierLongRed";	
		warner_pos = "[0, 2, 0.6]";
	};
	
	class warn_woodBarrierLongYellow: warn_baseItem_plp
	{
		mass = 4;
		scope = 2;
		
		displayName = "Road Barrier (Yellow)";
		warner_class = "plp_upm_WoodBarrierLongYellow";	
		warner_pos = "[0, 2, 0.6]";
	};
	
	class warn_woodBarrierShortPolice: warn_baseItem_plp
	{
		mass = 3;
		scope = 2;
		
		displayName = "Road Barrier (Police/Short)";
		warner_class = "plp_upm_WoodBarrierShortPolice";	
		warner_pos = "[0, 2, 0.6]";
	};
	
	class warn_woodBarrierShortRed: warn_baseItem_plp
	{
		mass = 3;
		scope = 2;
		
		displayName = "Road Barrier (Striped/Short)";
		warner_class = "plp_upm_WoodBarrierShortRed";	
		warner_pos = "[0, 2, 0.6]";
	};
	
	class warn_woodBarrierShortYellow: warn_baseItem_plp
	{
		mass = 3;
		scope = 2;
		
		displayName = "Road Barrier (Yellow/Short)";
		warner_class = "plp_upm_WoodBarrierShortYellow";	
		warner_pos = "[0, 2, 0.6]";
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
			class _xx_warn_metalFenceGrey
			{
				magazine="warn_metalFenceGrey";
				count=50;
			};
			class _xx_warn_metalFenceGreyShort
			{
				magazine="warn_metalFenceGreyShort";
				count=50;
			};
			class _xx_warn_metalFenceGreySign
			{
				magazine="warn_metalFenceGreySign";
				count=50;
			};
			class _xx_warn_metalFenceRusty
			{
				magazine="warn_metalFenceRusty";
				count=50;
			};
			class _xx_warn_metalFenceRustyShort
			{
				magazine="warn_metalFenceRustyShort";
				count=50;
			};
			class _xx_warn_metalFenceRustySign
			{
				magazine="warn_metalFenceRustySign";
				count=50;
			};
			class _xx_warn_plasticBarrierOrange
			{
				magazine="warn_plasticBarrierOrange";
				count=50;
			};
			class _xx_warn_plasticBarrierRed
			{
				magazine="warn_plasticBarrierRed";
				count=50;
			};
			class _xx_warn_plasticTubeOrangeLightOn
			{
				magazine="warn_plasticTubeOrangeLightOn";
				count=50;
			};
			class _xx_warn_trafficConeOrange
			{
				magazine="warn_trafficConeOrange";
				count=50;
			};
			class _xx_warn_trafficConeRed
			{
				magazine="warn_trafficConeRed";
				count=50;
			};
			class _xx_warn_trafficConeYellow
			{
				magazine="warn_trafficConeYellow";
				count=50;
			};
			class _xx_warn_trafficFenceOrange
			{
				magazine="warn_trafficFenceOrange";
				count=50;
			};
			class _xx_warn_trafficFenceRed
			{
				magazine="warn_trafficFenceRed";
				count=50;
			};
			class _xx_warn_trafficFenceWhite
			{
				magazine="warn_trafficFenceWhite";
				count=50;
			};
			class _xx_warn_warningPyramidCaution
			{
				magazine="warn_warningPyramidCaution";
				count=50;
			};
			class _xx_warn_warningPyramidRoadworks
			{
				magazine="warn_warningPyramidRoadworks";
				count=50;
			};
			class _xx_warn_woodBarrierLongPolice
			{
				magazine="warn_woodBarrierLongPolice";
				count=50;
			};
			class _xx_warn_woodBarrierLongRed
			{
				magazine="warn_woodBarrierLongRed";
				count=50;
			};
			class _xx_warn_woodBarrierLongYellow
			{
				magazine="warn_woodBarrierLongYellow";
				count=50;
			};
			class _xx_warn_woodBarrierShortPolice
			{
				magazine="warn_woodBarrierShortPolice";
				count=50;
			};
			class _xx_warn_woodBarrierShortRed
			{
				magazine="warn_woodBarrierShortRed";
				count=50;
			};
			class _xx_warn_woodBarrierShortYellow
			{
				magazine="warn_woodBarrierShortYellow";
				count=50;
			};
		};
		class TransportWeapons{};
		class TransportItems{};
	};
};