/*
	Warner's Barriers for Arma 3
	PLP Urban Packs: Barriers and Fences Compatibility 
	
	Author: Matthew Warner (Warnerm14)
	Discord: Warnerm14#3936
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
		
	File Desc: Checks to ensure you are running the required base mods.
*/
[] spawn {
	waitUntil {!(IsNull (findDisplay 46))};

	_check1 = getNumber (configFile >> "cfgMagazines" >> "warn_baseItem" >> "warner_placeable");
	_check2 = getNumber (configFile >> "CfgPatches" >> "plp_urban_barriers" >> "requiredVersion");

	if (_check1 == 0 || _check2 == 0) exitWith {
		hint "An error occurred while loading the 'Warner's Barriers - PLP Compat' mod, please check your .rpt and search for 'Warner's Barriers'";
		diag_log "=============== Warner's Barriers ===============";

		if (_check1 == 0) then {
			diag_log " You are not running the base Warner's Barriers!";
			diag_log "                Download it here!                ";
			diag_log "      https://tinyurl.com/warnersbarriersteam    ";
		};

		if (_check2 == 0) then {
			diag_log "       You are not running PLP Urban Packs!      ";
			diag_log "                Download it here!                ";
			diag_log "     https://tinyurl.com/plpurbanbarriersteam    ";
		};

		diag_log "=================================================";
	};
};