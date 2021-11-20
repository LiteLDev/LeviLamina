#pragma once
#include "Global.h"
#include "MCApi/Level.hpp"

class Actor;
class ActorDamageSource;
class ItemStack;
class ItemActor;
class Block;
class Tag;

struct LevelObj : public Level {
public:
    LIAPI static BlockSource* getBlockSource(int dimid);
    LIAPI static BlockSource* getBlockSource(Actor* actor);
    LIAPI static Actor* getDamageSourceEntity(ActorDamageSource* ads);
    
    LIAPI static bool setBlock(IntVec4 pos, Block* block);
    LIAPI static bool setBlock(IntVec4 pos, const string &name, unsigned short tileData);
    LIAPI static bool setBlock(IntVec4 pos, Tag* nbt);

    LIAPI static bool spawnParticle(FloatVec4 pos, const string& type);
};
