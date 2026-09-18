#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::ChunkDiagnosticDetails {

struct ChunkHealthScore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk7b99cd;
    ::ll::UntypedStorage<1, 1> mUnk8f4513;
    ::ll::UntypedStorage<1, 1> mUnk7fd597;
    ::ll::UntypedStorage<1, 1> mUnkece31f;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkHealthScore& operator=(ChunkHealthScore const&);
    ChunkHealthScore(ChunkHealthScore const&);
    ChunkHealthScore();
};

} // namespace Bedrock::ChunkDiagnosticDetails
