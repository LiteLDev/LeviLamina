#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/resources/PacketViolationResponse.h"

class PacketViolationHandler {
public:
    // prevent constructor by default
    PacketViolationHandler& operator=(PacketViolationHandler const&);
    PacketViolationHandler(PacketViolationHandler const&);
    PacketViolationHandler();

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handleViolation@PacketViolationHandler@@AEAA?AW4PacketViolationResponse@@W4MinecraftPacketIds@@AEBVerror_code@std@@AEBVNetworkIdentifier@@PEA_N@Z
    MCAPI ::PacketViolationResponse
    _handleViolation(::MinecraftPacketIds, std::error_code const&, class NetworkIdentifier const&, bool*);

    // NOLINTEND
};
