#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct ChunkTimingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk1de751;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkTimingData& operator=(ChunkTimingData const&);
    ChunkTimingData(ChunkTimingData const&);
    ChunkTimingData();
};

} // namespace Bedrock
