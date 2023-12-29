#pragma once

#include "ll/api/base/Macro.h"

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

namespace ll::service::inline bedrock {

LLAPI optional_ref<Minecraft> getMinecraft();

LLAPI optional_ref<Level> getLevel();

LLAPI optional_ref<ServerNetworkHandler> getServerNetworkHandler();

LLAPI optional_ref<PropertiesSettings> getPropertiesSettings();

LLAPI optional_ref<RakNet::RakPeer> getRakPeer();

LLAPI optional_ref<NetworkSystem> getNetworkSystem();

LLAPI optional_ref<ResourcePackRepository> getResourcePackRepository();

} // namespace ll::service::inline bedrock
