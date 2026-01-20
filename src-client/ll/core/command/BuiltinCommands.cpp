#include "ll/core/command/BuiltinCommands.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/OverloadData.h"
#include "ll/api/memory/Hook.h"

#include "mc/client/commands/ClientCommands.h"
#include "mc/client/game/MinecraftGame.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/scripting/ServerScriptManager.h"


namespace ll::command {

LL_TYPE_STATIC_HOOK(
    RegisterBuiltinClientCommands,
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
    if (!isHost) {
        CommandRegistrar::getInstance(true).clear();
        origin(minecraftCommands, minecraftGame, textureGroup, archiver, isHost, adIdentity, scriptingEnabled, level);
        registerVersionCommand(true);
        registerCrashCommand(true);
        registerModManageCommand(true);
        return;
    }
    origin(minecraftCommands, minecraftGame, textureGroup, archiver, isHost, adIdentity, scriptingEnabled, level);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    RegisterBuiltinCommands,
    HookPriority::Highest,
    ServerScriptManager,
    &ServerScriptManager::$onServerThreadStarted,
    EventResult,
    ::ServerInstance& ins
) {
    CommandRegistrar::getInstance(false).clear();
    auto res = origin(ins);
    registerVersionCommand(false);
    registerCrashCommand(false);
    registerModManageCommand(false);
    registerTpdimCommand(false);
    return res;
}

void registerCommands() {
    static memory::HookRegistrar<RegisterBuiltinCommands, RegisterBuiltinClientCommands> hooks{};
}
} // namespace ll::command
