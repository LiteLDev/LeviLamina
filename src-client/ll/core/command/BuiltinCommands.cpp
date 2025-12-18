#include "ll/core/command/BuiltinCommands.h"
#include "ll/api/memory/Hook.h"

#include "mc/module/VanillaGameModuleClient.h"

namespace ll::command {
LL_TYPE_INSTANCE_HOOK(
    RegisterBuiltinCommands,
    ll::memory::HookPriority::Highest,
    VanillaGameModuleClient,
    &VanillaGameModuleClient::$setupStandardCommands,
    void,
    ::CommandRegistry& commandRegistry
) {
    origin(commandRegistry);
    registerTpdimCommand();
    registerVersionCommand();
    registerCrashCommand();
    registerModManageCommand();
}
void registerCommands() { static memory::HookRegistrar<RegisterBuiltinCommands> hooks{}; }
} // namespace ll::command
