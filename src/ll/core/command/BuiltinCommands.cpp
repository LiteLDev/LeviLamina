#include "ll/core/command/BuiltinCommands.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/Config.h"

#include "mc/server/commands/ServerCommands.h"

namespace ll::core::command {
LL_AUTO_STATIC_HOOK(
    registerBuiltinCommands,
    ll::memory::HookPriority::Normal,
    ServerCommands::setupStandardServer,
    void,
    Minecraft&         server,
    std::string const& networkCommands,
    std::string const& networkTestCommands,
    PermissionsFile*   permissionsFile
) {
    origin(server, networkCommands, networkTestCommands, permissionsFile);
    if (!globalConfig.modules.commands.enabled) {
        return;
    }
    if (globalConfig.modules.commands.versionCommand) {
        registerVersionCommand();
    }
    if (globalConfig.modules.commands.tpdimCommand) {
        registerTpdimCommand();
    }
}
} // namespace ll::core::command
