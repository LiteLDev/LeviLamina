#include "llapi/Global.h"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/Mob.hpp"
#include "llapi/mc/Spawner.hpp"
#include "llapi/mc/ItemStack.hpp"
#include "llapi/mc/ActorDefinitionIdentifier.hpp"

Mob* Spawner::spawnMob(Vec3 const& pos, int dim, std::string name) {
    try {
        if (name.starts_with("minecraft:")) {
            name = name.substr(10);
        }
        ActorDefinitionIdentifier identifier(name);
        return spawnMob(*Level::getBlockSource(dim), identifier, nullptr, pos, 0, 1, 0);
    } catch (...) { return nullptr; }
}

ItemActor* Spawner::spawnItem(Vec3 const& pos, int dim, ItemStack* item) {
    try {
        ItemActor* ac = spawnItem(*Level::getBlockSource(dim), *item, nullptr, pos, 0);
        return ac;
    } catch (...) { return nullptr; }
}