SaffronCity_Mart_MapScripts:: @ 816EFA2
	.byte 0

SaffronCity_Mart_EventScript_16EFA3:: @ 816EFA3
	msgbox gUnknown_819BFF1, MSGBOX_NPC
	end

SaffronCity_Mart_EventScript_16EFAC:: @ 816EFAC
	msgbox gUnknown_819BF8F, MSGBOX_NPC
	end

SaffronCity_Mart_EventScript_16EFB5:: @ 816EFB5
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	goto General_PokeMart_Script
