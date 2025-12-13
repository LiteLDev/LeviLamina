#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayStatusPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6645d6;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayStatusPacketPayload& operator=(PlayStatusPacketPayload const&);
    PlayStatusPacketPayload(PlayStatusPacketPayload const&);
    PlayStatusPacketPayload();
};
