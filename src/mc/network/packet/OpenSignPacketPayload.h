#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OpenSignPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkc5d6fc;
    ::ll::UntypedStorage<1, 1>  mUnk55156d;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSignPacketPayload& operator=(OpenSignPacketPayload const&);
    OpenSignPacketPayload(OpenSignPacketPayload const&);
    OpenSignPacketPayload();
};
