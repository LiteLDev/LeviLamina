#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct ChunkDebugData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2a7f4b;
    ::ll::UntypedStorage<1, 1> mUnk39857d;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkDebugData& operator=(ChunkDebugData const&);
    ChunkDebugData(ChunkDebugData const&);
    ChunkDebugData();
};

} // namespace Bedrock
