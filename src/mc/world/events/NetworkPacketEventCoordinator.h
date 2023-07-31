#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkPacketEventCoordinator {

public:
    // prevent constructor by default
    NetworkPacketEventCoordinator& operator=(NetworkPacketEventCoordinator const&) = delete;
    NetworkPacketEventCoordinator(NetworkPacketEventCoordinator const&)            = delete;
    NetworkPacketEventCoordinator()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?sendPacketReceivedFrom\@NetworkPacketEventCoordinator\@\@QEAAXAEBVPacketHeader\@\@AEBVPacket\@\@\@Z
     */
    MCAPI void sendPacketReceivedFrom(class PacketHeader const&, class Packet const&);
    // NOLINTEND
};
