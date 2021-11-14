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

Actor* LevelObj::spawnMob(std::string name, const FloatVec4& pos) {
    try {
        if (name.find("minecraft:") == 0)
            name = name.substr(10);
        char a[168];
        Vec3 vec{pos.x, pos.y, pos.z};
        ActorDefinitionIdentifier* ad = SymCall("??0ActorDefinitionIdentifier@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
                                                ActorDefinitionIdentifier*, ActorDefinitionIdentifier*, std::string&)((ActorDefinitionIdentifier*)a, name);
        return (Actor*)LocateService<Level>()->getSpawn()->spawnMob(*getBlockSource(pos.dim), *ad, nullptr, vec, 0, 1, 0);
    } catch (...) {
        return nullptr;
    }
}

class Spawner;
ItemActor* LevelObj::spawnItem(const FloatVec4& pos, ItemStack* item) {
    try {
        Spawner* sp = SymCall("?getSpawner@Level@@UEBAAEAVSpawner@@XZ", Spawner*, Level*)(LocateService<Level>());
        Vec3 vec{ pos.x, pos.y, pos.z };
        ItemActor* ac = sp->spawnItem(*LevelObj::getBlockSource(pos.dim), *item, nullptr, vec, 0);
        return ac;
    }
    catch (...) {
        return nullptr;
    }
}

Actor* LevelObj::getDamageSourceEntity(ActorDamageSource* ads) {
    char v83;
    ActorUniqueID v6 = *(ActorUniqueID*)(*(__int64(__fastcall**)(void*, char*))(*(uintptr_t*)ads + 64))(ads, &v83);
    return LocateService<Level>()->fetchEntity(v6, 0);
}