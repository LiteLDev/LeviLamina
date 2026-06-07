#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Random;
// clang-format on

class ChunkTickOffsetManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkPos>> mTickingChunksOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkPos>> mClientTickingChunksOffset;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkTickOffsetManager();

    MCFOLD ::std::vector<::ChunkPos> const& getClientTickingOffsets() const;

    MCAPI ::std::vector<::ChunkPos> getSortedPositionsFromClientOffsets(::std::vector<::ChunkPos> const& centers) const;

    MCFOLD ::std::vector<::ChunkPos> const& getTickingOffsets() const;

    MCAPI void initialize(uint serverTickRange);

    MCAPI void shuffleTickingOffsets(::Random& random);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::ChunkPos> getSortedPositionsFromClientOffsets(
        ::std::vector<::ChunkPos> const& centers,
        ::std::vector<::ChunkPos> const& offsets
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
