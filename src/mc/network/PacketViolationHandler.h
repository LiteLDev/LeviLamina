#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"

class PacketViolationHandler {
public:
    // prevent constructor by default
    PacketViolationHandler& operator=(PacketViolationHandler const&);
    PacketViolationHandler(PacketViolationHandler const&);
    PacketViolationHandler();

    // private:
    // NOLINTBEGIN
    MCAPI ::PacketViolationResponse _handleViolation(
        ::MinecraftPacketIds           packetId,
        std::error_code const&         result,
        class NetworkIdentifier const& netId,
        bool*                          outIsNewOrUpdatedViolation
    );

    // NOLINTEND
};
