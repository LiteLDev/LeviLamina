#include "ll/api/memory/Hook.h"

#include <memory>
#include <string_view>

#include "pl/Hook.h"

#include "ll/api/Logger.h"
#include "ll/api/memory/Memory.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/thread/GlobalThreadPauser.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

namespace ll::memory {

int hook(FuncPtr target, FuncPtr detour, FuncPtr* originalFunc, HookPriority priority, bool suspendThreads) {
    if (target == nullptr) {
        return -1;
    }
    std::unique_ptr<thread::GlobalThreadPauser> pauser;
    if (suspendThreads && getGamingStatus() != GamingStatus::Default) {
        pauser = std::make_unique<thread::GlobalThreadPauser>();
    }
    return pl::hook::pl_hook(target, detour, originalFunc, static_cast<pl::hook::Priority>(priority));
}

bool unhook(FuncPtr target, FuncPtr detour, bool suspendThreads) {
    std::unique_ptr<thread::GlobalThreadPauser> pauser;
    if (suspendThreads && getGamingStatus() != GamingStatus::Default) {
        pauser = std::make_unique<thread::GlobalThreadPauser>();
    }
    return pl::hook::pl_unhook(target, detour);
}

} // namespace ll::memory
