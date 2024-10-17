#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkTickOffsetManager {
public:
    // prevent constructor by default
    ChunkTickOffsetManager& operator=(ChunkTickOffsetManager const&);
    ChunkTickOffsetManager(ChunkTickOffsetManager const&);

public:
    // NOLINTBEGIN
    MCAPI ChunkTickOffsetManager();

    MCAPI std::vector<class ChunkPos> const& getClientTickingOffsets() const;

    MCAPI std::vector<class ChunkPos> getSortedPositionsFromClientOffsets(std::vector<class ChunkPos> const&) const;

    MCAPI std::vector<class ChunkPos> const& getTickingOffsets() const;

    MCAPI void initialize(uint serverTickRange);

    MCAPI void shuffleTickingOffsets(class Random& random);

    MCAPI ~ChunkTickOffsetManager();

    MCAPI static std::vector<class ChunkPos>
    getSortedPositionsFromClientOffsets(std::vector<class ChunkPos> const&, std::vector<class ChunkPos> const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
