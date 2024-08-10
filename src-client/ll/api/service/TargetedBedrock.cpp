#include "ll/api/service/Bedrock.h"

#include <atomic>

#include "ll/api/memory/Hook.h"

#include "mc/deps/raknet/RakPeer.h"
#include "mc/deps/raknet/RakPeerInterface.h"
#include "mc/entity/systems/common/EntitySystemsCollection.h"
#include "mc/network/NetworkSystem.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/resources/ResourcePackRepository.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/commands/MinecraftCommands.h"
#include "mc/server/common/DedicatedServer.h"
#include "mc/server/common/PropertiesSettings.h"
#include "mc/server/common/commands/AllowListCommand.h"
#include "mc/world/Minecraft.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

namespace ll::service::inline bedrock {

using namespace ll::memory;

// Minecraft
static std::atomic<Minecraft*> minecraft;

LL_TYPE_INSTANCE_HOOK(MinecraftInit, HookPriority::High, Minecraft, &Minecraft::init, void) {
    minecraft = this;
    origin();
}
LL_INSTANCE_HOOK(MinecraftDestructor, HookPriority::High, "??1Minecraft@@UEAA@XZ", void) {
    minecraft = nullptr;
    origin();
}

optional_ref<Minecraft> getMinecraft() { return minecraft.load(); }

optional_ref<Level> getLevel() {
    return getMinecraft().and_then([](auto& minecraft) { return optional_ref{minecraft.getLevel()}; });
}

optional_ref<ServerNetworkHandler> getServerNetworkHandler() {
    return getMinecraft().and_then([](auto& minecraft) {
        return optional_ref{minecraft.getServerNetworkHandler().get()};
    });
}

optional_ref<RakNet::RakPeer> getRakPeer() { return nullptr; }

optional_ref<NetworkSystem> getNetworkSystem() {
    return getMinecraft().transform([](auto& minecraft) -> NetworkSystem& {
        return (NetworkSystem&)(minecraft.getClientNetworkSystem());
    });
}

optional_ref<CommandRegistry> getCommandRegistry() {
    return getMinecraft().transform([](auto& minecraft) -> CommandRegistry& {
        return minecraft.getCommands().getRegistry();
    });
}

} // namespace ll::service::inline bedrock
