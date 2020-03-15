@ /*********************/
@
@ Check IVs, Check EVs, Reset EVs
@
@ /*********************/
CheckIVs::
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge ButIRefuse
	goto CheckIVs_Proceed
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
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge ButIRefuse
	goto CheckEVs_Proceed
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
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge ButIRefuse
	goto ResetEVs_Proceed
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
	.string "HP: {STR_VAR_1}   Def: {STR_VAR_2}   SpDef: {STR_VAR_3}$"

RyuIVDebug2:
	.string "Chosen Pokémon Offensive IVs:\n"
	.string "Atk: {STR_VAR_1}   SpAtk: {STR_VAR_2}   Speed: {STR_VAR_3}$"

RyuEVDebug1:
	.string "Chosen Pokémon Defensive EVs:\n"
	.string "HP: {STR_VAR_1}   Def: {STR_VAR_2}   SpDef: {STR_VAR_3}$"

RyuEVDebug2:
	.string "Chosen Pokémon Offensive EVs:\n"
	.string "Atk: {STR_VAR_1}   SpAtk: {STR_VAR_2}   Speed: {STR_VAR_3}$"

Reject:
	.string "Sorry, I can't determine the stats\n"
	.string "of an EGG.$"

Decline:
	.string "Come back any time.$"

SuccessfulReset:
	.string "The EVs of your Pokémon have been\n"
	.string "reset. Come back anytime.$"
