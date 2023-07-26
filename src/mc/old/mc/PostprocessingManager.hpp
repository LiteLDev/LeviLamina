/**
 * @file  PostprocessingManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PostprocessingManager.
 *
 */
class PostprocessingManager {

#define AFTER_EXTRA
// Add Member There
public:
struct LockedChunk {
    LockedChunk() = delete;
    LockedChunk(LockedChunk const&) = delete;
    LockedChunk(LockedChunk const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSTPROCESSINGMANAGER
public:
    class PostprocessingManager& operator=(class PostprocessingManager const &) = delete;
    PostprocessingManager(class PostprocessingManager const &) = delete;
#endif

public:
    /**
     * @symbol  ??0PostprocessingManager\@\@QEAA\@XZ
     */
    MCAPI PostprocessingManager();
    /**
     * @symbol  ?tryLock\@PostprocessingManager\@\@QEAA?AV?$optional\@V?$vector\@ULockedChunk\@PostprocessingManager\@\@V?$allocator\@ULockedChunk\@PostprocessingManager\@\@\@std\@\@\@std\@\@\@std\@\@AEBVChunkPos\@\@AEAVChunkSource\@\@\@Z
     */
    MCAPI class std::optional<std::vector<struct PostprocessingManager::LockedChunk>> tryLock(class ChunkPos const &, class ChunkSource &);
    /**
     * @symbol  ??1PostprocessingManager\@\@QEAA\@XZ
     */
    MCAPI ~PostprocessingManager();

};