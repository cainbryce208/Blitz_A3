/* Loading Screen Information*/
onLoadName = 'Blitz Arma 3';
onLoadMission = 'Blitz Arma 3';
onLoadDescription = 'Blitz Arma 3';
onLoadMissionTime = 1;
briefingName = 'Blitz Gamemode';
overviewPicture = '';
overviewTextLocked = 'Locked';
overviewText = 'In blitz you have to kill quickly, or you will die. You will be given buffs for killing players, but if you don''t kill anyone, you will die.';
loadScreen = '';

/*MP Info for server data*/
class Header {
    gameType = "DM";
    minPlayers = 1;
    maxPlayers = 30;
};

/*CfWorlds Class Override for fancy stuff*/
class CfgWorlds {
    class Any {
        author = 'mudnut';
        description = "Arma 3 Blitz";
        pictureMap = ''; //These will get their respective makeovers soon enough >:)
        pictureShot = ''; //These will get their respective makeovers soon enough >:)
        loadingScreenTexts[]={
            "Zap, you're dead!",
            "Hey watch your feet",
            "You're not going to last long",
            "You're going to die",
            "Man I hope I remember what this thing does",
            "I'm not sure if this is going to work",
            "What the hell is an SQF?",
            "Bad Module"
        };
    }
};