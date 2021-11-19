#include <SpawnerAPI.h>
#include <MCApi/Mob.hpp>
#include <MCApi/ItemStack.hpp>
#include <LevelAPI.h>

Mob* SpawnerObj::spawnMob(const FloatVec4& pos, std::string name) {
    try {
        if (name.find("minecraft:") == 0)
            name = name.substr(10);
        char a[168];
        Vec3 vec{ pos.x, pos.y, pos.z };
        ActorDefinitionIdentifier* ad = SymCall("??0ActorDefinitionIdentifier@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
            ActorDefinitionIdentifier*, ActorDefinitionIdentifier*, std::string&)((ActorDefinitionIdentifier*)a, name);
        return Spawner::spawnMob(*LevelObj::getBlockSource(pos.dim), *ad, nullptr, vec, 0, 1, 0);
    }
    catch (...) {
        return nullptr;
    }
}

ItemActor* SpawnerObj::spawnItem(const FloatVec4& pos, ItemStack* item) {
    try {
        Vec3 vec{ pos.x, pos.y, pos.z };
        ItemActor* ac = Spawner::spawnItem(*LevelObj::getBlockSource(pos.dim), *item, nullptr, vec, 0);
        return ac;
    }
    catch (...) {
        return nullptr;
    }
}