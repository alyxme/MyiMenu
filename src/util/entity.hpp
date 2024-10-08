#pragma once
#include <script/types.hpp>
#include <rage/vector.hpp>

namespace rage
{
	class netObject;
	class CEntity;
}

namespace big::entity
{
	void cage_ped(Ped ped);
	void clean_ped(Ped ped);
	bool take_control_of(Entity ent, int timeout = 300);
	void delete_entity(Entity& ent, bool force = false);
	bool raycast(Entity* ent);
	bool raycast(Vector3* endcoor);
	bool network_has_control_of_entity(rage::netObject* net_object);
	std::vector<Entity> get_entities(bool vehicles, bool peds, bool props = false, bool include_self_veh = false);
	bool load_ground_at_3dcoord(Vector3& location);
	bool request_model(rage::joaat_t hash);
	double distance_to_middle_of_screen(const rage::fvector2& screen_pos);
	Entity get_entity_closest_to_middle_of_screen(rage::fwEntity** pointer = nullptr, std::vector<Entity> ignore_entities = {}, bool include_veh = true, bool include_ped = true, bool include_prop = true, bool include_players = true);
	void force_remove_network_entity(rage::CDynamicEntity* entity, player_ptr for_player = nullptr, bool delete_locally = true);
	void force_remove_network_entity(std::uint16_t net_id, int ownership_token = -1, player_ptr for_player = nullptr, bool delete_locally = true);
}
