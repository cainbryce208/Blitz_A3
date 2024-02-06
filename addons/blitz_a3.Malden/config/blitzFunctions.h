class CfgFunctions  {
    class blitz {
        class blitz_player {
            /* Player function library. These functions affect the player or anything related to them*/
            file = "functions\player";
            class setSpawnEquipment { }; /* Sets player's equipment randomly. This will run on player respawn/start.*/
            // class handlePlayerRespawn { }; /* Handles what happens when a player respawns. This should go: Loadout, direction ,timer*/
        };
        class blitz_logs {
            file = "functions\logs";
            class logToServer { };
        }
        class blitz_utils {
            file = "functions\utils";
            class getServerType { };
        }
    };
};