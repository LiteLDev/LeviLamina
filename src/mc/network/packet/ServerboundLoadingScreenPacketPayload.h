#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerboundLoadingScreenPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1aeb99;
    ::ll::UntypedStorage<4, 8> mUnk9e2a0e;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerboundLoadingScreenPacketPayload& operator=(ServerboundLoadingScreenPacketPayload const&);
    ServerboundLoadingScreenPacketPayload(ServerboundLoadingScreenPacketPayload const&);
    ServerboundLoadingScreenPacketPayload();
};
