#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Bounds {
public:
    // Bounds inner types declare
    // clang-format off

    // clang-format on

    // Bounds inner types define
    enum class Option {};

public:
    // prevent constructor by default
    Bounds& operator=(Bounds const&) = delete;
    Bounds(Bounds const&)            = delete;
    Bounds()                         = delete;

public:
    /**
     * @symbol ??0Bounds\@\@QEAA\@AEBVChunkPos\@\@0\@Z
     */
    MCAPI Bounds(class ChunkPos const&, class ChunkPos const&); // NOLINT
    /**
     * @symbol ??0Bounds\@\@QEAA\@AEBVBlockPos\@\@0HW4Option\@0\@\@Z
     */
    MCAPI Bounds(class BlockPos const&, class BlockPos const&, int, enum class Bounds::Option); // NOLINT
    /**
     * @symbol ??0Bounds\@\@QEAA\@AEBVBlockPos\@\@HHFF\@Z
     */
    MCAPI Bounds(class BlockPos const&, int, int, short, short); // NOLINT
};
