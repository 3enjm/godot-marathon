class_name MonsterRank
extends RefCounted

enum Rank {
	MINOR,
	MAJOR,
	MOTHER,
	# For the yetis
	WATER,
	LAVA,
	SEWAGE
}

static func rank_to_string(rank: Rank) -> String:
	match(rank):
		Rank.MINOR:		return "Minor"
		Rank.MAJOR:		return "Major"
		Rank.MOTHER:	return "Mother"
		Rank.LAVA:		return "Lava"
		Rank.WATER:		return "Water"
		Rank.SEWAGE:	return "Sewage"
	return ""
