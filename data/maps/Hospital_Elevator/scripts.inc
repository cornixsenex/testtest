Hospital_Elevator_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Hospital_Elevator_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Hospital_Elevator_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Hospital_Elevator_OnLoad
	return


Hospital_Elevator_OnLoad::
	call Hospital_Elevator_EventScript_SetFloorWarp
	end


Hospital_Elevator_EventScript_SetFloorWarp::
	switch VAR_HOSPITAL_FLOOR
	case 0, Hospital_Elevator_EventScript_SetFloorWarp_3
	case 1, Hospital_Elevator_EventScript_SetFloorWarp_3
	case 2, Hospital_Elevator_EventScript_SetFloorWarp_4
	case 3, Hospital_Elevator_EventScript_SetFloorWarp_5
	case 4, Hospital_Elevator_EventScript_SetFloorWarp_6
	case 5, Hospital_Elevator_EventScript_SetFloorWarp_7
	case 6, Hospital_Elevator_EventScript_SetFloorWarp_8
	case 7, Hospital_Elevator_EventScript_SetFloorWarp_9
Hospital_Elevator_EventScript_SetFloorWarp_1:
	return

Hospital_Elevator_EventScript_SetFloorWarp_3:
	call Hospital_Elevator_EventScript_SetFloorWarp1
	goto Hospital_Elevator_EventScript_SetFloorWarp_1

Hospital_Elevator_EventScript_SetFloorWarp_4:
	call Hospital_Elevator_EventScript_SetFloorWarp2
	goto Hospital_Elevator_EventScript_SetFloorWarp_1

Hospital_Elevator_EventScript_SetFloorWarp_5:
	call Hospital_Elevator_EventScript_SetFloorWarp3
	goto Hospital_Elevator_EventScript_SetFloorWarp_1

Hospital_Elevator_EventScript_SetFloorWarp_6:
	call Hospital_Elevator_EventScript_SetFloorWarp4
	goto Hospital_Elevator_EventScript_SetFloorWarp_1

Hospital_Elevator_EventScript_SetFloorWarp_7:
	call Hospital_Elevator_EventScript_SetFloorWarp5
	goto Hospital_Elevator_EventScript_SetFloorWarp_1

Hospital_Elevator_EventScript_SetFloorWarp_8:
	call Hospital_Elevator_EventScript_SetFloorWarp6
	goto Hospital_Elevator_EventScript_SetFloorWarp_1

Hospital_Elevator_EventScript_SetFloorWarp_9:
	call Hospital_Elevator_EventScript_SetFloorWarp7
	goto Hospital_Elevator_EventScript_SetFloorWarp_1


Hospital_Elevator_EventScript_SetFloorWarp1::
	setdynamicwarp MAP_HOSPITAL1F, 10, 2
	return


Hospital_Elevator_EventScript_SetFloorWarp2::
	setdynamicwarp MAP_HOSPITAL2F, 10, 2
	return


Hospital_Elevator_EventScript_SetFloorWarp3::
	setdynamicwarp MAP_HOSPITAL3F, 10, 2
	return


Hospital_Elevator_EventScript_SetFloorWarp4::
	setdynamicwarp MAP_HOSPITAL4F, 10, 2
	return


Hospital_Elevator_EventScript_SetFloorWarp5::
	setdynamicwarp MAP_HOSPITAL5F, 10, 2
	return


Hospital_Elevator_EventScript_SetFloorWarp6::
	setdynamicwarp MAP_HOSPITAL6F, 10, 2
	return


Hospital_Elevator_EventScript_SetFloorWarp7::
	setdynamicwarp MAP_HOSPITAL7F, 10, 2
	return


Hospital_Elevator_EventScript_ChooseFloor::
	lock
	msgbox Hospital_Elevator_Text_ChooseFloor
	closemessage
	setvar VAR_0x8004, SCROLL_MULTI_HOSPITAL_ELEVATOR_FLOOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, Hospital_Elevator_EventScript_ChooseFloor_3
	case 1, Hospital_Elevator_EventScript_ChooseFloor_4
	case 2, Hospital_Elevator_EventScript_ChooseFloor_5
	case 3, Hospital_Elevator_EventScript_ChooseFloor_6
	case 4, Hospital_Elevator_EventScript_ChooseFloor_7
	case 5, Hospital_Elevator_EventScript_ChooseFloor_8
	case 6, Hospital_Elevator_EventScript_ChooseFloor_9
Hospital_Elevator_EventScript_ChooseFloor_1:
	call Hospital_Elevator_EventScript_SetFloorWarp
	release
	end

Hospital_Elevator_EventScript_ChooseFloor_3:
	setvar VAR_HOSPITAL_FLOOR, 1
	goto Hospital_Elevator_EventScript_ChooseFloor_1

Hospital_Elevator_EventScript_ChooseFloor_4:
	setvar VAR_HOSPITAL_FLOOR, 2
	goto Hospital_Elevator_EventScript_ChooseFloor_1

Hospital_Elevator_EventScript_ChooseFloor_5:
	setvar VAR_HOSPITAL_FLOOR, 3
	goto Hospital_Elevator_EventScript_ChooseFloor_1

Hospital_Elevator_EventScript_ChooseFloor_6:
	setvar VAR_HOSPITAL_FLOOR, 4
	goto Hospital_Elevator_EventScript_ChooseFloor_1

Hospital_Elevator_EventScript_ChooseFloor_7:
	setvar VAR_HOSPITAL_FLOOR, 5
	goto Hospital_Elevator_EventScript_ChooseFloor_1

Hospital_Elevator_EventScript_ChooseFloor_8:
	setvar VAR_HOSPITAL_FLOOR, 6
	goto Hospital_Elevator_EventScript_ChooseFloor_1

Hospital_Elevator_EventScript_ChooseFloor_9:
	setvar VAR_HOSPITAL_FLOOR, 7
	goto Hospital_Elevator_EventScript_ChooseFloor_1


Hospital_Elevator_Text_ChooseFloor::
	.string "Which floor would you like to go to?$"
