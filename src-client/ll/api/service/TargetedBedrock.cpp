#include "ll/api/service/Bedrock.h"

#include <atomic>
#include <memory>

#include "ll/api/memory/Hook.h"

#include "ll/core/LeviLamina.h"
#include "mc/client/game/ClientInstance.h"
#include "mc/client/game/MinecraftGame.h"
#include "mc/client/multiplayer/MultiPlayerLevel.h"
#include "mc/client/network/LegacyClientNetworkHandler.h"
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
#include "mc/world/level/storage/DBStorage.h"
#include "mc/world/level/storage/DBStorageConfig.h"


namespace ll::service::inline bedrock {

// ServerInstance
static std::atomic<ServerInstance*> serverInstance;
// ClientInstance
static std::atomic<ClientInstance*> clientInstance;

// Minecraft
static std::atomic<Minecraft*> serverMinecraft;
static std::atomic<Minecraft*> clientMinecraft;

// CommandRegistry
static std::atomic<CommandRegistry*> serverCommandRegistry;
static std::atomic<CommandRegistry*> clientCommandRegistry;

LL_TYPE_INSTANCE_HOOK(ClientMinecraftDtor, HookPriority::High, ClientInstance, &ClientInstance::$dtor, void) {
    clientMinecraft = nullptr;
    origin();
}

LL_TYPE_INSTANCE_HOOK(ServerMinecraftGet, HookPriority::High, Minecraft, &Minecraft::init, void) {
    serverMinecraft = this;
    origin();
    serverCommandRegistry = this->mCommands->mRegistry.get();
}

LL_TYPE_INSTANCE_HOOK(ClientMinecraftGet, HookPriority::High, ClientInstance, &ClientInstance::$initCommands, void) {
    clientMinecraft = this->mUnka26806.as<std::unique_ptr<Minecraft>>().get();
    clientInstance  = this;
    origin();
    clientCommandRegistry = getClientMinecraft()->mCommands->mRegistry.get();
}

LL_TYPE_INSTANCE_HOOK(ServerMinecraftDtor, HookPriority::High, Minecraft, &Minecraft::$dtor, void) {
    serverMinecraft = nullptr;
    origin();
}
LL_TYPE_INSTANCE_HOOK(ClientInstanceDtor, HookPriority::High, ClientInstance, &ClientInstance::$dtor, void) {
    clientInstance = nullptr;
    origin();
}
LL_TYPE_INSTANCE_HOOK(ServerInstanceDtor, HookPriority::High, ServerInstance, &ServerInstance::$dtor, void) {
    serverInstance = nullptr;
    origin();
}
LL_TYPE_INSTANCE_HOOK(CommandRegistryDtor, HookPriority::High, CommandRegistry, &CommandRegistry::$dtor, void) {
    serverCommandRegistry = nullptr;
    clientCommandRegistry = nullptr;
    origin();
}

// Level
static std::atomic<Level*> serverlevel;
static std::atomic<Level*> multiPlayerLevel;

LL_TYPE_INSTANCE_HOOK(
    ServerLevelGetHook,
    ll::memory::HookPriority::High,
    VanillaGameModuleServer,
    &VanillaGameModuleServer::$configureLevel,
    void,
    Bedrock::NotNullNonOwnerPtr<::Level> const& level,
    Experiments const&                          experiments,
    ResourcePackManager&                        resourcePackManager,
    BaseGameVersion const&                      baseGameVersion,
    ServerScriptManager const*                  scriptManager
) {
    serverlevel = level.get();
    getLogger().debug("ServerLevel get");
    origin(level, experiments, resourcePackManager, baseGameVersion, scriptManager);
}

LL_TYPE_INSTANCE_HOOK(
    MultiPlayerLevelGetHook,
    ll::memory::HookPriority::High,
    VanillaGameModuleClient,
    &VanillaGameModuleClient::$configureLevel,
    void,
    IClientInstance&                                       client,
    Bedrock::NotNullNonOwnerPtr<::MultiPlayerLevel> const& level,
    Experiments const&                                     experiments,
    BaseGameVersion const&                                 baseGameVersion
) {
    multiPlayerLevel = level.get();
    getLogger().debug("MultiPlayerLevel get");
    origin(client, level, experiments, baseGameVersion);
}

LL_TYPE_INSTANCE_HOOK(LevelDestructor, HookPriority::High, Level, &Level::$dtor, void) {
    multiPlayerLevel = nullptr;
    serverlevel      = nullptr;
    origin();
}

// ServerNetworkHandler
static std::atomic<ServerNetworkHandler*> serverNetworkHandler;
LL_TYPE_INSTANCE_HOOK(
    ServerNetworkHandlerCtor,
    HookPriority::High,
    Minecraft,
    &Minecraft::getServerNetworkHandler,
    Bedrock::NonOwnerPointer<::ServerNetworkHandler>
) {
    unhook();
    auto res             = origin();
    serverNetworkHandler = res.mPointer;
    return res;
}
LL_TYPE_INSTANCE_HOOK(
    ServerNetworkHandlerDtor,
    HookPriority::High,
    ServerNetworkHandler,
    &ServerNetworkHandler::$dtor,
    void
) {
    serverNetworkHandler = nullptr;
    origin();
}

// NetworkSystem
static std::atomic<ClientNetworkSystem*> clientNetworkSystem;
static std::atomic<ServerNetworkSystem*> serverNetworkSystem;

LL_TYPE_INSTANCE_HOOK(
    ClientNetworkSystemCtor,
    HookPriority::High,
    MinecraftGame,
    &MinecraftGame::_initClientNetworkSystem,
    SerialWorkList::WorkResult
) {
    auto res            = origin();
    clientNetworkSystem = this->mUnka6f4b7.as<std::unique_ptr<ClientNetworkSystem>>().get();
    return res;
}

LL_TYPE_INSTANCE_HOOK(
    ServerNetworkSystemCtor,
    HookPriority::High,
    ServerNetworkSystem,
    &ServerNetworkSystem::getLocalNetworkId,
    NetworkIdentifier
) {
    unhook();
    serverNetworkSystem = this;
    return origin();
}

LL_TYPE_INSTANCE_HOOK(NetworkSystemDtor, HookPriority::High, NetworkSystem, &NetworkSystem::$dtor, void) {
    serverNetworkSystem = nullptr;
    clientNetworkSystem = nullptr;
    origin();
}

// ResourcePackRepository
static std::atomic<ResourcePackRepository*> resourcePackRepository;

LL_TYPE_INSTANCE_HOOK(
    ResourcePackRepositoryCtor,
    HookPriority::High,
    ResourcePackRepository,
    &ResourcePackRepository::_initialize,
    void
) {
    resourcePackRepository = this;
    origin();
}
LL_TYPE_INSTANCE_HOOK(
    ResourcePackRepositoryDtor,
    HookPriority::High,
    ResourcePackRepository,
    &ResourcePackRepository::$dtor,
    void
) {
    resourcePackRepository = nullptr;
    origin();
}

static std::atomic<DBStorage*> dBStorage;

LL_TYPE_INSTANCE_HOOK(
    DBStorageCtor,
    HookPriority::High,
    DBStorage,
    &DBStorage::$ctor,
    void*,
    DBStorageConfig                           config,
    Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> levelDbEnv
) {
    auto res  = origin(std::move(config), levelDbEnv);
    dBStorage = this;
    return res;
}
LL_TYPE_INSTANCE_HOOK(DBStorageDtor, HookPriority::High, DBStorage, &DBStorage::$dtor, void) {
    dBStorage = nullptr;
    origin();
}

optional_ref<ServerInstance> getServerInstance() { return serverInstance.load(); }
optional_ref<ClientInstance> getClientInstance() { return clientInstance.load(); }

optional_ref<Minecraft> getMinecraft() { return serverMinecraft.load(); }
optional_ref<Minecraft> getClientMinecraft() { return clientMinecraft.load(); }

optional_ref<Level> getLevel() { return serverlevel.load(); }
optional_ref<Level> getMultiPlayerLevel() { return multiPlayerLevel.load(); }

optional_ref<ServerNetworkHandler> getServerNetworkHandler() { return serverNetworkHandler.load(); }

optional_ref<RakNet::RakPeer> getRakPeer() { return nullptr; }

optional_ref<ResourcePackRepository> getResourcePackRepository() { return resourcePackRepository.load(); }

optional_ref<ServerNetworkSystem> getNetworkSystem() { return serverNetworkSystem.load(); }
optional_ref<ClientNetworkSystem> getClientNetworkSystem() { return clientNetworkSystem.load(); }

optional_ref<CommandRegistry> getCommandRegistry() { return serverCommandRegistry.load(); }
optional_ref<CommandRegistry> getClientCommandRegistry() { return clientCommandRegistry.load(); }

optional_ref<DBStorage> getDBStorage() { return dBStorage.load(); }
using HookReg = memory::HookRegistrar<
    ClientMinecraftDtor,
    ServerMinecraftGet,
    ClientMinecraftGet,
    ServerMinecraftDtor,
    ClientInstanceDtor,
    ServerInstanceDtor,
    CommandRegistryDtor,
    ServerLevelGetHook,
    MultiPlayerLevelGetHook,
    LevelDestructor,
    ServerNetworkHandlerCtor,
    ServerNetworkHandlerDtor,
    ClientNetworkSystemCtor,
    ServerNetworkSystemCtor,
    NetworkSystemDtor,
    ResourcePackRepositoryCtor,
    ResourcePackRepositoryDtor,
    DBStorageCtor,
    DBStorageDtor>;

static HookReg hookRegister;
} // namespace ll::service::inline bedrock
