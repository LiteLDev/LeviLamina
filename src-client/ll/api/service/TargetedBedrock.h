#pragma once

#include "ll/api/base/Macro.h"

#include "mc/deps/core/utility/optional_ref.h"

namespace RakNet {
class RakPeer;
}
class Minecraft;
class ServerLevel;
class Level;
class ServerNetworkHandler;
class NetworkSystem;
class CommandRegistry;
class ServerInstance;
class ClientInstance;
class ResourcePackRepository;
class DBStorage;
class ClientNetworkSystem;
class ServerNetworkSystem;
class AppPlatform;

namespace ll::service::inline bedrock {
LLNDAPI optional_ref<RakNet::RakPeer> getRakPeer();

LLNDAPI optional_ref<ClientInstance> getClientInstance();

LLNDAPI optional_ref<Minecraft> getClientMinecraft();

LLNDAPI optional_ref<Level> getMultiPlayerLevel();

LLNDAPI optional_ref<ResourcePackRepository> getResourcePackRepository();

LLNDAPI optional_ref<ServerNetworkSystem> getServerNetworkSystem();

LLNDAPI optional_ref<ClientNetworkSystem> getClientNetworkSystem();

LLNDAPI optional_ref<CommandRegistry> getClientCommandRegistry();

LLNDAPI optional_ref<AppPlatform> getAppPlatform();
} // namespace ll::service::inline bedrock
