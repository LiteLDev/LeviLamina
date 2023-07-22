/**
 * @file  LoadingProgressTickingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LoadingProgressTickingSystem.
 *
 */
class LoadingProgressTickingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOADINGPROGRESSTICKINGSYSTEM
public:
    class LoadingProgressTickingSystem& operator=(class LoadingProgressTickingSystem const &) = delete;
    LoadingProgressTickingSystem(class LoadingProgressTickingSystem const &) = delete;
    LoadingProgressTickingSystem() = delete;
#endif

public:

//private:

private:
    /**
     * @symbol  ?mChunksNeededForLoadOffsets\@LoadingProgressTickingSystem\@\@0V?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<class ChunkPos> const mChunksNeededForLoadOffsets;

};