#include "Global.h"
#include "LevelApi.h"
#include "MCApi/itemstack.hpp"
#include "MCApi/spawner.hpp"
#include "MCApi/level.hpp"
#include "MCApi/ItemActor.hpp"
#include <string>
#include <vector>
#include "MCApi/actor.hpp"
BlockSource* LevelObj::getBlockSource(int dimid) {
    LocateService<Level>()->getDimension(dimid);
    auto dim = LocateService<Level>()->getDimension(dimid);
    return dAccess<BlockSource*>(dim, 96);
}

BlockSource* LevelObj::getBlockSource(Actor* ac) {
    return const_cast<BlockSource*>(&ac->getRegionConst());
}

Actor* LevelObj::getDamageSourceEntity(ActorDamageSource* ads) {
    char v83;
    ActorUniqueID v6 = *(ActorUniqueID*)(*(__int64(__fastcall**)(void*, char*))(*(uintptr_t*)ads + 64))(ads, &v83);
    return LocateService<Level>()->fetchEntity(v6, 0);
}