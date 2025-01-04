class_name Actor
extends Entity

enum Allegiance {
	ENEMY,
	PLAYER,
	NEUTRAL
}

var _vitality : int = 100
var _invisible : bool = false
var _flys : bool = false
var _allegiance : Allegiance = Allegiance.NEUTRAL