@----------------------------------------------------------------------------
@ /*********************/
@
@ Starter Kit
@ -99 Poké Balls, Great Balls, Ultra Balls and Master Balls.
@ -99 of each Evolutionary Stone
@ -99 Rare Candies
@ -1 Exp. Share and 6 Lucky Eggs
@ -10 pieces of each TM and 1 of each HM
@ -Give a 31x6 team with Docile Nature (Charmander, Bulbasaur, Squirtle, Pikachu, Snorlax, Lapras)
@ -Give a few Key Items like the Town Map and the Teachy TV.
@ -Give the Player a pair of Running Shoes and a Pokédex
@ -Set all the relevant flags and vars that properly start the Player's journey
@
@ /*********************/
GiveStarterKit::
	lock
	faceplayer
	additem ITEM_POKE_BALL, 99
	additem ITEM_GREAT_BALL, 99
	additem ITEM_ULTRA_BALL, 99
	additem ITEM_MASTER_BALL, 99
	additem ITEM_FIRE_STONE, 99
	additem ITEM_WATER_STONE, 99
	additem ITEM_THUNDER_STONE, 99
	additem ITEM_LEAF_STONE, 99
	additem ITEM_SUN_STONE, 99
	additem ITEM_MOON_STONE, 99
	additem ITEM_SHINY_STONE, 99
	additem ITEM_DUSK_STONE, 99
	additem ITEM_DAWN_STONE, 99
	additem ITEM_ICE_STONE, 99
	playfanfare MUS_FANFA1
	msgbox PlayerGotEvolutionaryStonesSet 4
	waitfanfare
	closemessage
	additem ITEM_RARE_CANDY, 99
	additem ITEM_EXP_SHARE, 1
	additem ITEM_LUCKY_EGG, 5
	playfanfare MUS_FANFA1
	msgbox PlayerGotTrainingItemsSet 4
	waitfanfare
	closemessage
	additem ITEM_HM01, 1
	additem ITEM_HM02, 1
	additem ITEM_HM03, 1
	additem ITEM_HM04, 1
	additem ITEM_HM05, 1
	additem ITEM_HM06, 1
	additem ITEM_HM07, 1
	additem ITEM_HM08, 1
	additem ITEM_TM01, 10
	additem ITEM_TM02, 10
	additem ITEM_TM03, 10
	additem ITEM_TM04, 10
	additem ITEM_TM05, 10
	additem ITEM_TM06, 10
	additem ITEM_TM07, 10
	additem ITEM_TM08, 10
	additem ITEM_TM09, 10
	additem ITEM_TM10, 10
	additem ITEM_TM11, 10
	additem ITEM_TM12, 10
	additem ITEM_TM13, 10
	additem ITEM_TM14, 10
	additem ITEM_TM15, 10
	additem ITEM_TM16, 10
	additem ITEM_TM17, 10
	additem ITEM_TM18, 10
	additem ITEM_TM19, 10
	additem ITEM_TM20, 10
	additem ITEM_TM21, 10
	additem ITEM_TM22, 10
	additem ITEM_TM23, 10
	additem ITEM_TM24, 10
	additem ITEM_TM25, 10
	additem ITEM_TM26, 10
	additem ITEM_TM27, 10
	additem ITEM_TM28, 10
	additem ITEM_TM29, 10
	additem ITEM_TM30, 10
	additem ITEM_TM31, 10
	additem ITEM_TM32, 10
	additem ITEM_TM33, 10
	additem ITEM_TM34, 10
	additem ITEM_TM35, 10
	additem ITEM_TM36, 10
	additem ITEM_TM37, 10
	additem ITEM_TM38, 10
	additem ITEM_TM39, 10
	additem ITEM_TM40, 10
	additem ITEM_TM41, 10
	additem ITEM_TM42, 10
	additem ITEM_TM43, 10
	additem ITEM_TM44, 10
	additem ITEM_TM45, 10
	additem ITEM_TM46, 10
	additem ITEM_TM47, 10
	additem ITEM_TM48, 10
	additem ITEM_TM49, 10
	additem ITEM_TM50, 10
	playfanfare MUS_FANFA1
	msgbox PlayerGotLearnableMovesSet 4
	waitfanfare
	closemessage
	givecustommon SPECIES_BULBASAUR, 10, 0, NATURE_DOCILE, 0, 31
	givecustommon SPECIES_CHARMANDER, 10, 0, NATURE_DOCILE, 0, 31
	givecustommon SPECIES_SQUIRTLE, 10, 0, NATURE_DOCILE, 0, 31
	givecustommon SPECIES_PIKACHU, 10, 0, NATURE_DOCILE, 0, 31
	givecustommon SPECIES_SNORLAX, 10, 0, NATURE_DOCILE, 0, 31
	givecustommon SPECIES_LAPRAS, 10, 0, NATURE_DOCILE, 0, 31
	setflag FLAG_SYS_POKEMON_GET
	playfanfare MUS_FANFA1
	msgbox PlayerGotFullTeam 4
	waitfanfare
	closemessage
	additem ITEM_TOWN_MAP, 1
	additem ITEM_TEACHY_TV, 1
	playfanfare MUS_FANFA1
	msgbox PlayerGotStartingKeyItems 4
	waitfanfare
	closemessage
	setflag FLAG_SYS_RUNNING_SHOES
	setflag FLAG_SYS_POKEDEX_GET
	playfanfare MUS_FANFA1
	msgbox PlayerGotEssentials 4
	waitfanfare
	closemessage
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
	setflag FLAG_PALLET_TOWN_LADY_MOVED_FROM_SIGN
	setflag FLAG_VISITED_OAKS_LAB
	setvar VAR_STARTER_MON, 0 @ Chose Charmander
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
	setflag FLAG_HIDE_RIVAL_IN_LAB
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6 @ Parcel delivery done
	setvar VAR_MAP_SCENE_PALLET_TOWN_GARYS_HOUSE, 2 @ Obtained the Town Map
	setvar RECEIVED_TOWN_MAP, TRUE
	setflag FLAG_HIDE_TOWN_MAP
	setvar VAR_MAP_SCENE_ROUTE22, 1 @ Ready to fight the Rival in Route 22
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2 @ Parcel delivery done
	setflag FLAG_HIDE_POKEDEX
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2 @ Old Man's catching tutorial done
	setvar VAR_MAP_SCENE_PEWTER_CITY, 2 @ Received the Running Shoes in Pewter City
	playfanfare MUS_FANFA1
	msgbox StartingFlagsGotSet 4
	waitfanfare
	closemessage
	msgbox Decline 6
	release
	end

PlayerGotEvolutionaryStonesSet:
	.string "{PLAYER} got a pack\nof Evolutionary Stones!$"

PlayerGotTrainingItemsSet:
	.string "{PLAYER} got various training items!$"

PlayerGotLearnableMovesSet:
	.string "{PLAYER} got a lot of TMs and HMs!$"

PlayerGotFullTeam:
	.string "{PLAYER} got a full Pokémon team!$"

PlayerGotStartingKeyItems:
	.string "{PLAYER} got a few key items!$"

PlayerGotEssentials:
	.string "{PLAYER} got a few essentials!$"

StartingFlagsGotSet:
	.string "Various flags and vars were set!$"
