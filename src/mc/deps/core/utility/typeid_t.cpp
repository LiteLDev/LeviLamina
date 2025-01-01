#include "mc/deps/core/utility/typeid_t.h"
#include "mc/server/commands/CommandRegistry.h"

#include "ll/api/base/Containers.h"
#include "ll/api/memory/Memory.h"

using namespace ll::literals;

template <>
std::atomic_ushort& Bedrock::typeid_t<CommandRegistry>::_getCounter() {
    return *(std::atomic_ushort*)"?storage@?1??_getCounter@?$typeid_t@VCommandRegistry@@@Bedrock@@CAAEAU?$atomic@G@std@"
                                 "@XZ@4U45@A"_symp;
}
#define LL_TYPEID_STORAGE_ID(TYPE, ID)                                                                                 \
    template <>                                                                                                        \
    Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, TYPE>() {                                     \
        static auto* id =                                                                                              \
            (Bedrock::typeid_t<CommandRegistry>*)"?id@?1???$type_id@VCommandRegistry@@" ID                             \
                                                 "@Bedrock@@YA?AV?$typeid_t@VCommandRegistry@@@1@XZ@4V21@A"_symp;      \
        return *id;                                                                                                    \
    }

LL_TYPEID_STORAGE_ID(CommandItem, "VCommandItem@@");
LL_TYPEID_STORAGE_ID(MobEffect const*, "PEBVMobEffect@@");
LL_TYPEID_STORAGE_ID(DimensionType, "V?$AutomaticID@VDimension@@H@@");
LL_TYPEID_STORAGE_ID(CommandIntegerRange, "VCommandIntegerRange@@");
LL_TYPEID_STORAGE_ID(ActorDefinitionIdentifier const*, "PEBUActorDefinitionIdentifier@@");

ushort Bedrock::crtypidImpl(size_t type) {
    static ll::ConcurrentDenseMap<size_t, ushort> map;
    ushort                                        res;
    map.lazy_emplace_l(
        type,
        [&](auto& pair) { res = pair.second; },
        [&](auto const& ctor) {
            res = ++typeid_t<CommandRegistry>::_getCounter();
            ctor(type, res);
        }
    );
    return res;
}
