/*
    Author: (github name)

    Description:
    Does a  thing where things neeed to happen

    Paramter(s):
    0 - OBJECT: Subject to torture
    1 - STRING: Final words to use

    Returns:
    Object to handle post death functions

*/
if !(isServer) exitWith {
    diag_log "ERROR: This function can only be run on the server";
    _this remoteExec["blitz_fnc_logToServer",2];
};
params[
    ["_textToLog","",[""],[], /* Text to be logged, can contain %1, %2, etc to be replaced by values from _varsToLog */
    ["_varsToLog",[],[],[]] /* Array of variables to log. the formatted string from _textToLog receives values from this array as %1, %2, etc */
];

diag_log parseText format["[BLITZ-LOGSERVER]:" + _textToLog,_varsToLog];
