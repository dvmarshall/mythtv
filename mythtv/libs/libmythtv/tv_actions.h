#ifndef TV_ACTIONS_H
#define TV_ACTIONS_H

#define ACTION_EXITSHOWNOPROMPTS "EXITSHOWNOPROMPTS"

#define ACTION_PLAYBACK      "PLAYBACK"
#define ACTION_STOP          "STOPPLAYBACK"
#define ACTION_DAYLEFT       "DAYLEFT"
#define ACTION_DAYRIGHT      "DAYRIGHT"
#define ACTION_PAGELEFT      "PAGELEFT"
#define ACTION_PAGERIGHT     "PAGERIGHT"
#define ACTION_TOGGLEPGORDER "TOGGLEEPGORDER"
#define ACTION_CLEAROSD      "CLEAROSD"
#define ACTION_PAUSE         "PAUSE"
#define ACTION_CHANNELUP     "CHANNELUP"
#define ACTION_CHANNELDOWN   "CHANNELDOWN"

#define ACTION_TOGGLERECORD       "TOGGLERECORD"
#define ACTION_TOGGLEFAV          "TOGGLEFAV"
#define ACTION_TOGGLECHANCONTROLS "TOGGLECHANCONTROLS"
#define ACTION_TOGGLERECCONTROLS  "TOGGLERECCONTROLS"
#define ACTION_TOGGLEINPUTS       "TOGGLEINPUTS"

#define ACTION_GUIDE             "GUIDE"
#define ACTION_FINDER            "FINDER"
#define ACTION_TOGGLESLEEP       QString("TOGGLESLEEP")
#define ACTION_PLAY              "PLAY"
#define ACTION_VIEWSCHEDULED     "VIEWSCHEDULED"
#define ACTION_SIGNALMON         "SIGNALMON"

/* Navigation */
#define ACTION_JUMPPREV             "JUMPPREV"
#define ACTION_JUMPREC              QString("JUMPREC")
#define ACTION_SEEKABSOLUTE         "SEEKABSOLUTE"
#define ACTION_SEEKARB              "ARBSEEK"
#define ACTION_SEEKRWND             "SEEKRWND"
#define ACTION_SEEKFFWD             "SEEKFFWD"
#define ACTION_JUMPFFWD             "JUMPFFWD"
#define ACTION_JUMPRWND             "JUMPRWND"
#define ACTION_JUMPBKMRK            "JUMPBKMRK"
#define ACTION_JUMPSTART            "JUMPSTART"
#define ACTION_JUMPTODVDROOTMENU    "JUMPTODVDROOTMENU"
#define ACTION_JUMPTOPOPUPMENU      "JUMPTOPOPUPMENU"
#define ACTION_JUMPTODVDCHAPTERMENU "JUMPTODVDCHAPTERMENU"
#define ACTION_JUMPTODVDTITLEMENU   "JUMPTODVDTITLEMENU"
#define ACTION_JUMPCHAPTER          "JUMPTOCHAPTER"
#define ACTION_SWITCHTITLE          "JUMPTOTITLE"
#define ACTION_SWITCHANGLE          "SWITCHTOANGLE"

/* Picture */
#define ACTION_TOGGLESTUDIOLEVELS "TOGGLESTUDIOLEVELS"
#define ACTION_TOGGLENIGHTMODE    "TOGGLENIGHTMODE"
#define ACTION_SETBRIGHTNESS      "SETBRIGHTNESS"
#define ACTION_SETCONTRAST        "SETCONTRAST"
#define ACTION_SETCOLOUR          "SETCOLOUR"
#define ACTION_SETHUE             "SETHUE"

/* Subtitles */
#define ACTION_ENABLESUBS        "ENABLESUBS"
#define ACTION_DISABLESUBS       "DISABLESUBS"
#define ACTION_TOGGLESUBS        "TOGGLECC"
#define ACTION_ENABLEFORCEDSUBS  "ENABLEFORCEDSUBS"
#define ACTION_DISABLEFORCEDSUBS "DISABLEFORCEDSUBS"
#define ACTION_DISABLEEXTTEXT    "DISABLEEXTTEXT"
#define ACTION_ENABLEEXTTEXT     "ENABLEEXTTEXT"
#define ACTION_TOGGLEEXTTEXT     "TOGGLETEXT"

/* Interactive Television keys */
#define ACTION_MENURED    "MENURED"
#define ACTION_MENUGREEN  "MENUGREEN"
#define ACTION_MENUYELLOW "MENUYELLOW"
#define ACTION_MENUBLUE   "MENUBLUE"
#define ACTION_TEXTEXIT   "TEXTEXIT"
#define ACTION_MENUTEXT   "MENUTEXT"
#define ACTION_MENUEPG    "MENUEPG"

/* Editing keys */
#define ACTION_CLEARMAP     "CLEARMAP"
#define ACTION_INVERTMAP    "INVERTMAP"
#define ACTION_SAVEMAP      "SAVEMAP"
#define ACTION_LOADCOMMSKIP "LOADCOMMSKIP"
#define ACTION_NEXTCUT      "NEXTCUT"
#define ACTION_PREVCUT      "PREVCUT"
#define ACTION_BIGJUMPREW   "BIGJUMPREW"
#define ACTION_BIGJUMPFWD   "BIGJUMPFWD"

/* Teletext keys */
#define ACTION_NEXTPAGE         "NEXTPAGE"
#define ACTION_PREVPAGE         "PREVPAGE"
#define ACTION_NEXTSUBPAGE      "NEXTSUBPAGE"
#define ACTION_PREVSUBPAGE      "PREVSUBPAGE"
#define ACTION_TOGGLETT         "TOGGLETT"
#define ACTION_MENUWHITE        "MENUWHITE"
#define ACTION_TOGGLEBACKGROUND "TOGGLEBACKGROUND"
#define ACTION_REVEAL           "REVEAL"

/* Audio */
#define ACTION_MUTEAUDIO          "MUTE"
#define ACTION_TOGGLEUPMIX        "TOGGLEUPMIX"
#define ACTION_ENABLEUPMIX        "ENABLEUPMIX"
#define ACTION_DISABLEUPMIX       "DISABLEUPMIX"
#define ACTION_VOLUMEUP           "VOLUMEUP"
#define ACTION_VOLUMEDOWN         "VOLUMEDOWN"
#define ACTION_SETVOLUME          "SETVOLUME"
#define ACTION_TOGGELAUDIOSYNC    "TOGGLEAUDIOSYNC"
#define ACTION_SETAUDIOSYNC       "SETAUDIOSYNC"

/* Visualisations */
#define ACTION_TOGGLEVISUALISATION  "TOGGLEVISUALISATION"
#define ACTION_ENABLEVISUALISATION  "ENABLEVISUALISATION"
#define ACTION_DISABLEVISUALISATION "DISABLEVISUALISATION"

/* OSD playback information screen */
#define ACTION_TOGGLEOSDDEBUG "DEBUGOSD"

/* 3D TV */
#define ACTION_3DNONE                "3DNONE"
#define ACTION_3DSIDEBYSIDE          "3DSIDEBYSIDE"
#define ACTION_3DSIDEBYSIDEDISCARD   "3DSIDEBYSIDEDISCARD"
#define ACTION_3DTOPANDBOTTOM        "3DTOPANDBOTTOM"
#define ACTION_3DTOPANDBOTTOMDISCARD "3DTOPANDBOTTOMDISCARD"

#endif // TV_ACTIONS_H
