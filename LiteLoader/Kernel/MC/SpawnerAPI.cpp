#include <Global.h>
#include <MC/Level.hpp>
#include <MC/Mob.hpp>
#include <MC/Spawner.hpp>
#include <MC/ItemStack.hpp>
#include <MC/ActorDefinitionIdentifier.hpp>

Mob* Spawner::spawnMob(Vec3& pos, int dim, std::string name) {
    try {
        if (name.find("minecraft:") == 0)
            name = name.substr(10);
        Vec3 vec{pos.x, pos.y, pos.z};
        ActorDefinitionIdentifier identifier(name);
        return spawnMob(*Level::getBlockSource(dim), identifier, nullptr, vec, 0, 1, 0);
    } catch (...) { return nullptr; }
}

ItemActor* Spawner::spawnItem(Vec3& pos, int dim, ItemStack* item) {
    try {
        Vec3 vec{pos.x, pos.y, pos.z};
        ItemActor* ac = spawnItem(*Level::getBlockSource(dim), *item, nullptr, vec, 0);
        return ac;
    } catch (...) { return nullptr; }
}