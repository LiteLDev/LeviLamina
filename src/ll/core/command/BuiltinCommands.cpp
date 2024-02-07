#include "ll/core/command/BuiltinCommands.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/Config.h"

#include "mc/server/commands/ServerCommands.h"
#include "mc/server/commands/standard/TeleportCommand.h"

namespace ll::command {
LL_STATIC_HOOK(
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
    if (globalConfig.modules.commands.versionCommand) {
        registerVersionCommand();
    }
}
LL_STATIC_HOOK(
    registerTpdimCommands,
    ll::memory::HookPriority::Normal,
    TeleportCommand::setup,
    void,
    CommandRegistry& registry
) {
    origin(registry);
    if (globalConfig.modules.commands.tpdimCommand) {
        registerTpdimCommand();
    }
}
void registerCommands() { static memory::HookRegistrar<registerBuiltinCommands, registerTpdimCommands> hooks{}; }
} // namespace ll::command
