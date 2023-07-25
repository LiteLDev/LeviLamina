#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkPacketEventCoordinator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKPACKETEVENTCOORDINATOR
public:
    NetworkPacketEventCoordinator& operator=(NetworkPacketEventCoordinator const&) = delete;
    NetworkPacketEventCoordinator(NetworkPacketEventCoordinator const&)            = delete;
    NetworkPacketEventCoordinator()                                                = delete;
#endif

public:
    /**
     * @symbol ?sendPacketReceivedFrom\@NetworkPacketEventCoordinator\@\@QEAAXAEBVPacketHeader\@\@AEBVPacket\@\@\@Z
     */
    MCAPI void sendPacketReceivedFrom(class PacketHeader const&, class Packet const&);
};
