#pragma once

#include "ll/api/base/Macro.h"

#include "mc/deps/core/utility/optional_ref.h"

#include "ll/api/service/TargetedBedrock.h"

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
class DBStorage;

namespace ll::service::inline bedrock {

LLNDAPI optional_ref<Minecraft> getMinecraft(bool isClientSide = false);

LLNDAPI optional_ref<Level> getLevel();

LLNDAPI optional_ref<ServerNetworkHandler> getServerNetworkHandler(bool isClientSide = false);

LLNDAPI optional_ref<RakNet::RakPeer> getRakPeer();

LLNDAPI optional_ref<NetworkSystem> getNetworkSystem(bool isClientSide = false);

LLNDAPI optional_ref<CommandRegistry> getCommandRegistry(bool isClientSide = false);

LLNDAPI optional_ref<ServerInstance> getServerInstance();

LLNDAPI optional_ref<DBStorage> getDBStorage();

} // namespace ll::service::inline bedrock
