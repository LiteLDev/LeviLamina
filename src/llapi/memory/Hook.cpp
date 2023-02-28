#include "llapi/memory/Hook.h"

#include "pl/Hook.h"

namespace ll::memory {

int hook(FuncPtr target, FuncPtr detour, FuncPtr* originalFunc, HookPriority priority) {
    return pl::hook::pl_hook(target, detour, originalFunc, static_cast<pl::hook::Priority>(priority));
}

bool unhook(FuncPtr target, FuncPtr detour) { return pl::hook::pl_unhook(target, detour); }

} // namespace ll::memory
