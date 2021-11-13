#include "Global.h"
#include "LevelApi.h"
#include "mcapi/item.hpp"
#include "mcapi/spawner.hpp"
#include "mcapi/level.hpp"
#include <string>
#include <vector>
#include "mcapi/actor.hpp"
BlockSource* LevelObj::getBlockSource(int dimid) {
    LocateService<Level>()->getDimension(dimid);
    auto dim = LocateService<Level>()->getDimension(dimid);
    return dAccess<BlockSource*>(dim, 96);
}
BlockSource* LevelObj::getBlockSource(Actor* ac) {
    return const_cast<BlockSource*>(&ac->getRegionConst());
}
Actor* LevelObj::spawnMob(std::string name, const FloatVec4& pos) {
    try {
        if (name.find("minecraft:") == 0)
            name = name.substr(10);
        char                       a[168];
        Vec3                       vec{pos.x, pos.y, pos.z};
        ActorDefinitionIdentifier* ad = SymCall("??0ActorDefinitionIdentifier@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
                                                ActorDefinitionIdentifier*, ActorDefinitionIdentifier*, std::string&)((ActorDefinitionIdentifier*)a, name);
        return (Actor*)LocateService<Level>()->getSpawn()->spawnMob(*getBlockSource(pos.dim), *ad, nullptr, vec, 0, 1, 0);
    } catch (...) {
        return nullptr;
    }
}