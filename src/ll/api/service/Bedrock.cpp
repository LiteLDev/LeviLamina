#include "ll/api/service/Bedrock.h"

#include <atomic>

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

#include "ll/api/memory/Hook.h"
#include "ll/api/reflection/Reflection.h"
#include "ll/api/utils/HashUtils.h"
#include "ll/core/LeviLamina.h"

namespace ll::service::inline bedrock {

using namespace ll::memory;

// Minecraft
static std::atomic<Minecraft*> minecraft;

LL_TYPE_INSTANCE_HOOK(MinecraftInit, HookPriority::High, Minecraft, &Minecraft::initAsDedicatedServer, void) {
    minecraft = this;
    origin();
}
LL_INSTANCE_HOOK(MinecraftDestructor, HookPriority::High, "??1Minecraft@@UEAA@XZ", void) {
    minecraft = nullptr;
    origin();
}

// PropertiesSettings
static std::atomic<PropertiesSettings*> propertiesSettings;

LL_TYPE_INSTANCE_HOOK(
    PropertiesSettingsInit,
    HookPriority::High,
    DedicatedServer,
    &DedicatedServer::runDedicatedServerLoop,
    DedicatedServer::StartResult,
    Core::FilePathManager&                  filePathManager,
    PropertiesSettings&                     properties,
    LevelSettings&                          settings,
    AllowListFile&                          allowListFile,
    std::unique_ptr<class PermissionsFile>& permissionsFile
) {
    propertiesSettings               = &properties;
    DedicatedServer::StartResult res = origin(filePathManager, properties, settings, allowListFile, permissionsFile);
    propertiesSettings               = nullptr;
    return res;
}

// ServerNetworkHandler
static std::atomic<ServerNetworkHandler*> serverNetworkHandler;

LL_TYPE_INSTANCE_HOOK(
    ServerNetworkHandlerInit,
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
LL_INSTANCE_HOOK(ServerNetworkHandlerDestructor, HookPriority::High, "??1ServerNetworkHandler@@UEAA@XZ", void) {
    serverNetworkHandler = nullptr;
    origin();
}

// NetworkSystem
static std::atomic<NetworkSystem*> networkSystem;

LL_INSTANCE_HOOK(
    NetworkSystemConstructor,
    HookPriority::High,
    "??0NetworkSystem@@IEAA@$$QEAUDependencies@0@@Z",
    NetworkSystem*,
    struct NetworkSystem::Dependencies&& dependencies
) {
    return networkSystem = origin(std::move(dependencies));
}
LL_INSTANCE_HOOK(NetworkSystemDestructor, HookPriority::High, "??1NetworkSystem@@MEAA@XZ", void) {
    networkSystem = nullptr;
    origin();
}

// Level
static std::atomic<Level*> level;

LL_TYPE_INSTANCE_HOOK(
    ServerLevelInit,
    HookPriority::High,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ServerInstance& ins
) {
    level = ll::service::getMinecraft()->getLevel();
    origin(ins);
}
LL_INSTANCE_HOOK(LevelDestructor, HookPriority::High, "??1Level@@UEAA@XZ", void) {
    level = nullptr;
    origin();
}

// RakNet::RakPeer
static std::atomic<RakNet::RakPeer*> rakPeer;

LL_INSTANCE_HOOK(RakNetRakPeerConstructor, HookPriority::High, "??0RakPeer@RakNet@@QEAA@XZ", RakNet::RakPeer*) {
    unhook();
    return rakPeer = origin();
}

LL_INSTANCE_HOOK(RakNetRakPeerDestructor, HookPriority::High, "??1RakPeer@RakNet@@UEAA@XZ", void) {
    if ((void*)this == (void*)ll::service::getRakPeer()) rakPeer = nullptr;
    origin();
}

// ResourcePackRepository
static std::atomic<ResourcePackRepository*> resourcePackRepository;

LL_TYPE_INSTANCE_HOOK(
    ResourcePackRepositoryInit,
    HookPriority::High,
    ResourcePackRepository,
    &ResourcePackRepository::_initialize,
    void
) {
    resourcePackRepository = this;
    origin();
}
LL_INSTANCE_HOOK(ResourcePackRepositoryDestructor, HookPriority::High, "??1ResourcePackRepository@@QEAA@XZ", void) {
    resourcePackRepository = nullptr;
    origin();
}

// CommandRegistry
static std::atomic<CommandRegistry*> commandRegistry;

LL_TYPE_INSTANCE_HOOK(CommandRegistryConstructor, HookPriority::High, CommandRegistry, "??0CommandRegistry@@QEAA@XZ", CommandRegistry*) {
    return commandRegistry = origin();
}
LL_INSTANCE_HOOK(CommandRegistryDestructor, HookPriority::High, "??1CommandRegistry@@QEAA@XZ", void) {
    commandRegistry = nullptr;
    origin();
}

// ServerInstance
static std::atomic<ServerInstance*> serverInstance;

LL_TYPE_INSTANCE_HOOK(ServerInstanceConstructor, HookPriority::High, ServerInstance, "??0ServerInstance@@QEAA@AEAVIMinecraftApp@@AEBV?$not_null@V?$NonOwnerPointer@VServerInstanceEventCoordinator@@@Bedrock@@@gsl@@@Z", ServerInstance*) {
    return serverInstance = origin();
}
LL_INSTANCE_HOOK(ServerInstanceDestructor, HookPriority::High, "??1ServerInstance@@UEAA@XZ", void) {
    serverInstance = nullptr;
    origin();
}

optional_ref<Minecraft> getMinecraft() { return minecraft.load(); }

optional_ref<Level> getLevel() { return level.load(); }

optional_ref<ServerNetworkHandler> getServerNetworkHandler() { return serverNetworkHandler.load(); }

optional_ref<PropertiesSettings> getPropertiesSettings() { return propertiesSettings.load(); }

optional_ref<RakNet::RakPeer> getRakPeer() { return rakPeer.load(); }

optional_ref<NetworkSystem> getNetworkSystem() { return networkSystem.load(); }

optional_ref<ResourcePackRepository> getResourcePackRepository() { return resourcePackRepository.load(); }

optional_ref<CommandRegistry> getCommandRegistry() { return commandRegistry.load(); }

optional_ref<ServerInstance> getServerInstance() { return serverInstance.load(); }

using HookReg = memory::HookRegistrar<
    MinecraftInit,
    MinecraftDestructor,
    PropertiesSettingsInit,
    ServerNetworkHandlerInit,
    ServerNetworkHandlerDestructor,
    NetworkSystemConstructor,
    NetworkSystemDestructor,
    ServerLevelInit,
    LevelDestructor,
    RakNetRakPeerConstructor,
    RakNetRakPeerDestructor,
    ResourcePackRepositoryInit,
    ResourcePackRepositoryDestructor,
    CommandRegistryConstructor,
    CommandRegistryDestructor,
    ServerInstanceConstructor,
    ServerInstanceDestructor>;

static HookReg hookRegister;

} // namespace ll::service::inline bedrock
