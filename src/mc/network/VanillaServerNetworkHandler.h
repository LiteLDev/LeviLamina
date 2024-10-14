#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/GameSpecificNetEventCallback.h"

class VanillaServerNetworkHandler : public ::GameSpecificNetEventCallback {
public:
    // prevent constructor by default
    VanillaServerNetworkHandler& operator=(VanillaServerNetworkHandler const&);
    VanillaServerNetworkHandler(VanillaServerNetworkHandler const&);
    VanillaServerNetworkHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VanillaServerNetworkHandler() = default;

    // vIndex: 1
    virtual void handle(class NetworkIdentifier const& source, class ResourcePackClientResponsePacket const& packet);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void handle$(class NetworkIdentifier const& source, class ResourcePackClientResponsePacket const& packet);

    // NOLINTEND
};
