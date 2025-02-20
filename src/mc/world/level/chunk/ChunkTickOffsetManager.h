#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
// clang-format on

class ChunkTickOffsetManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk526c3b;
    ::ll::UntypedStorage<8, 24> mUnk6edb58;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkTickOffsetManager& operator=(ChunkTickOffsetManager const&);
    ChunkTickOffsetManager(ChunkTickOffsetManager const&);
    ChunkTickOffsetManager();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::ChunkPos> getSortedPositionsFromClientOffsets(
        ::std::vector<::ChunkPos> const& centers,
        ::std::vector<::ChunkPos> const& offsets
    );
    // NOLINTEND
};
