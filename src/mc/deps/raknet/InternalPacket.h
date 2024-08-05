#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct InternalPacket {
public:
    // prevent constructor by default
    InternalPacket(InternalPacket const&);
    InternalPacket();

public:
    // NOLINTBEGIN
    MCAPI struct RakNet::InternalPacket& operator=(struct RakNet::InternalPacket const&);

    // NOLINTEND
};

}; // namespace RakNet
