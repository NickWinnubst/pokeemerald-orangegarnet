Route201_MapScripts::
	.byte 0

Route201_EventScript_RouteSignLittleroot::
	msgbox Route201_Text_RouteSignLittleroot, MSGBOX_SIGN
	end

Route201_EventScript_Dwayne::
	trainerbattle_single TRAINER_201_DWAYNE, Route201_Text_DwayneIntro, Route201_Text_DwayneDefeated
	msgbox Route201_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
	end

Route201_Text_RouteSignLittleroot:
	.string "ROUTE 201\n"
	.string "{UP_ARROW} LITTLEROOT TOWN$"
