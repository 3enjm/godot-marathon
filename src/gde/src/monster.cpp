#include "monster.hpp"
#include <godot_cpp/core/binder_common.hpp>
#include <godot_cpp/core/class_db.hpp>

void Monster::_bind_methods() {
	
	// Constants for activate_nearby_monsters
	BIND_ENUM_CONSTANT(_pass_one_zone_border);
	BIND_ENUM_CONSTANT(_passed_zone_border);
	BIND_ENUM_CONSTANT(_activate_invisible_monsters);
	BIND_ENUM_CONSTANT(_activate_deaf_monsters);
	BIND_ENUM_CONSTANT(_pass_solid_lines);
	BIND_ENUM_CONSTANT(_use_activation_biases);
	BIND_ENUM_CONSTANT(_activation_cannot_be_avoided);
	BIND_ENUM_CONSTANT(_cannot_pass_superglue);
	BIND_ENUM_CONSTANT(_activate_glue_monsters);
	
	// Activation biases
	BIND_ENUM_CONSTANT(_activate_on_player);
	BIND_ENUM_CONSTANT(_activate_on_nearest_hostile);
	BIND_ENUM_CONSTANT(_activate_on_goal);
	BIND_ENUM_CONSTANT(_activate_randomly);

	// Monster types
	
	BIND_ENUM_CONSTANT(_monster_marine);
	BIND_ENUM_CONSTANT(_monster_tick_energy);
	BIND_ENUM_CONSTANT(_monster_tick_oxygen);
	BIND_ENUM_CONSTANT(_monster_tick_kamakazi);
	BIND_ENUM_CONSTANT(_monster_compiler_minor);
	BIND_ENUM_CONSTANT(_monster_compiler_major);
	BIND_ENUM_CONSTANT(_monster_compiler_minor_invisible);
	BIND_ENUM_CONSTANT(_monster_compiler_major_invisible);
	BIND_ENUM_CONSTANT(_monster_fighter_minor);
	BIND_ENUM_CONSTANT(_monster_fighter_major);
	BIND_ENUM_CONSTANT(_monster_fighter_minor_projectile);
	BIND_ENUM_CONSTANT(_monster_fighter_major_projectile);
	BIND_ENUM_CONSTANT(_civilian_crew);
	BIND_ENUM_CONSTANT(_civilian_science);
	BIND_ENUM_CONSTANT(_civilian_security);
	BIND_ENUM_CONSTANT(_civilian_assimilated);
	BIND_ENUM_CONSTANT(_monster_hummer_minor);
	BIND_ENUM_CONSTANT(_monster_hummer_major);
	BIND_ENUM_CONSTANT(_monster_hummer_big_minor);
	BIND_ENUM_CONSTANT(_monster_hummer_big_major);

	ADD_SIGNAL(MethodInfo("sound_emitted", PropertyInfo(Variant::STRING, "sound_name")));
	ADD_SIGNAL(MethodInfo("monster_type_changed", PropertyInfo(Variant::INT, "new_type")));
}

/*
short Monster::get_type() {
	return type;
}

void Monster::set_type(short new_type) {
	if ((new_type < NUMBER_OF_MONSTER_TYPES) && (new_type >= _monster_marine)) {
		if (new_type != type) {
			type = new_type
		}
	}
}
*/
