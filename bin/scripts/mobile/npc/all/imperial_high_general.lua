imperial_high_general = Creature:new {
	objectName = "@mob/creature_names:imperial_high_general",
	socialGroup = "Imperial",
	pvpFaction = "Imperial",
	faction = "",
	level = 29,
	chanceHit = 0.380000,
	damageMin = 280,
	damageMax = 290,
	baseXp = 3005,
	baseHAM = 8300,
	baseHAMmax = 10100,
	armor = 0,
	resists = {0,0,0,-1,40,-1,40,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + KILLER,
	diet = HERBIVORE,

	templates = {},
	lootgroups = {},
	weapons = {"imperial_weapons_heavy"},
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(imperial_high_general, "imperial_high_general")