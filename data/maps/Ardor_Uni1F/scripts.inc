Ardor_Uni1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Ardor_Uni1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Ardor_Uni1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Ardor_Uni1F_EventScript_OpenDoors
	return


Ardor_Uni1F_EventScript_OpenDoors::
	goto_if_unset FLAG_OPEN_CLASS_GEOLOGY, Ardor_Uni1F_EventScript_OpenDoors_2
Ardor_Uni1F_EventScript_OpenDoors_1:
	goto_if_unset FLAG_OPEN_CLASS_BIOLOGY, Ardor_Uni1F_EventScript_OpenDoors_5
Ardor_Uni1F_EventScript_OpenDoors_4:
	goto_if_unset FLAG_OPEN_CLASS_CHEMISTRY, Ardor_Uni1F_EventScript_OpenDoors_8
Ardor_Uni1F_EventScript_OpenDoors_7:
	goto_if_unset FLAG_OPEN_CLASS_MUSIC, Ardor_Uni1F_EventScript_OpenDoors_11
Ardor_Uni1F_EventScript_OpenDoors_10:
	goto_if_unset FLAG_OPEN_CLASS_ARITHMETIC, Ardor_Uni1F_EventScript_OpenDoors_14
Ardor_Uni1F_EventScript_OpenDoors_13:
	goto_if_unset FLAG_OPEN_CLASS_GRAMMAR, Ardor_Uni1F_EventScript_OpenDoors_17
Ardor_Uni1F_EventScript_OpenDoors_16:
	goto_if_unset FLAG_OPEN_CLASS_ART, Ardor_Uni1F_EventScript_OpenDoors_20
Ardor_Uni1F_EventScript_OpenDoors_19:
	end

Ardor_Uni1F_EventScript_OpenDoors_2:
	setmetatile 2, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni1F_EventScript_OpenDoors_1

Ardor_Uni1F_EventScript_OpenDoors_5:
	setmetatile 7, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni1F_EventScript_OpenDoors_4

Ardor_Uni1F_EventScript_OpenDoors_8:
	setmetatile 12, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni1F_EventScript_OpenDoors_7

Ardor_Uni1F_EventScript_OpenDoors_11:
	setmetatile 17, 1, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni1F_EventScript_OpenDoors_10

Ardor_Uni1F_EventScript_OpenDoors_14:
	setmetatile 26, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni1F_EventScript_OpenDoors_13

Ardor_Uni1F_EventScript_OpenDoors_17:
	setmetatile 31, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni1F_EventScript_OpenDoors_16

Ardor_Uni1F_EventScript_OpenDoors_20:
	setmetatile 36, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni1F_EventScript_OpenDoors_19


Ardor_Uni1F_EventScript_GeologyDoorSign::
	lock
	msgbox Ardor_Uni1F_Text_GeologyDoorSign
	closemessage
	release
	end


Ardor_Uni1F_EventScript_BiologyDoorSign::
	lock
	msgbox Ardor_Uni1F_Text_BiologyDoorSign
	closemessage
	release
	end


Ardor_Uni1F_EventScript_ChemistryDoorSign::
	lock
	msgbox Ardor_Uni1F_Text_ChemistryDoorSign
	closemessage
	release
	end


Ardor_Uni1F_EventScript_MusicDoorSign::
	lock
	msgbox Ardor_Uni1F_Text_MusicDoorSign
	closemessage
	release
	end


Ardor_Uni1F_EventScript_ArtDoorSign::
	lock
	msgbox Ardor_Uni1F_Text_ArtDoorSign
	closemessage
	release
	end


Ardor_Uni1F_EventScript_GrammarDoorSign::
	lock
	msgbox Ardor_Uni1F_Text_GrammarDoorSign
	closemessage
	release
	end


Ardor_Uni1F_EventScript_ArithmeticDoorSign::
	lock
	msgbox Ardor_Uni1F_Text_ArithmeticDoorSign
	closemessage
	release
	end


Ardor_Uni1F_Text_GeologyDoorSign::
	.string "GEOLOGIA\n"
	.string "MAGISTER PATRICIUS$"

Ardor_Uni1F_Text_BiologyDoorSign::
	.string "BIOLOGIA\n"
	.string "MAGISTRA PHILIDA$"

Ardor_Uni1F_Text_ChemistryDoorSign::
	.string "ALCHEMIA\n"
	.string "MAGISTER SEVERUS$"

Ardor_Uni1F_Text_MusicDoorSign::
	.string "MUSICA\n"
	.string "MAGISTER GERARDUS$"

Ardor_Uni1F_Text_ArtDoorSign::
	.string "ARS\n"
	.string "MAGISTRA GINA$"

Ardor_Uni1F_Text_GrammarDoorSign::
	.string "GRAMMATICA\n"
	.string "MAGISTRA SMYTHA$"

Ardor_Uni1F_Text_ArithmeticDoorSign::
	.string "ARITHMETICA\n"
	.string "MAGISTRA SADIA$"
