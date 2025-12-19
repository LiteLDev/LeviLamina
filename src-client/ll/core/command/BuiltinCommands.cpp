#include "ll/core/command/BuiltinCommands.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/memory/Hook.h"


#include "mc/client/commands/ClientCommands.h"
#include "mc/client/game/ClientInstance.h"
#include "mc/client/game/MinecraftGame.h"
#include "mc/module/VanillaGameModuleClient.h"


namespace ll::command {

LL_TYPE_STATIC_HOOK(
    RegisterBuiltinCommands,
    ll::memory::HookPriority::Highest,
    ClientCommands,
    &ClientCommands::setupStandard,
    void,
    ::MinecraftCommands&                   minecraftCommands,
    ::IMinecraftGame&                      minecraftGame,
    ::std::shared_ptr<::mce::TextureGroup> textureGroup,
    ::FileArchiver&                        archiver,
    bool                                   isHost,
    ::ActiveDirectoryIdentity const*       adIdentity,
    bool                                   scriptingEnabled,
    ::Level const&                         level
) {
    command::CommandRegistrar::getInstance(!isHost).clear();
    origin(minecraftCommands, minecraftGame, textureGroup, archiver, isHost, adIdentity, scriptingEnabled, level);
    registerVersionCommand(!isHost);
    registerCrashCommand(!isHost);
    registerModManageCommand(!isHost);

    if (isHost) {
        registerTpdimCommand(false);
    }
}

LL_TYPE_STATIC_HOOK(
    RegisterBuiltinCommandsReset,
    ll::memory::HookPriority::Highest,
    ClientCommands,
    &ClientCommands::setupStartMenuScreen,
    void,
    MinecraftCommands& minecraftCommands,
    IMinecraftGame&    minecraftClient
) {
    command::CommandRegistrar::getInstance(true).clear();
    origin(minecraftCommands, minecraftClient);
    registerVersionCommand(true);
    registerCrashCommand(true);
    registerModManageCommand(true);
}

// LL_TYPE_INSTANCE_HOOK(
//     RegisterBuiltinCommands,
//     ll::memory::HookPriority::Highest,
//     VanillaGameModuleClient,
//     &VanillaGameModuleClient::$setupStandardCommands,
//     void,
//     ::CommandRegistry& commandRegistry
// ) {
//     origin(commandRegistry);
// }


void registerCommands() { static memory::HookRegistrar<RegisterBuiltinCommands> hooks{}; }
} // namespace ll::command
