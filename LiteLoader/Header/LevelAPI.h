#pragma once
#include "Global.h"
#include "MCApi/Level.hpp"

class Actor;
class ActorDamageSource;
class ItemStack;
class ItemActor;

struct LevelObj : public Level {
public:
    LIAPI static BlockSource* getBlockSource(int dimid);
    LIAPI static BlockSource* getBlockSource(Actor*);
    LIAPI static Actor* spawnMob(std::string name, const FloatVec4& pos);
    LIAPI static ItemActor* spawnItem(const FloatVec4& pos, ItemStack* item);
    LIAPI static Actor* getDamageSourceEntity(ActorDamageSource* ads);
};
