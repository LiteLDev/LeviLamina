#include <Global.h>
#include <MC/Spawner.hpp>
#include <MC/Mob.hpp>
#include <MC/ItemStack.hpp>
#include <MC/ActorDefinitionIdentifier.hpp>
#include <MC/Level.hpp>

Mob* Spawner::spawnMob(Vec3& pos, int dim, std::string name) {
    try {
        if (name.find("minecraft:") == 0)
            name = name.substr(10);
        char a[168];
        Vec3 vec{ pos.x, pos.y, pos.z };
        ActorDefinitionIdentifier* ad = SymCall("??0ActorDefinitionIdentifier@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
            ActorDefinitionIdentifier*, ActorDefinitionIdentifier*, std::string&)((ActorDefinitionIdentifier*)a, name);
        return spawnMob(*Level::getBlockSource(dim), *ad, nullptr, vec, 0, 1, 0);
    }
    catch (...) {
        return nullptr;
    }
}

ItemActor* Spawner::spawnItem(Vec3& pos, int dim, ItemStack* item) {
    try {
        Vec3 vec{ pos.x, pos.y, pos.z };
        ItemActor* ac = spawnItem(*Level::getBlockSource(dim), *item, nullptr, vec, 0);
        return ac;
    }
    catch (...) {
        return nullptr;
    }
}