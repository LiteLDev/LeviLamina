#include "ll/api/service/TargetedBedrock.h"
#include "ll/api/service/Bedrock.h"

#include <atomic>
#include <memory>

#include "ll/api/memory/Hook.h"

#include "ll/core/LeviLamina.h"
#include "mc/client/game/ClientInstance.h"
#include "mc/client/game/IMinecraftGame.h"
#include "mc/client/game/MinecraftGame.h"
#include "mc/client/multiplayer/MultiPlayerLevel.h"
#include "mc/client/network/LegacyClientNetworkHandler.h"
#include "mc/common/Globals.h"
#include "mc/deps/application/AppPlatform.h"
#include "mc/deps/application/gamecore/Platform_GameCore.h"
#include "mc/deps/core/utility/ServiceLocator.h"
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/deps/raknet/RakPeer.h"
#include "mc/deps/raknet/RakPeerInterface.h"
#include "mc/module/VanillaGameModuleClient.h"
#include "mc/network/ClientNetworkSystem.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/ServerNetworkSystem.h"
#include "mc/resources/ResourcePackRepository.h"
#include "mc/server/DedicatedServer.h"
#include "mc/server/PropertiesSettings.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/AllowListCommand.h"
#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/commands/MinecraftCommands.h"
#include "mc/server/module/VanillaGameModuleServer.h"
#include "mc/world/GameSession.h"
#include "mc/world/Minecraft.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"
#include "mc/world/level/biome/glue/BiomeJsonDocumentGlue.h"
#include "mc/world/level/storage/DBStorage.h"
#include "mc/world/level/storage/DBStorageConfig.h"


namespace ll::service::inline bedrock {

optional_ref<AppPlatform> getAppPlatform() { return ServiceLocator<AppPlatform>::get().get().get(); }

optional_ref<ServerInstance> getServerInstance() { return ServiceLocator<ServerInstance>::get().get().get(); }
optional_ref<ClientInstance> getClientInstance() {
    if (auto plat = sPlatform()) {
        if (auto game = plat->mMinecraftGame_Shim.get()) {
            return reinterpret_cast<ClientInstance*>(game->getPrimaryClientInstance().get().get());
        }
    }
    return nullptr;
}

optional_ref<Minecraft> getMinecraft() {
    if (auto ins = getServerInstance()) {
        return ins->mMinecraft.get();
    }
    return nullptr;
}
optional_ref<Minecraft> getClientMinecraft() {
    if (auto ins = getClientInstance()) {
        return ins->mUnk599652.as<std::unique_ptr<Minecraft>>().get();
    }
    return nullptr;
}

optional_ref<Level> getLevel() {
    if (auto minecraft = getMinecraft()) {
        return minecraft->getLevel();
    }
    return nullptr;
}

optional_ref<Level> getMultiPlayerLevel() {
    if (auto minecraft = getClientMinecraft()) {
        return minecraft->getLevel();
    }
    return nullptr;
}

optional_ref<ServerNetworkHandler> getServerNetworkHandler() {
    if (auto minecraft = getMinecraft()) {
        return minecraft->getServerNetworkHandler().get();
    }
    return nullptr;
}

optional_ref<RakNet::RakPeer> getRakPeer() { return nullptr; }

optional_ref<ResourcePackRepository> getResourcePackRepository() { return nullptr; }
optional_ref<ResourcePackRepository> getClientResourcePackRepository() {
    if (auto ins = getClientInstance()) {
        return reinterpret_cast<ResourcePackRepository&>(ins->getResourcePackRepository());
    }
    return nullptr;
}

optional_ref<NetworkSystem> getNetworkSystem() {
    if (auto mc = getMinecraft()) {
        return mc->getServerNetworkSystem();
    }
    return nullptr;
}
optional_ref<ServerNetworkSystem> getServerNetworkSystem() {
    if (auto mc = getMinecraft()) {
        return mc->getServerNetworkSystem();
    }
    return nullptr;
}
optional_ref<ClientNetworkSystem> getClientNetworkSystem() {
    if (auto ins = getClientInstance()) {
        return ins->getClientNetworkSystem();
    }
    return nullptr;
}

optional_ref<CommandRegistry> getCommandRegistry() {
    if (auto mc = getMinecraft()) {
        if (mc->mCommands) {
            return mc->mCommands->mRegistry.get();
        }
    }
    return nullptr;
}
optional_ref<CommandRegistry> getClientCommandRegistry() {
    if (auto mc = getClientMinecraft()) {
        if (mc->mCommands) {
            return mc->mCommands->mRegistry.get();
        }
    }
    return nullptr;
}

using HookReg = memory::HookRegistrar<>;

static HookReg hookRegister;
} // namespace ll::service::inline bedrock
