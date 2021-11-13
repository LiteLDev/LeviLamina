#pragma once
#include "Global.h"
class Actor;
class BlockSource;
class Block;
class FishingHook;
namespace LL {
BlockSource* getBlockSourceByActor(Actor* actor);
BlockSource* getBlockSourceByDim(int dimid);
int          gtBlockDimensionId(BlockSource* bs);
Block*       getBlockByPos(IntVec4* pos);
Block*       getBlockByPos(BlockPos* bp, BlockSource* bs);
Block*       getBlockByPos(BlockPos* bp, int dimid);
Block*       getBlockByPos(int x, int y, int z, BlockSource* bs);
Actor*       getFishingHookOwner(FishingHook* fh);
Actor*       getDamageSourceEntity(ActorDamageSource* ads);
}

