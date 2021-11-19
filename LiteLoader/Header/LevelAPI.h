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
    LIAPI static BlockSource* getBlockSource(Actor* actor);
    
    LIAPI static Actor* getDamageSourceEntity(ActorDamageSource* ads);
};
