#include "ll/api/memory/Hook.h"

#include <memory>
#include <string_view>

#include "pl/Hook.h"

#include "ll/api/Logger.h"
#include "ll/api/memory/Memory.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/api/thread/GlobalThreadPauser.h"
#include "ll/api/utils/WinUtils.h"

namespace ll::memory {

int hook(FuncPtr target, FuncPtr detour, FuncPtr* originalFunc, HookPriority priority, bool suspendThreads) {
    std::unique_ptr<thread::GlobalThreadPauser> pauser;
    if (suspendThreads && getServerStatus() != ServerStatus::Default) {
        pauser = std::make_unique<thread::GlobalThreadPauser>();
    }
    return pl::hook::pl_hook(target, detour, originalFunc, static_cast<pl::hook::Priority>(priority));
}

bool unhook(FuncPtr target, FuncPtr detour, bool suspendThreads) {
    std::unique_ptr<thread::GlobalThreadPauser> pauser;
    if (suspendThreads && getServerStatus() != ServerStatus::Default) {
        pauser = std::make_unique<thread::GlobalThreadPauser>();
    }
    return pl::hook::pl_unhook(target, detour);
}

FuncPtr resolveIdentifier(std::string_view identifier, bool disableErrorOutput) {
    static Logger hookLogger("LeviLamina", true);
    if (auto pl = resolveSymbol(identifier, true); pl) {
        return pl;
    } else if (auto sig = resolveSignature(identifier); sig) {
        return sig;
    }
    // else if (auto dbgeng = (FuncPtr)stacktrace_utils::tryGetSymbolAddress(identifier); dbgeng) {
    //     return dbgeng;
    // }
    if (!disableErrorOutput) {
        hookLogger.fatal("Could not find symbol/signature in memory: {}", identifier);
        hookLogger.fatal("In module: {}", win_utils::getCallerModuleFileName());
    }
    return nullptr;
}

} // namespace ll::memory
