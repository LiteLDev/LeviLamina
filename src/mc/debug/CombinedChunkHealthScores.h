#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::ChunkDiag {

struct CombinedChunkHealthScores {
public:
    // CombinedChunkHealthScores inner types define
    enum class AggegateInit : uchar {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk6b2ea9;
    ::ll::UntypedStorage<8, 48> mUnk662d16;
    ::ll::UntypedStorage<8, 48> mUnk508558;
    // NOLINTEND

public:
    // prevent constructor by default
    CombinedChunkHealthScores& operator=(CombinedChunkHealthScores const&);
    CombinedChunkHealthScores(CombinedChunkHealthScores const&);
    CombinedChunkHealthScores();
};

} // namespace Bedrock::ChunkDiag
