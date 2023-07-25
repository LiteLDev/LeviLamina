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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSTPROCESSINGMANAGER_LOCKEDCHUNK
    public:
        LockedChunk& operator=(LockedChunk const&) = delete;
        LockedChunk(LockedChunk const&)            = delete;
        LockedChunk()                              = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSTPROCESSINGMANAGER
public:
    PostprocessingManager& operator=(PostprocessingManager const&) = delete;
    PostprocessingManager(PostprocessingManager const&)            = delete;
#endif

public:
    /**
     * @symbol ??0PostprocessingManager\@\@QEAA\@XZ
     */
    MCAPI PostprocessingManager();
    /**
     * @symbol
     * ?tryLock\@PostprocessingManager\@\@QEAA?AV?$optional\@V?$vector\@ULockedChunk\@PostprocessingManager\@\@V?$allocator\@ULockedChunk\@PostprocessingManager\@\@\@std\@\@\@std\@\@\@std\@\@AEBVChunkPos\@\@AEAVChunkSource\@\@\@Z
     */
    MCAPI class std::optional<std::vector<struct PostprocessingManager::LockedChunk>>
    tryLock(class ChunkPos const&, class ChunkSource&);
    /**
     * @symbol ??1PostprocessingManager\@\@QEAA\@XZ
     */
    MCAPI ~PostprocessingManager();
};
