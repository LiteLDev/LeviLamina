#include "ll/api/service/Bedrock.h"

#include <atomic>

#include "ll/api/memory/Hook.h"

#include "mc/deps/ecs/systems/EntitySystemsCollection.h"
#include "mc/deps/raknet/RakPeer.h"
#include "mc/deps/raknet/RakPeerInterface.h"
#include "mc/network/NetworkSystem.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/resources/ResourcePackRepository.h"
#include "mc/server/DedicatedServer.h"
#include "mc/server/PropertiesSettings.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/AllowListCommand.h"
#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/commands/MinecraftCommands.h"
#include "mc/server/commands/standard/TeleportCommand.h"
#include "mc/world/GameSession.h"
#include "mc/world/Minecraft.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

#include "ll/core/LeviLamina.h"

namespace ll::service::inline bedrock {

std::atomic<CommandRegistry*> commandRegistry;

LL_AUTO_STATIC_HOOK(
    registerTpdimCommands,
    memory::HookPriority::High,
    &TeleportCommand::setup,
    void,
    CommandRegistry& registry
) {
    getLogger().debug("TeleportCommand::setup");

    commandRegistry = std::addressof(registry);
    origin(registry);
}

std::atomic<ServerInstance*> serverInstance;

optional_ref<ServerInstance> getServerInstance() { return serverInstance.load(); }

optional_ref<Minecraft> getMinecraft() {
    return getServerInstance().and_then([](auto& server) { return optional_ref{server.mMinecraft.get()}; });
}

optional_ref<Level> getLevel() {
    return getMinecraft().and_then([](auto& minecraft) { return optional_ref{minecraft.mGameSession->mLevel.get()}; });
}

optional_ref<ServerNetworkHandler> getServerNetworkHandler() {
    return getMinecraft().and_then([](auto& minecraft) {
        return optional_ref{minecraft.mGameSession->mServerNetworkHandler.get()};
    });
}
optional_ref<RakNet::RakPeer> getRakPeer() { return nullptr; }

optional_ref<NetworkSystem> getNetworkSystem() {
    return getMinecraft().transform([](auto& minecraft) -> NetworkSystem& {
        return (NetworkSystem&)(minecraft.mNetwork.toClientNetworkSystem());
    });
}

optional_ref<CommandRegistry> getCommandRegistry() {
    // return getMinecraft().transform([](auto& minecraft) -> CommandRegistry& {
    //     return *minecraft.mCommands->mRegistry;
    // });
    return commandRegistry.load();
}
} // namespace ll::service::inline bedrock
