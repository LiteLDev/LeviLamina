#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RequestChunkRadiusPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mChunkRadius;
    ::ll::TypedStorage<1, 1, uchar> mMaxChunkRadius;
    // NOLINTEND

};
