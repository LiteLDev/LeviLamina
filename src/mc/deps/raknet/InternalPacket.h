#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct InternalPacket {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_INTERNALPACKET
public:
    InternalPacket(InternalPacket const&) = delete;
    InternalPacket()                      = delete;
#endif

public:
    /**
     * @symbol ??4InternalPacket\@RakNet\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct RakNet::InternalPacket& operator=(struct RakNet::InternalPacket const&);
};

}; // namespace RakNet
