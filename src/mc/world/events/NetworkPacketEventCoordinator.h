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
    // vIndex: 0, symbol: __gen_??1NetworkPacketEventCoordinator@@UEAA@XZ
    virtual ~NetworkPacketEventCoordinator() = default;

    // symbol: ?sendPacketReceivedFrom@NetworkPacketEventCoordinator@@QEAAXAEBVPacketHeader@@AEBVPacket@@@Z
    MCAPI void sendPacketReceivedFrom(class PacketHeader const& header, class Packet const& packet);

    // NOLINTEND
};
