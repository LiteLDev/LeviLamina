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
#include "mc/deps/raknet/RakPeer.h"
#include "mc/module/VanillaGameModuleClient.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/ServerNetworkSystem.h"
#include "mc/resources/ResourcePackRepository.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/commands/MinecraftCommands.h"
#include "mc/server/module/VanillaGameModuleServer.h"
#include "mc/world/GameSession.h"
#include "mc/world/Minecraft.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"
#include "mc/world/level/storage/DBStorage.h"
#include "mc/world/level/storage/DBStorageConfig.h"


namespace ll::service::inline bedrock {


static std::atomic<ServerInstance*> serverInstance;
static std::atomic<ClientInstance*> clientInstance;

// ServerInstance
LL_TYPE_INSTANCE_HOOK(
    ServerInstanceConstructor,
    HookPriority::High,
    ServerInstance,
    &ServerInstance::$ctor,
    void*,
    ServerInstanceArguments&& args
) {
    auto res       = origin(std::move(args));
    serverInstance = this;
    return res;
}
LL_TYPE_INSTANCE_HOOK(ServerInstanceDestructor, HookPriority::High, ServerInstance, &ServerInstance::$dtor, void) {
    serverInstance = nullptr;
    origin();
}

// ClientInstance
LL_TYPE_INSTANCE_HOOK(
    ClientInstanceConstructor,
    HookPriority::High,
    ClientInstance,
    &ClientInstance::$ctor,
    void*,
    ClientInstanceArguments&& args
) {
    auto res       = origin(std::move(args));
    clientInstance = this;
    return res;
}
LL_TYPE_INSTANCE_HOOK(ClientInstanceDestructor, HookPriority::High, ClientInstance, &ClientInstance::$dtor, void) {
    clientInstance = nullptr;
    origin();
}

optional_ref<AppPlatform> getAppPlatform() { return ServiceLocator<AppPlatform>::get().get().get(); }

optional_ref<ServerInstance> getServerInstance() { return serverInstance.load(); }

optional_ref<ClientInstance> getClientInstance() { return clientInstance.load(); }

optional_ref<Minecraft> getMinecraft(bool isClientSide) {
    if (isClientSide) {
        if (auto ins = getClientInstance()) {
            return *ins->getServerData();
        }
    } else {
        if (auto ins = getServerInstance()) {
            return ins->mMinecraft.get();
        }
    }
    return nullptr;
}

optional_ref<Level> getLevel() {
    if (auto minecraft = getMinecraft(false)) {
        return minecraft->getLevel();
    }
    return nullptr;
}

optional_ref<Level> getMultiPlayerLevel() {
    if (auto minecraft = getMinecraft(true)) {
        return minecraft->getLevel();
    }
    return nullptr;
}

optional_ref<ServerNetworkHandler> getServerNetworkHandler(bool isClientSide) {
    if (auto minecraft = getMinecraft(isClientSide)) {
        return minecraft->getServerNetworkHandler().get();
    }
    return nullptr;
}

optional_ref<RakNet::RakPeer> getRakPeer() { return nullptr; }

optional_ref<ResourcePackRepository> getResourcePackRepository(bool isClientSide) {
    if (isClientSide) {
        if (auto ins = getClientInstance()) {
            return reinterpret_cast<ResourcePackRepository&>(ins->getResourcePackRepository());
        }
    }
    return nullptr;
}

optional_ref<NetworkSystem> getNetworkSystem(bool isClientSide) {
    if (isClientSide) {
        if (auto ins = getClientInstance()) {
            return ins->getClientNetworkSystem();
        }
    } else {
        if (auto mc = getMinecraft(isClientSide)) {
            return mc->getServerNetworkSystem();
        }
    }
    return nullptr;
}

optional_ref<CommandRegistry> getCommandRegistry(bool isClientSide) {
    if (auto mc = getMinecraft(isClientSide)) {
        if (mc->mCommands) {
            return mc->mCommands->mRegistry.get();
        }
    }
    return nullptr;
}

using HookReg = memory::HookRegistrar<
    ServerInstanceConstructor,
    ServerInstanceDestructor,
    ClientInstanceConstructor,
    ClientInstanceDestructor>;

static HookReg hookRegister;

} // namespace ll::service::inline bedrock
