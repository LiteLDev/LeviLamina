#include "ll/api/service/Bedrock.h"

#include "ll/api/memory/Hook.h"

#include "mc/common/IMinecraftApp.h"
#include "mc/deps/raknet/RakPeer.h"
#include "mc/gameplayhandlers/ServerInstanceEventHandler.h"
#include "mc/network/NetworkSystem.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/resources/ResourcePackRepository.h"
#include "mc/server/DedicatedServer.h"
#include "mc/server/PropertiesSettings.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/AllowListCommand.h"
#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/commands/MinecraftCommands.h"
#include "mc/world/Minecraft.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

namespace ll::service::inline bedrock {

// PropertiesSettings
static std::atomic<PropertiesSettings*> propertiesSettings;

LL_TYPE_INSTANCE_HOOK(
    PropertiesSettingsInit,
    HookPriority::High,
    DedicatedServer,
    &DedicatedServer::runDedicatedServerLoop,
    ::DedicatedServer::StartResult,
    ::Core::FilePathManager&              filePathManager,
    ::PropertiesSettings&                 properties,
    ::LevelSettings&                      settings,
    ::AllowListFile&                      userAllowList,
    ::std::unique_ptr<::PermissionsFile>& permissionsFile,
    ::Bedrock::ActivationArguments const& args,
    ::TestConfig&                         testConfig
) {
    propertiesSettings = &properties;
    DedicatedServer::StartResult res =
        origin(filePathManager, properties, settings, userAllowList, permissionsFile, args, testConfig);
    propertiesSettings = nullptr;
    return res;
}


// Minecraft
static std::atomic<Minecraft*> minecraft;

// TODO: not working
LL_TYPE_INSTANCE_HOOK(MinecraftInit, HookPriority::High, Minecraft, &Minecraft::init, void) {
    minecraft = this;
    origin();
}
LL_TYPE_INSTANCE_HOOK(MinecraftDestructor, HookPriority::High, Minecraft, &Minecraft::$dtor, void) {
    minecraft = nullptr;
    origin();
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
LL_TYPE_INSTANCE_HOOK(
    ServerNetworkHandlerDestructor,
    HookPriority::High,
    ServerNetworkHandler,
    &ServerNetworkHandler::$dtor,
    void
) {
    serverNetworkHandler = nullptr;
    origin();
}

// NetworkSystem
static std::atomic<NetworkSystem*> networkSystem;

LL_TYPE_INSTANCE_HOOK(
    NetworkSystemConstructor,
    HookPriority::High,
    NetworkSystem,
    &NetworkSystem::$ctor,
    void*,
    struct NetworkSystem::Dependencies&& dependencies
) {
    auto res      = origin(std::move(dependencies));
    networkSystem = this;
    return res;
}
LL_TYPE_INSTANCE_HOOK(NetworkSystemDestructor, HookPriority::High, NetworkSystem, &NetworkSystem::$dtor, void) {
    networkSystem = nullptr;
    origin();
}

// Level
static std::atomic<Level*> level;

LL_TYPE_INSTANCE_HOOK(
    ServerLevelInit,
    HookPriority::High,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerInitializeEnd,
    void,
    ServerInstance& ins
) {
    level = ins.mMinecraft->getLevel();
    origin(ins);
}
LL_TYPE_INSTANCE_HOOK(LevelDestructor, HookPriority::High, Level, &Level::$dtor, void) {
    level = nullptr;
    origin();
}

// RakNet::RakPeer
static std::atomic<RakNet::RakPeer*> rakPeer;

LL_TYPE_INSTANCE_HOOK(RakNetRakPeerConstructor, HookPriority::High, RakNet::RakPeer, &RakNet::RakPeer::$ctor, void*) {
    unhook();
    auto res = origin();
    rakPeer  = this;
    return res;
}

LL_TYPE_INSTANCE_HOOK(RakNetRakPeerDestructor, HookPriority::High, RakNet::RakPeer, &RakNet::RakPeer::$dtor, void) {
    if ((void*)this == (void*)getRakPeer()) rakPeer = nullptr;
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
LL_TYPE_INSTANCE_HOOK(
    ResourcePackRepositoryDestructor,
    HookPriority::High,
    ResourcePackRepository,
    &ResourcePackRepository::$dtor,
    void
) {
    resourcePackRepository = nullptr;
    origin();
}

// CommandRegistry
static std::atomic<CommandRegistry*> commandRegistry;

LL_TYPE_INSTANCE_HOOK(
    CommandRegistryConstructor,
    HookPriority::High,
    CommandRegistry,
    &CommandRegistry::$ctor,
    void*,
    bool eduMode
) {
    auto res        = origin(eduMode);
    commandRegistry = this;
    return res;
}
LL_TYPE_INSTANCE_HOOK(CommandRegistryDestructor, HookPriority::High, CommandRegistry, &CommandRegistry::$dtor, void) {
    commandRegistry = nullptr;
    origin();
}

// ServerInstance
static std::atomic<ServerInstance*> serverInstance;

LL_TYPE_INSTANCE_HOOK(
    ServerInstanceConstructor,
    HookPriority::High,
    ServerInstance,
    &ServerInstance::$ctor,
    void*,
    ::IMinecraftApp&                                                       app,
    ::Bedrock::NotNullNonOwnerPtr<::ServerInstanceEventCoordinator> const& coordinator
) {
    auto res       = origin(app, coordinator);
    serverInstance = this;
    return res;
}
LL_TYPE_INSTANCE_HOOK(ServerInstanceDestructor, HookPriority::High, ServerInstance, &ServerInstance::$dtor, void) {
    serverInstance = nullptr;
    origin();
}

optional_ref<Minecraft> getMinecraft() { return minecraft.load(); }

optional_ref<Level> getLevel() { return level.load(); }

optional_ref<ServerNetworkHandler> getServerNetworkHandler() { return serverNetworkHandler.load(); }

optional_ref<RakNet::RakPeer> getRakPeer() { return rakPeer.load(); }

optional_ref<NetworkSystem> getNetworkSystem() { return networkSystem.load(); }

optional_ref<ResourcePackRepository> getResourcePackRepository() { return resourcePackRepository.load(); }

optional_ref<CommandRegistry> getCommandRegistry() { return commandRegistry.load(); }

optional_ref<ServerInstance> getServerInstance() { return serverInstance.load(); }

optional_ref<PropertiesSettings> getPropertiesSettings() { return propertiesSettings.load(); }

using HookReg = memory::HookRegistrar<
    PropertiesSettingsInit,
    MinecraftInit,
    MinecraftDestructor,
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
