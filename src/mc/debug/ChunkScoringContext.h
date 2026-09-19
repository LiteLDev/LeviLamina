#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct ChunkScoringContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9eb95f;
    ::ll::UntypedStorage<4, 8> mUnk556f09;
    ::ll::UntypedStorage<2, 2> mUnka83a87;
    ::ll::UntypedStorage<1, 1> mUnk2b4283;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkScoringContext& operator=(ChunkScoringContext const&);
    ChunkScoringContext(ChunkScoringContext const&);
    ChunkScoringContext();
};

} // namespace Bedrock
