#include "ll/api/memory/Hook.h"
#include "ll/api/ServerInfo.h"
#include "ll/api/memory/Memory.h"
#include "ll/api/thread/GlobalThreadPauser.h"
#include "ll/api/utils/StacktraceUtils.h"
#include "ll/api/utils/WinUtils.h"
#include "ll/core/LeviLamina.h"
#include "pl/Hook.h"

namespace ll::memory {

int hook(FuncPtr target, FuncPtr detour, FuncPtr* originalFunc, HookPriority priority) {
    if (getServerStatus() != ServerStatus::Default) {
        auto pause = ll::thread::GlobalThreadPauser{};
        return pl::hook::pl_hook(target, detour, originalFunc, static_cast<pl::hook::Priority>(priority));
    } else {
        return pl::hook::pl_hook(target, detour, originalFunc, static_cast<pl::hook::Priority>(priority));
    }
}

bool unhook(FuncPtr target, FuncPtr detour) {
    if (getServerStatus() != ServerStatus::Default) {
        auto pause = ll::thread::GlobalThreadPauser{};
        return pl::hook::pl_unhook(target, detour);
    } else {
        return pl::hook::pl_unhook(target, detour);
    }
}

FuncPtr resolveIdentifier(std::string_view identifier) {
    if (auto pl = resolveSymbol(identifier.data()); pl) {
        return pl;
    } else if (auto sig = resolveSignature(identifier); sig) {
        return sig;
    } else if (auto dbgeng = (FuncPtr)stacktrace_utils::tryGetSymbolAddress(identifier); dbgeng) {
        return dbgeng;
    }
    logger.fatal("Could not find symbol/signature in memory: {}", identifier);
    logger.fatal("In module: {}", win_utils::getCallerModuleFileName());
    return nullptr;
}

} // namespace ll::memory
