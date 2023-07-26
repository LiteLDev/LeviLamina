#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct InternalPacket {

public:
    // prevent constructor by default
    InternalPacket(InternalPacket const&) = delete;
    InternalPacket()                      = delete;

public:
    /**
     * @symbol ??4InternalPacket\@RakNet\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct RakNet::InternalPacket& operator=(struct RakNet::InternalPacket const&); // NOLINT
};

}; // namespace RakNet
