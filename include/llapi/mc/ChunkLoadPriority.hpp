/**
 * @file  ChunkLoadPriority.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkLoadPriority.
 *
 */
class ChunkLoadPriority {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKLOADPRIORITY
public:
    class ChunkLoadPriority& operator=(class ChunkLoadPriority const &) = delete;
    ChunkLoadPriority(class ChunkLoadPriority const &) = delete;
    ChunkLoadPriority() = delete;
#endif

public:
    /**
     * @symbol  ?getPlayerChunkPriority\@ChunkLoadPriority\@\@SAHAEBVChunkPos\@\@0AEBVVec3\@\@\@Z
     */
    MCAPI static int getPlayerChunkPriority(class ChunkPos const &, class ChunkPos const &, class Vec3 const &);
    /**
     * @symbol  ?getTickingAreaChunkPriority\@ChunkLoadPriority\@\@SAHAEBVChunkPos\@\@0AEBVVec3\@\@_N\@Z
     */
    MCAPI static int getTickingAreaChunkPriority(class ChunkPos const &, class ChunkPos const &, class Vec3 const &, bool);

};