CeladonCity_DepartmentStore_5F_MapScripts:: @ 816BC40
	.byte 0

CeladonCity_DepartmentStore_5F_EventScript_16BC41:: @ 816BC41
	msgbox gUnknown_8195BBA, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_5F_EventScript_16BC4A:: @ 816BC4A
	msgbox gUnknown_8195CA0, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_5F_EventScript_16BC53:: @ 816BC53
	msgbox gUnknown_8195D14, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_5F_EventScript_16BC5C:: @ 816BC5C
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	message Text_MayIHelpYou
	waitmessage
	pokemart Items_16BC84
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
Items_16BC84:: @ 816BC84
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_LEPPA_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_LUM_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE
	release
	end

CeladonCity_DepartmentStore_5F_EventScript_16BC96:: @ 816BC96
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	message Text_MayIHelpYou
	waitmessage
	pokemart Items_16BCBC
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
Items_16BCBC:: @ 816BCBC
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_NONE
	release
	end
