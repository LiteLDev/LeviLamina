#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
namespace Bedrock { struct ChunkDebugData; }
// clang-format on

namespace Bedrock {

struct ChunkDimensionDebugData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk781096;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkDimensionDebugData& operator=(ChunkDimensionDebugData const&);
    ChunkDimensionDebugData(ChunkDimensionDebugData const&);
    ChunkDimensionDebugData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::ChunkDimensionDebugData& SetFromChunkSource(::ChunkSource const& source);
    // NOLINTEND
};

} // namespace Bedrock
