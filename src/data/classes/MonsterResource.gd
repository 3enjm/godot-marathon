class_name MonsterResource
extends Resource

@export var name : String = ""

# When toggled provide pre-defined variations following the ranking system.
# RESOURCES CANNOT POPULATE ARRAYS!
@export var variations : Array[MonsterVariationResource] = []

# Creates a monster under the given allegiance (allegiance is only defined 
# upon instantiation.
func instance_monster(
	variation: String, # How does this work with ranked variations?
	allegiance: Monster.Allegiance,
	is_invisible: bool = false
) -> Monster:
	return null
