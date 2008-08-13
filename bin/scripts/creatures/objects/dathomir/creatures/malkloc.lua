--Copyright (C) 2008 <SWGEmu>


--This File is part of Core3.

--This program is free software; you can redistribute 
--it and/or modify it under the terms of the GNU Lesser 
--General Public License as published by the Free Software
--Foundation; either version 2 of the License, 
--or (at your option) any later version.

--This program is distributed in the hope that it will be useful, 
--but WITHOUT ANY WARRANTY; without even the implied warranty of 
--MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
--See the GNU Lesser General Public License for
--more details.

--You should have received a copy of the GNU Lesser General 
--Public License along with this program; if not, write to
--the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

--Linking Engine3 statically or dynamically with other modules 
--is making a combined work based on Engine3. 
--Thus, the terms and conditions of the GNU Lesser General Public License 
--cover the whole combination.

--In addition, as a special exception, the copyright holders of Engine3 
--give you permission to combine Engine3 program with free software 
--programs or libraries that are released under the GNU LGPL and with 
--code included in the standard release of Core3 under the GNU LGPL 
--license (or modified versions of such code, with unchanged license). 
--You may copy and distribute such a system following the terms of the 
--GNU LGPL for Engine3 and the licenses of the other code concerned, 
--provided that you include the source code of that other code when 
--and as the GNU LGPL requires distribution of source code.

--Note that people who make modified versions of Engine3 are not obligated 
--to grant this special exception for their modified versions; 
--it is their choice whether to do so. The GNU Lesser General Public License 
--gives permission to release a modified version without this exception; 
--this exception also makes it possible to release a modified version 
--which carries forward this exception.
malkloc = Creature:new {
      objectName = "malkloc",  -- Lua Object Name
      creatureType = "ANIMAL",
      faction = "Malkloc",
      gender = "",

      stfName = "a Malkloc",
      objectCRC = 197708576, 
      socialGroup = "Malkloc",
      named = FALSE, 

      level = 22,
      xp = 2006,

      combatFlags = ATTACKABLE_FLAG + ENEMY_FLAG,

      healthMax = 6600,
      healthMin = 5400,
      strength = 500,
      constitution = 500,

      actionMax = 6600,
      actionMin = 5400,
      quickness = 500,
      stamina = 500,

      mindMax = 6600,
      mindMin = 5400,
      focus = 500,
      willpower = 500,

      height = 1, -- Size of creature
      armor = 1, -- 0 = None; 1 = Light; 2 = Medium; 3 = Heavy
      kinetic = 15,
      energy = 20,
      electricity = -1,
      stun = 45,
      blast = 0,
      heat = -1,
      cold = -1,
      acid = 0,
      lightsaber = 0,

      accuracy = 200,

      healer = 0,

      pack = 1,
      herd = 1,
      stalker = 0,
      killer = 0,
      aggressive = 0,
      invincible = 0,

      attackCreatureOnSight = "", -- Enter socialGroups 

      weapon = "", -- File path to weapon -> object\xxx\xxx\xx
      weaponName = "", -- Name ex. 'a Vibrolance'
      weaponTemp = "", -- Weapon Template ex. 'lance_vibrolance'
      weaponClass = "", -- Weapon Class ex. 'PolearmMeleeWeapon'
      weaponEquipped = 0,
      weaponMinDamage = 0,
      weaponMaxDamage = 0,
      weaponAttackSpeed = 0,
      weaponDamageType = "", -- ELECTRICITY, KINETIC, etc
      weaponArmorPiercing = "", -- LIGHT, NONE, MEDIUM, HEAVY

      alternateWeapon = "", -- File path to weapon -> object\xxx\xxx\xx
      alternateWeaponName = "", -- Name ex. 'a Vibrolance'
      alternateWeaponTemp = "", -- Weapon Template ex. 'lance_vibrolance'
      alternateWeaponClass = "", -- Weapon Class ex. 'PolearmMeleeWeapon'
      alternateWeaponEquipped = 0,
      alternateWeaponMinDamage = 0,
      alternateWeaponMaxDamage = 0,
      alternateWeaponAttackSpeed = 0,
      alternateWeaponDamageType = "", -- ELECTRICITY, KINETIC, etc
      alternateWeaponArmorPiercing = "", -- LIGHT, NONE, MEDIUM, HEAVY

      internalNPCDamageModifier = 0.3, -- Damage Modifier to other NPC's

      lootGroup = "0,1,2,3", -- Group it belongs to for loot

      tame = 0.25,  -- Likely hood to be tamed

      milk = 0,

      boneType = "bone_mammal_dathomir",
      boneMax = 1000,

      hideType = "hide_leathery_dathomir",
      hideMax = 1200,

      meatType = "meat_herbivore_dathomir",
      meatMax = 1100,

      skills = { "malklocAttack1" },
      -- respawnTimer = 180,

      behaviorScript = "", -- Link to the behavior script for this object
}

Creatures:addCreature(malkloc, 197708576) --  Add to Global Table
