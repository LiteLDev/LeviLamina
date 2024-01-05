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
    // symbol: ??0PostprocessingManager@@QEAA@XZ
    MCAPI PostprocessingManager();

    // symbol:
    // ?tryLock@PostprocessingManager@@QEAA?AV?$optional@V?$vector@ULockedChunk@PostprocessingManager@@V?$allocator@ULockedChunk@PostprocessingManager@@@std@@@std@@@std@@AEBVChunkPos@@AEAVChunkSource@@@Z
    MCAPI std::optional<std::vector<struct PostprocessingManager::LockedChunk>>
          tryLock(class ChunkPos const& center, class ChunkSource& neighborhood);

    // symbol: ??1PostprocessingManager@@QEAA@XZ
    MCAPI ~PostprocessingManager();

    // NOLINTEND
};
