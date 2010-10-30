mutant_bark_mite_soldier = Creature:new {
	objectName = "@mob/creature_names:mutant_bark_mite_soldier",
	socialGroup = "Mut. Bark Mite",
	pvpFaction = "",
	faction = "",
	level = 24,
	chanceHit = 0.330000,
	damageMin = 230,
	damageMax = 240,
	baseXp = 2543,
	baseHAM = 6550,
	baseHAMmax = 6550,
	armor = 0,
	resists = {30,30,-1,20,20,-1,-1,-1,-1},
	meatType = "meat_insect",
	meatAmount = 25,
	hideType = "hide_bristley",
	hideAmount = 20,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE,
	creatureBitmask = KILLER + PACK + HERD,
	diet = CARNIVORE,

	templates = {"object/mobile/bark_mite.iff"},
	lootgroups = {},
	weapons = {"creature_spit_small_yellow"},
	attacks = {
		{"strongpoison",""}
	}
}

CreatureTemplates:addCreatureTemplate(mutant_bark_mite_soldier, "mutant_bark_mite_soldier")