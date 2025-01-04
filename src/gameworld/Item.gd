class_name Item
extends Entity

enum Type {
	WEAPON,
	AMMUNITION,
	POWERUP,
	ITEM,
	WEAPON_POWERUP,
	BALL
}

@export var type : Type = Type.ITEM
@onready var animated_sprite: AnimatedSprite3D = $AnimatedSprite
