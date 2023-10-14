#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/CommandRegistry.h"

template <>
std::atomic_ushort& Bedrock::typeid_t<CommandRegistry>::_getCounter() {
    return *(std::atomic_ushort*)LL_RESOLVE_SYMBOL(
        "?storage@?1??_getCounter@?$typeid_t@VCommandRegistry@@@Bedrock@@CAAEAU?$atomic@G@std@@XZ@4U45@A"
    );
}