#include "ll/api/memory/Hook.h"

#include "pl/Hook.h"

#include "ll/api/memory/Memory.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/thread/GlobalThreadPauser.h"

namespace ll::memory {

bool shouldHookSuspendThreads() { return getGamingStatus() != GamingStatus::Default; }

int hook(FuncPtr target, FuncPtr detour, FuncPtr* originalFunc, HookPriority priority, bool suspendThreads) {
    if (target == nullptr) {
        return -1;
    }
    std::optional<thread::GlobalThreadPauser> pauser;
    if (suspendThreads && shouldHookSuspendThreads()) {
        pauser.emplace();
    }
    return pl::hook::pl_hook(target, detour, originalFunc, static_cast<pl::hook::Priority>(priority));
}
int hookEx(
    FuncPtr             target,
    FuncPtr             detour,
    FuncPtr*            originalFunc,
    HookPriority        priority,
    RegisterSaveOptions options,
    bool                suspendThreads
) {
    if (target == nullptr) {
        return -1;
    }
    std::optional<thread::GlobalThreadPauser> pauser;
    if (suspendThreads && shouldHookSuspendThreads()) {
        pauser.emplace();
    }
    return pl::hook::pl_hook_ex(
        target,
        detour,
        originalFunc,
        static_cast<pl::hook::Priority>(priority),
        static_cast<pl::hook::RegisterSaveOptions>(options)
    );
}
bool unhook(FuncPtr target, FuncPtr detour, bool suspendThreads) {
    std::optional<thread::GlobalThreadPauser> pauser;
    if (suspendThreads && shouldHookSuspendThreads()) {
        pauser.emplace();
    }
    return pl::hook::pl_unhook(target, detour);
}
bool hookOptions(FuncPtr target, RegisterSaveOptions options, bool replace, bool suspendThreads) {
    if (target == nullptr) {
        return false;
    }
    std::optional<thread::GlobalThreadPauser> pauser;
    if (suspendThreads && shouldHookSuspendThreads()) {
        pauser.emplace();
    }
    return pl::hook::pl_hook_options(target, static_cast<pl::hook::RegisterSaveOptions>(options), replace);
}
} // namespace ll::memory
