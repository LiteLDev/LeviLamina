/**
 * @file  Bounds.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure Bounds.
 *
 */
struct Bounds {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOUNDS
public:
    struct Bounds& operator=(struct Bounds const &) = delete;
    Bounds(struct Bounds const &) = delete;
    Bounds() = delete;
#endif

public:
    /**
     * @symbol  ??0Bounds\@\@QEAA\@AEBVChunkPos\@\@0\@Z
     */
    MCAPI Bounds(class ChunkPos const &, class ChunkPos const &);
    /**
     * @symbol  ??0Bounds\@\@QEAA\@AEBVBlockPos\@\@0HW4Option\@0\@\@Z
     */
    MCAPI Bounds(class BlockPos const &, class BlockPos const &, int, enum class Bounds::Option);
    /**
     * @symbol  ??0Bounds\@\@QEAA\@AEBVBlockPos\@\@HHFF\@Z
     */
    MCAPI Bounds(class BlockPos const &, int, int, short, short);

};