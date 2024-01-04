#pragma once

#include "ll/api/base/Macro.h"

#include "mc/common/wrapper/optional_ref.h"

namespace RakNet {
class RakPeer;
}
class Minecraft;
class PropertiesSettings;
class ServerLevel;
class Level;
class ServerNetworkHandler;
class ResourcePackRepository;
class NetworkSystem;
class CommandRegistry;
class ServerInstance;

namespace ll::service::inline bedrock {

LLNDAPI optional_ref<Minecraft> getMinecraft();

LLNDAPI optional_ref<Level> getLevel();

LLNDAPI optional_ref<ServerNetworkHandler> getServerNetworkHandler();

LLNDAPI optional_ref<PropertiesSettings> getPropertiesSettings();

LLNDAPI optional_ref<RakNet::RakPeer> getRakPeer();

LLNDAPI optional_ref<NetworkSystem> getNetworkSystem();

LLNDAPI optional_ref<ResourcePackRepository> getResourcePackRepository();

LLNDAPI optional_ref<CommandRegistry> getCommandRegistry();

LLNDAPI optional_ref<ServerInstance> getServerInstance();

} // namespace ll::service::inline bedrock
