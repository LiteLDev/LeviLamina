#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"

class ClassroomModeNetworkHandler {
public:
    // prevent constructor by default
    ClassroomModeNetworkHandler& operator=(ClassroomModeNetworkHandler const&);
    ClassroomModeNetworkHandler(ClassroomModeNetworkHandler const&);
    ClassroomModeNetworkHandler();

public:
    // NOLINTBEGIN
    MCVAPI bool allowIncomingPacketId(class NetworkIdentifier const& id, ::MinecraftPacketIds packetId);

    MCVAPI void onWebsocketRequest(
        std::string const&    serverAddress,
        std::string const&    payload,
        std::function<void()> errorCallback
    );

    MCAPI explicit ClassroomModeNetworkHandler(bool isDedicatedServer);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _connect(std::string const& address);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockThreadingEnableQueueForMainThread();

    MCAPI static void** $vftableForNetEventCallback();

    MCAPI void* ctor$(bool isDedicatedServer);

    MCAPI bool allowIncomingPacketId$(class NetworkIdentifier const& id, ::MinecraftPacketIds packetId);

    MCAPI void onWebsocketRequest$(
        std::string const&    serverAddress,
        std::string const&    payload,
        std::function<void()> errorCallback
    );

    // NOLINTEND
};
