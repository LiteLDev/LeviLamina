#include "ll/api/memory/Hook.h"
#include "mc/server/ServerInstance.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/definition/BlockDefinitionGroup.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"
#include "mc/world/level/material/Material.h"

auto test() {
    auto exists = BlockTypeRegistry::lookupByName("minecraft:stone");

    std::cout << HashedString("").hash << std::endl;
    std::cout << HashedString::computeHash("") << std::endl;

    std::cout << "123" << std::endl;
    if (exists) { std::cout << exists->getTypeName() << std::endl; }
    return exists;
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerStartedEventHook,
    ll::memory::HookPriority::Normal,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    origin(ins);
    // SharedPtr<BlockLegacy>::makeShared("hl:wd", 1234, Material::getMaterial(MaterialType::Dirt));
    test();
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    BlockDefinitionGroupRegisterBlocks,
    HookPriority::Normal,
    BlockDefinitionGroup,
    &BlockDefinitionGroup::registerBlocks,
    void
) {
    auto& map                      = BlockTypeRegistry::$mBlockLookupMap();
    map["test:test"] = BlockTypeRegistry::lookupByName("minecraft:stone");

    auto ptr = BlockTypeRegistry::lookupByName("test:test");

    std::cout << "hii  " << bool(ptr) << std::endl;
    origin();
}