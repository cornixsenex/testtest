Vegas_PowerPlant2F_MapScripts::
	.byte 0


Vegas_PowerPlant2F_EventScript_RocketAdmin::
	lock
	faceplayer
	msgbox Vegas_PowerPlant2F_Text_RocketAdminIntro
	closemessage
	msgbox Vegas_PowerPlant2F_Text_RocketAdminPost
	closemessage
	fadescreen 1
	setflag FLAG_BADGE02_GET
	removeobject 1
	fadescreen 0
	release
	end


Vegas_PowerPlant2F_Text_RocketAdminIntro::
	.string "TEST1$"

Vegas_PowerPlant2F_Text_RocketAdminPost::
	.string "TEST3$"
