class blitz_settings {
    /* Custom gamemode settings go here */
};

/* Respawn Settings */
respawn = 3;
respawnButton = 1;
respawnDelay = 10;
respawnDialog = 1;
respawnOnStart = 0;

/* Misc Settings */
enableDebugConsole = 0;
enableItemsDropping = 0;
enableSaving = 0;
disabledAI = 1;
aiKills = 0;
saving = 0;

/* GC and Wreck Cleanup*/
corpseManagerMode = 1;
corpseLimit = 20;
corpseRemovalMinTime = 10;
corpseRemovalMaxtime = 20;

/*Custom Debriefing Sections/Endings*/
class CfgDebriefing {
    class end_topBlitz {
        title = "Top Blitz player!";
        description = "Top Blitz Player!";
        picture = "";
    };
};

//Custom panels | sections
class CfgDebriefingSections {
    class top_b_player {
        title = "Top Peforming Blitz Player (Blitzed Longest)";
        variable = "BLITZ_TOP_PLAYER";
    };
    class bot_b_player {
        title = "Worst Performing Blitz Player :/";
        variable = "BLITZ_BOT_PLAYER";
    };
    class kill_b_player {
        title = "Player With Most Kills";
        variable = "BLITZ_KILL_PLAYER";
    };
    class death_b_player {
        title = "Player With Most Deaths";
        variable = "BLITZ_DEATH_PLAYER";
    };
    class mine_b_player {
        title = "Player Placed Most Mines";
        variable = "BLITZ_MINE_PLAYER";
    };
    class deathmine_b_player {
        title = "Player Who Died Most To Mines";
        variable = "BLITZ_DEATHMINE_PLAYER";
    };
};

/* UI Settings */
//I personally don't like hindering too much but by default some settings will remove a portion of bloat info
showHUD[]={
    1, // Scripted HUD (same as showHUD command)
    2, // Vehicle + soldier info
    1, // Vehicle radar (1 - hide, 0 - no hide)
    1, // Vehicle compass (1 - hide, 0 - no hide)
    1, // Tank direction indicator
    0, // Commanding menu
    0, // Group Bar
    0, // HUD Weapon Cursors
    0, // Squad Radar
    0, // Vehicle Display Panels (Fuel, Damage)
    1, // System chats for player death / kill events
    1 // Force show drawIcon3D Icons
};