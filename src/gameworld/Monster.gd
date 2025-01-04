class_name Monster
extends Actor

signal attacked

enum ActivationTrigger {
	ACTIVATE_ON_PLAYER,
	ACTIVATE_ON_NEAREST_HOSTILE,
	ACTIVATE_ON_GOAL,
	ACTIVATE_RANDOMLY
}

enum Flag {
	WAS_PROMOTED,
	WAS_DEMOTED,
	HAS_NEVER_BEEN_ACTIVATED,
	IS_BLIND,
	IS_DEAF,
	TELEPORTS_OUT_WHEN_DEACTIVATED
}

#enum Rank {
#	UNRANKED,
#	MINOR,
#	MAJOR,
#	MOTHER
#}

## Is this monster minor or major?
#var _rank : Rank = Rank.MINOR
var _targets : Array[Actor.Allegiance] = [Actor.Allegiance.PLAYER]
