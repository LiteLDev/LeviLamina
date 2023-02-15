#include "llapi/memory/Hook.h"

namespace ll::memory {

int hook(FuncPtr target, FuncPtr detour, FuncPtr* originalFunc, Priority priority) {
    return pl::hook::pl_hook(target, detour, originalFunc, priority);
}

bool unhook(FuncPtr target, FuncPtr detour) { return pl::hook::pl_unhook(target, detour); }

} // namespace ll::memory
