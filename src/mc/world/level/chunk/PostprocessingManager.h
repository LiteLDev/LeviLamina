#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PostprocessingManager {
public:
    // PostprocessingManager inner types declare
    // clang-format off
    struct LockedChunk;
    // clang-format on

    // PostprocessingManager inner types define
    struct LockedChunk {
    public:
        // prevent constructor by default
        LockedChunk& operator=(LockedChunk const&);
        LockedChunk(LockedChunk const&);
        LockedChunk();
    };

public:
    // prevent constructor by default
    PostprocessingManager& operator=(PostprocessingManager const&);
    PostprocessingManager(PostprocessingManager const&);

public:
    // NOLINTBEGIN
    MCAPI PostprocessingManager();

    MCAPI std::optional<std::vector<struct PostprocessingManager::LockedChunk>>
          tryLock(class ChunkPos const& center, class ChunkSource& neighborhood);

    MCAPI ~PostprocessingManager();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
