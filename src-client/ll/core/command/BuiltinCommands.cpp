#include "ll/core/command/BuiltinCommands.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/OverloadData.h"
#include "ll/api/memory/Hook.h"

#include "mc/client/commands/ClientCommands.h"
#include "mc/client/game/ClientInstance.h"
#include "mc/client/game/MinecraftGame.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/scripting/ServerScriptManager.h"
#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/commands/ServerCommands.h"
#include "mc/world/Minecraft.h"


namespace ll::command {

LL_TYPE_INSTANCE_HOOK(
    RegisterBuiltinClientCommands,
    ll::memory::HookPriority::Highest,
    CommandRegistry,
    &CommandRegistry::loadRemoteCommands,
    void,
    AvailableCommandsPacket const& packet
) {
    command::CommandRegistrar::getInstance(true).clear();
    origin(packet);
    registerVersionCommand(true);
    registerCrashCommand(true);
    registerModManageCommand(true);
}

LL_STATIC_HOOK(
    RegisterBuiltinCommands,
    HookPriority::Highest,
    &ServerCommands::setupStandardServer,
    void,
    Minecraft&         server,
    std::string const& networkCommands,
    std::string const& networkTestCommands,
    PermissionsFile*   permissionsFile
) {
    origin(server, networkCommands, networkTestCommands, permissionsFile);
    registerVersionCommand(false);
    registerCrashCommand(false);
    registerModManageCommand(false);
    registerTpdimCommand(false);
}

LL_TYPE_INSTANCE_HOOK(UnRegisterBuiltinCommands, HookPriority::Highest, Minecraft, &Minecraft::$dtor, void) {
    command::CommandRegistrar::getInstance(false).clear();
    origin();
}


void registerCommands() {
    static memory::HookRegistrar<RegisterBuiltinCommands, RegisterBuiltinClientCommands, UnRegisterBuiltinCommands>
        hooks{};
}
} // namespace ll::command
