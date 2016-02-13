StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";

StartProgress = true;

_igiload = execVM "IgiLoad\IgiLoadInit.sqf";