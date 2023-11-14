#include "ll/api/memory/Hook.h"
#include "mc/server/ServerInstance.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/definition/BlockDefinitionGroup.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"
#include "mc/world/level/material/Material.h"

#include "ll/api/base/ErrorInfo.h"
#include "ll/api/utils/StacktraceUtils.h"
#include "ll/core/LeviLamina.h"

#include "ll/api/memory/Closure.h"

auto test() {
    auto exists = BlockTypeRegistry::lookupByName("minecraft:stone");
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

class Test;

#include "mc/entity/flags/ExitFromPassengerFlag.h"
#include "mc/world/components/FlagComponent.h"

size_t printHello(size_t data) {
    ll::logger.warn("hello aaaaaaaa {}", data);
    if (data != 123) throw std::runtime_error("Test New Crash Logger");
    return 0;
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    BlockDefinitionGroupRegisterBlocks,
    HookPriority::Normal,
    BlockDefinitionGroup,
    &BlockDefinitionGroup::registerBlocks,
    void
) {
    std::cout << "type_hash  " << entt::type_hash<FlagComponent<ExitFromPassengerFlag>>::value() << std::endl;

    ll::utils::error_info::printException(ll::utils::error_info::getWinLastError());

    try {
        char* pp = (char*)(0x123);
        *pp      = 'a';
    } catch (...) { ll::utils::error_info::printCurrentException(); }

    try {
        int a = 0;
        int b = 2 / a;
        std::cout << "b = " << b << std::endl;
    } catch (...) { ll::utils::error_info::printCurrentException(); }
#if _HAS_CXX23
    // static ll::utils::stacktrace_utils::SymbolLoader sl{};
#endif
    try {
        try {
            std::string s{"nonexistent.file"};
            try {
                std::ifstream file(s);
                file.exceptions(std::ios_base::failbit);
            } catch (...) {
#if _HAS_CXX23
                auto stack = ll::utils::error_info::stacktraceFromCurrExc();
                ll::logger.debug("\n{}", ll::utils::stacktrace_utils::toString(stack));
#endif
                std::throw_with_nested(std::runtime_error("Couldn't open " + s));
            }
        } catch (...) {
            std::throw_with_nested(std::system_error(std::error_code{1, std::generic_category()}, "run() failed"));
        }
    } catch (...) {
        ll::utils::error_info::printCurrentException();
#if _HAS_CXX23
        auto stack = std::stacktrace::current();
        ll::logger.debug("\n{}", ll::utils::stacktrace_utils::toString(stack));
#endif
    }
    // throw std::runtime_error("Test New Crash Logger");

    auto c1 = ll::NativeClosure(printHello, 123);

    auto f = std::function<void(void)>(std::bind(printHello, 123));

    // auto c2 = ll::NativeClosure(printHello, 49795726147);

    (*c1.get())();
    f();
    // (*c2.get())();

    // auto& map        = BlockTypeRegistry::$mBlockLookupMap();
    // map["test:test"] = BlockTypeRegistry::lookupByName("minecraft:stone");

    // auto ptr = BlockTypeRegistry::lookupByName("test:test");

    // std::clog << "hii  " << bool(ptr) << ' ' << ptr->getTypeName() << std::endl;
    // std::cout << "hii  " << bool(ptr) << ' ' << ptr->getTypeName() << std::endl;
    origin();
}