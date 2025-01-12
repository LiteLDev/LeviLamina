#include "ll/core/command/BuiltinCommands.h"
#include "ll/api/memory/Hook.h"

#include "mc/server/DedicatedServerCommands.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"


namespace ll::command {
LL_TYPE_STATIC_HOOK(
    RegisterBuiltinCommands,
    ll::memory::HookPriority::Highest,
    DedicatedServerCommands,
    &DedicatedServerCommands::setupStandaloneServer,
    void,
    ::Bedrock::NotNullNonOwnerPtr<::Minecraft> const& minecraft,
    ::IMinecraftApp&                                  app,
    ::Level&                                          level,
    ::LevelStorage&                                   levelStorage,
    ::DedicatedServer&                                dedicatedServer,
    ::AllowListFile&                                  allowListFile,
    ::ScriptSettings*                                 scriptSettings
) {
    origin(minecraft, app, level, levelStorage, dedicatedServer, allowListFile, scriptSettings);
    registerTpdimCommand();
    registerVersionCommand();
    registerMemstatsCommand();
    registerCrashCommand();
    registerModManageCommand();
}
void registerCommands() { static memory::HookRegistrar<RegisterBuiltinCommands> hooks{}; }
} // namespace ll::command
