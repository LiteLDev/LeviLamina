#include "ll/core/command/BuiltinCommands.h"
#include "ll/api/memory/Hook.h"

#include "mc/server/commands/ServerCommands.h"
#include "mc/server/commands/standard/TeleportCommand.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

namespace ll::command {
LL_TYPE_INSTANCE_HOOK(
    registerBuiltinCommands,
    ll::memory::HookPriority::Highest,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    origin(ins);
    registerVersionCommand();
    registerMemstatsCommand();
    registerCrashCommand();
    registerPluginManageCommand();
}
LL_STATIC_HOOK(
    registerTpdimCommands,
    ll::memory::HookPriority::Normal,
    TeleportCommand::setup,
    void,
    CommandRegistry& registry
) {
    origin(registry);
    registerTpdimCommand();
}
void registerCommands() { static memory::HookRegistrar<registerBuiltinCommands, registerTpdimCommands> hooks{}; }
} // namespace ll::command
