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
