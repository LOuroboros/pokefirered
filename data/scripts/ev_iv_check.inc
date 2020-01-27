CheckIVs::
	special Special_ChooseMonFromParty
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq ButIRefuse
	compare VAR_0x8004, 255
	goto_if_ne CheckIVs_Proceed
CheckIVs_Proceed:
	lockall
	faceplayer
	special RyuIvCheckerDef
	msgbox RyuIVDebug1 6
	faceplayer
	special RyuIvCheckerOff
	msgbox RyuIVDebug2 4
	closemessage
	msgbox Decline 6
	releaseall
	end

CheckEVs::
	special Special_ChooseMonFromParty
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq ButIRefuse
	compare VAR_0x8004, 255
	goto_if_ne CheckEVs_Proceed
CheckEVs_Proceed:
	lockall
	faceplayer
	special RyuEvCheckerDef
	msgbox RyuEVDebug1 6
	faceplayer
	special RyuEvCheckerOff
	msgbox RyuEVDebug2 4
	closemessage
	msgbox Decline 6
	releaseall
	end

ResetEVs::
	special Special_ChooseMonFromParty
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq ButIRefuse
	compare VAR_0x8004, 255
	goto_if_ne ResetEVs_Proceed
ResetEVs_Proceed:
	lockall
	faceplayer
	special RyuResetEvs
	msgbox SuccessfulReset 6
	releaseall
	end

ButIRefuse:
	lockall
	faceplayer
	msgbox Decline 6
	releaseall
	end

RyuIVDebug1:
	.string "Chosen Pokémon Defensive IVs:\n"
	.string "HP: {STR_VAR_1}    Def: {STR_VAR_2}     SpDef: {STR_VAR_3}$"

RyuIVDebug2:
	.string "Chosen Pokémon Offensive IVs:\n"
	.string "Atk: {STR_VAR_1}    SpAtk: {STR_VAR_2}     Speed: {STR_VAR_3}$"

RyuEVDebug1:
	.string "Chosen Pokémon Defensive EVs:\n"
	.string "HP: {STR_VAR_1}    Def: {STR_VAR_2}     SpDef: {STR_VAR_3}$"

RyuEVDebug2:
	.string "Chosen Pokémon Offensive EVs:\n"
	.string "Atk: {STR_VAR_1}    SpAtk: {STR_VAR_2}     Speed: {STR_VAR_3}$"

Reject:
	.string "Sorry, I can't determine the stats\n"
	.string "of an EGG.$"

Decline:
	.string "Come back any time.$"

SuccessfulReset:
	.string "The EVs of your Pokémon have been\n"
	.string "reset. Come back anytime.$"
