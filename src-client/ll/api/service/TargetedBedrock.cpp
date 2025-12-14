#include "ll/api/service/TargetedBedrock.h"
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
#include "mc/world/level/biome/glue/BiomeJsonDocumentGlue.h"

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

// Level
static std::atomic<Level*> serverlevel;
static std::atomic<Level*> multiPlayerLevel;


// ServerNetworkHandler
static std::atomic<ServerNetworkHandler*> serverNetworkHandler;


// NetworkSystem
static std::atomic<ClientNetworkSystem*> clientNetworkSystem;
static std::atomic<ServerNetworkSystem*> serverNetworkSystem;
static std::atomic<NetworkSystem*> networkSystem;
// ResourcePackRepository
static std::atomic<ResourcePackRepository*> resourcePackRepository;

// DBStorage
static std::atomic<DBStorage*> dBStorage;


optional_ref<ServerInstance> getServerInstance() { return serverInstance.load(); }
optional_ref<ClientInstance> getClientInstance() { return clientInstance.load(); }

optional_ref<Minecraft> getMinecraft() { return serverMinecraft.load(); }
optional_ref<Minecraft> getClientMinecraft() { return clientMinecraft.load(); }

optional_ref<Level> getLevel() { return serverlevel.load(); }
optional_ref<Level> getMultiPlayerLevel() { return multiPlayerLevel.load(); }

optional_ref<ServerNetworkHandler> getServerNetworkHandler() { return serverNetworkHandler.load(); }

optional_ref<RakNet::RakPeer> getRakPeer() { return nullptr; }

optional_ref<ResourcePackRepository> getResourcePackRepository() { return resourcePackRepository.load(); }

optional_ref<NetworkSystem> getNetworkSystem() { return networkSystem.load(); }
optional_ref<ServerNetworkSystem> getServerNetworkSystem() { return serverNetworkSystem.load(); }
optional_ref<ClientNetworkSystem> getClientNetworkSystem() { return clientNetworkSystem.load(); }

optional_ref<CommandRegistry> getCommandRegistry() { return serverCommandRegistry.load(); }
optional_ref<CommandRegistry> getClientCommandRegistry() { return clientCommandRegistry.load(); }

optional_ref<DBStorage> getDBStorage() { return dBStorage.load(); }
using HookReg = memory::HookRegistrar<>;

static HookReg hookRegister;
} // namespace ll::service::inline bedrock
