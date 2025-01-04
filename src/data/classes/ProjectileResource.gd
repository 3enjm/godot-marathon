class_name ProjectileResource
extends Resource

@export var damage : int = 0
# Flyby sound
@export var flyby : AudioStream
# Impact sound
@export var impact_sound : AudioStream

#@export var impact_sprite : Sprite3D

@export var impact_type : Projectile.ImpactType

@export var can_bounce : bool

@export var max_bounces : int

## This effects how the projectile bounces
@export var weight: float
