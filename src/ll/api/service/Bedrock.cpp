#define LL_GLOBAL_SERVICE_IMPL

#include "ll/api/service/Bedrock.h"

#include "mc/deps/raknet/RakPeer.h"
#include "mc/deps/raknet/RakPeerInterface.h"
#include "mc/entity/systems/common/EntitySystemsCollection.h"
#include "mc/network/NetworkSystem.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/resources/ResourcePackRepository.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/MinecraftCommands.h"
#include "mc/server/common/PropertiesSettings.h"
#include "mc/server/common/commands/AllowListCommand.h"
#include "mc/world/Minecraft.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

#include "ll/api/base/Hash.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/reflection/Reflection.h"
#include "ll/core/LeviLamina.h"

namespace {

using namespace ll::memory;

// Minecraft
optional_ref<Minecraft> minecraft;

LL_AUTO_TYPED_INSTANCE_HOOK(
    MinecraftServiceHook,
    HookPriority::High,
    Minecraft,
    &Minecraft::initAsDedicatedServer,
    void
) {
    minecraft = this;
    origin();
}
LL_AUTO_INSTANCE_HOOK(MinecraftDestructor, HookPriority::High, "??1Minecraft@@UEAA@XZ", void) {
    minecraft = nullptr;
    origin();
}

// PropertiesSettings
optional_ref<PropertiesSettings> propertiesSettings;

LL_AUTO_INSTANCE_HOOK(
    PropertiesSettingsConstructor,
    HookPriority::High,
    "??0PropertiesSettings@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
    PropertiesSettings*,
    std::string const& path
) {
    return propertiesSettings = origin(path);
}
LL_AUTO_INSTANCE_HOOK(PropertiesSettingsDestructor, HookPriority::High, "??1PropertiesSettings@@QEAA@XZ", void) {
    propertiesSettings = nullptr;
    origin();
}

// ServerNetworkHandler
optional_ref<ServerNetworkHandler> serverNetworkHandler;

LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerNetworkHandlerServiceHook,
    HookPriority::High,
    ServerNetworkHandler,
    &ServerNetworkHandler::allowIncomingConnections,
    void,
    std::string const& a1,
    bool               a2
) {
    serverNetworkHandler = this;
    unhook();
    origin(a1, a2);
}
LL_AUTO_INSTANCE_HOOK(ServerNetworkHandlerDestructor, HookPriority::High, "??1ServerNetworkHandler@@UEAA@XZ", void) {
    serverNetworkHandler = nullptr;
    origin();
}

// NetworkSystem
optional_ref<NetworkSystem> networkSystem;

LL_AUTO_INSTANCE_HOOK(
    NetworkSystemConstructor,
    HookPriority::High,
    "??0NetworkSystem@@IEAA@$$QEAUDependencies@0@@Z",
    NetworkSystem*,
    struct NetworkSystem::Dependencies&& dependencies
) {
    return networkSystem = origin(std::move(dependencies));
}
LL_AUTO_INSTANCE_HOOK(NetworkSystemDestructor, HookPriority::High, "??1NetworkSystem@@MEAA@XZ", void) {
    networkSystem = nullptr;
    origin();
}

// Level
optional_ref<Level> level;

LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerLevelServiceHook,
    HookPriority::High,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    level = ll::service::getMinecraft()->getLevel();
    origin(ins);
}
LL_AUTO_INSTANCE_HOOK(LevelDestructor, HookPriority::High, "??1Level@@UEAA@XZ", void) {
    level = nullptr;
    origin();
}

// RakNet::RakPeer
optional_ref<RakNet::RakPeer> rakPeer;

LL_AUTO_INSTANCE_HOOK(RakNetRakPeerConstructor, HookPriority::High, "??0RakPeer@RakNet@@QEAA@XZ", RakNet::RakPeer*) {
    unhook();
    return rakPeer = origin();
}

LL_AUTO_INSTANCE_HOOK(RakNetRakPeerDestructor, HookPriority::High, "??1RakPeer@RakNet@@UEAA@XZ", void) {
    if ((void*)this == (void*)ll::service::getRakPeer()) rakPeer = nullptr;
    origin();
}

// ResourcePackRepository
optional_ref<ResourcePackRepository> resourcePackRepository;

LL_AUTO_TYPED_INSTANCE_HOOK(
    ResourcePackRepositoryServiceHook,
    HookPriority::High,
    ResourcePackRepository,
    &ResourcePackRepository::_initialize,
    void
) {
    resourcePackRepository = this;
    origin();
}
LL_AUTO_INSTANCE_HOOK(
    ResourcePackRepositoryDestructor,
    HookPriority::High,
    "??1ResourcePackRepository@@QEAA@XZ",
    void
) {
    resourcePackRepository = nullptr;
    origin();
}
} // namespace

namespace ll::service::inline bedrock {

optional_ref<Minecraft> getMinecraft() { return minecraft; }

optional_ref<Level> getLevel() { return level; }

optional_ref<ServerNetworkHandler> getServerNetworkHandler() { return serverNetworkHandler; }

optional_ref<PropertiesSettings> getPropertiesSettings() { return propertiesSettings; }

optional_ref<RakNet::RakPeer> getRakPeer() { return rakPeer; }

optional_ref<NetworkSystem> getNetworkSystem() { return networkSystem; }

optional_ref<ResourcePackRepository> getResourcePackRepository() { return resourcePackRepository; }

} // namespace ll::service::inline bedrock
