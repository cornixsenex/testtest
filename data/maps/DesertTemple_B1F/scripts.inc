DesertTemple_B1F_MapScripts::
	.byte 0


DesertTemple_B1F_EventScript_Lamp::
	lock
	finditem ITEM_ANCIENT_LAMP
	setflag FLAG_DESERTTEMPLE_BF1_HIDELAMP
	removeobject 1
	release
	end

