#pragma once
#include "Global.h"
#include "MCApi/Spawner.hpp"

class Mob;
class ItemActor;
class SpawnerObj : public Spawner
{
	LIAPI Mob* spawnMob(const FloatVec4& pos, std::string name);
	LIAPI ItemActor* spawnItem(const FloatVec4& pos, ItemStack* item);
};