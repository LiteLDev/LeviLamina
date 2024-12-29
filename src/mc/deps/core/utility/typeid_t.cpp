#include "mc/deps/core/utility/typeid_t.h"
#include "mc/server/commands/CommandRegistry.h"

#include "ll/api/base/Containers.h"

using namespace ll::literals;

template <>
std::atomic_ushort& Bedrock::typeid_t<CommandRegistry>::_getCounter() {
    return *(std::atomic_ushort*)"?storage@?1??_getCounter@?$typeid_t@VCommandRegistry@@@Bedrock@@CAAEAU?$atomic@G@std@"
                                 "@XZ@4U45@A"_symp;
}
#define LL_TYPEID_STORAGE_SYMBOL(TYPE, SYMBOL)                                                                         \
    template <>                                                                                                        \
    Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, TYPE>() {                                     \
        static auto* id =                                                                                              \
            (Bedrock::typeid_t<CommandRegistry>*)"?id@?1???$type_id@VCommandRegistry@@" SYMBOL                         \
                                                 "@Bedrock@@YA?AV?$typeid_t@VCommandRegistry@@@1@XZ@4V21@A"_sig        \
                                                                                                                       \
                                                                                                                       \
                                                     .resolve(true);                                                   \
        if (!id) {                                                                                                     \
            static auto* fn = (Bedrock::typeid_t<CommandRegistry>(*)()                                                 \
            ) "??$type_id@VCommandRegistry@@" SYMBOL "@Bedrock@@YA?AV?$typeid_t@VCommandRegistry@@@0@XZ"_sig           \
                                                                                                                       \
                                                                                                                       \
                                  .resolve();                                                                          \
            if (fn) {                                                                                                  \
                return fn();                                                                                           \
            }                                                                                                          \
            return 0;                                                                                                  \
        }                                                                                                              \
        return *id;                                                                                                    \
    }

LL_TYPEID_STORAGE_SYMBOL(CommandItem, "VCommandItem@@");
LL_TYPEID_STORAGE_SYMBOL(MobEffect const*, "PEBVMobEffect@@");
LL_TYPEID_STORAGE_SYMBOL(DimensionType, "V?$AutomaticID@VDimension@@");
LL_TYPEID_STORAGE_SYMBOL(CommandIntegerRange, "VCommandIntegerRange@@");
LL_TYPEID_STORAGE_SYMBOL(ActorDefinitionIdentifier const*, "PEBUActorDefinitionIdentifier@@");

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
