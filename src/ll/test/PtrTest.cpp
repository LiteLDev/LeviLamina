#include "ll/api/memory/Hook.h"
#include "mc/entity/gamerefs_entity/EntityRegistry.h"
#include "mc/server/ServerInstance.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/definition/BlockDefinitionGroup.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"
#include "mc/world/level/material/Material.h"

#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StacktraceUtils.h"
#include "ll/core/LeviLamina.h"

#include "ll/api/memory/Closure.h"

struct SystemCategory;

#include "ll/api/service/Bedrock.h"
#include "mc/entity/systems/EntitySystems.h"
#include "mc/world/level/Level.h"


auto test() {
    // ll::logger.warn("mAllSystemsInfo");
    // auto& systems = ll::service::getLevel()->getEntitySystems().getDefaultCollection();

    // for (auto& info : systems.mAllSystemsInfo) {
    //     ll::logger.warn("info {}", info.mName);
    // }

    // struct EntitySystems::EditorSystemCategory
    // struct EntitySystems::GameSystemCategory
    // struct EntitySystems::UsedInClientMovementCorrections
    // struct EntitySystems::UsedInServerPlayerMovement
    // struct VanillaSystemCategories::ActorMove
    // struct VanillaSystemCategories::ExitVehicle
    // struct VanillaSystemCategories::MobJumpFromGround
    // struct VanillaSystemCategories::PositionPassenger
    // struct VanillaSystemCategories::RemovePassenger
    // struct VanillaSystemCategories::StopRiding
    // struct VanillaSystemCategories::UpdateEntityInside
    // struct VanillaSystemCategories::UpdateWaterState
    // struct VanillaSystemCategories::UsedByClientAndServerAuth

    // auto& vec = systems.mTickingSystemCategories;

    // ll::logger.warn("info safe:{} ", ((char*)&*vec.end() - (char*)&*vec.begin()) / vec.size());
    // for (auto& category :
    //      systems.mTickingSystemCategories) {
    //     ll::logger.warn("category :{} ", category.mCategory.value);
    //     for (auto id : category.mSystems) {
    //         ll::logger.warn("category sys:{} ", id);
    //     }
    //     ll::logger.warn("timing :{} ", category.mTimings.size());
    //     for (auto timing : category.mTimings) {
    //         ll::logger.warn("category sys:{} {}", timing.mMsTime,timing.mCount);
    //     }
    // }
    // ll::logger.warn("mAllSystemsInfo size {} {}", systems.mAllSystemsInfo.size(), systems.mAllSystems.size());
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ServerStartedEventHook,
    ll::memory::HookPriority::Low,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    origin(ins);
    // SharedPtr<BlockLegacy>::makeShared("hl:wd", 1234, Material::getMaterial(MaterialType::Dirt));
    test();
}

class Test;

#include "mc/entity/flags/ExitFromPassengerFlag.h"
#include "mc/world/components/FlagComponent.h"

size_t printHello(size_t data, int a) {
    ll::logger.warn("hello aaaaaaaa {} {}", data, a);
    if (data != 123) throw std::runtime_error("Test New Crash Logger");
    return 0;
}

#pragma warning(push)
#pragma warning(disable : 4723)

LL_AUTO_TYPE_INSTANCE_HOOK(
    BlockDefinitionGroupRegisterBlocks,
    HookPriority::Normal,
    BlockDefinitionGroup,
    &BlockDefinitionGroup::registerBlocks,
    void
) {
    ll::error_utils::printException(ll::logger, ll::error_utils::getWinLastError());

    try {
        char* pp = (char*)(0x123);
        *pp      = 'a';
    } catch (...) {
        ll::error_utils::printCurrentException(ll::logger);
    }

    try {
        int a = 0;
        int b = 2 / a;
        std::cout << "b = " << b << std::endl;
    } catch (...) {
        ll::error_utils::printCurrentException(ll::logger);
    }
    try {
        try {
            std::string s{"nonexistent.file"};
            try {
                std::ifstream file(s);
                file.exceptions(std::ios_base::failbit);
            } catch (...) {
                std::throw_with_nested(std::runtime_error("Couldn't open " + s));
            }
        } catch (...) {
            std::throw_with_nested(std::system_error(std::error_code{1, std::generic_category()}, "run() failed"));
        }
    } catch (...) {
        ll::error_utils::printCurrentException(ll::logger);
    }
    // throw std::runtime_error("Test New Crash Logger");

    auto c1 = ll::memory::NativeClosure(printHello, 123);

    auto f = std::function<size_t(int)>([](int a) { return printHello(123, a); });

    auto c2 = ll::memory::FunctionalClosure(f);

    c1.get()(654367);
    f(6376774);
    c2.get()(4619735);

    // auto& map        = BlockTypeRegistry::$mBlockLookupMap();
    // map["test:test"] = BlockTypeRegistry::lookupByName("minecraft:stone");

    // auto ptr = BlockTypeRegistry::lookupByName("test:test");

    // std::clog << "hii  " << bool(ptr) << ' ' << ptr->getTypeName() << std::endl;
    // std::cout << "hii  " << bool(ptr) << ' ' << ptr->getTypeName() << std::endl;
    ll::logger.warn(
        "{}",
        ll::memory::resolveIdentifier(
            "`anonymous namespace'::DefaultEntitySystemsCollection::internalGatherSystemTimings"
        )
    );

    origin();
}

#pragma warning(pop)


// LL_AUTO_TYPE_INSTANCE_HOOK(
//     EStickHook,
//     HookPriority::Normal,
//     EntitySystems,
//     &EntitySystems::tick,
//     void,
//     EntityRegistry& registry
// ) {
//     ll::logger.debug("tick {} {}", registry.mName, std::chrono::system_clock::now());
//     origin(registry);
// }
