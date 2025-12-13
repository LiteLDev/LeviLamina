#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPickRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk9305a8;
    ::ll::UntypedStorage<1, 1>  mUnkb19220;
    ::ll::UntypedStorage<1, 1>  mUnk95c386;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPickRequestPacketPayload& operator=(BlockPickRequestPacketPayload const&);
    BlockPickRequestPacketPayload(BlockPickRequestPacketPayload const&);
    BlockPickRequestPacketPayload();
};
