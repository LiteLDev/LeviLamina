#include "ll/core/command/BuiltinCommands.h"

#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/memory/Memory.h"
#include "ll/core/Config.h"

#include "mc/deps/core/memory/IMemoryAllocator.h"

namespace ll::command {
void registerMemstatsCommand() {
    auto config = ll::getLeviConfig().modules.command.modManageCommand;
    if (!config.enabled) {
        return;
    }
    auto& cmd =
        CommandRegistrar::getInstance().getOrCreateCommand("memstats", "Query memory stats"_tr(), config.permission);
    cmd.overload().execute([&](CommandOrigin const&, CommandOutput&) {
        ll::memory::getDefaultAllocator().logCurrentState();
    });
}
} // namespace ll::command
