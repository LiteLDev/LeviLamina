#include "ll/api/memory/Hook.h"

#include "pl/Hook.h"

#include "ll/api/memory/Memory.h"

#include "ll/api/thread/GlobalThreadPauser.h"

namespace ll::memory {

int hook(FuncPtr target, FuncPtr detour, FuncPtr* originalFunc, HookPriority priority) {
    auto pause = ll::thread::GlobalThreadPauser{};
    return pl::hook::pl_hook(target, detour, originalFunc, static_cast<pl::hook::Priority>(priority));
}

bool unhook(FuncPtr target, FuncPtr detour) {
    auto pause = ll::thread::GlobalThreadPauser{};
    return pl::hook::pl_unhook(target, detour);
}

FuncPtr resolveIdentifier(char const* identifier) {
    auto p = resolveSymbol(identifier);
    return p != nullptr ? p : resolveSignature(identifier);
}

} // namespace ll::memory
