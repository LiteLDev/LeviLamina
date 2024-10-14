#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkPacketEventCoordinator {
public:
    // prevent constructor by default
    NetworkPacketEventCoordinator& operator=(NetworkPacketEventCoordinator const&);
    NetworkPacketEventCoordinator(NetworkPacketEventCoordinator const&);
    NetworkPacketEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkPacketEventCoordinator() = default;

    MCAPI void sendPacketReceivedFrom(class PacketHeader const& header, class Packet const& packet);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
