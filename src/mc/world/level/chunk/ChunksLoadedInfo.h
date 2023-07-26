#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChunksLoadedInfo {

public:
    // prevent constructor by default
    ChunksLoadedInfo& operator=(ChunksLoadedInfo const&) = delete;
    ChunksLoadedInfo(ChunksLoadedInfo const&)            = delete;
    ChunksLoadedInfo()                                   = delete;

public:
    /**
     * @symbol
     * ?getChunkViewSource\@ChunksLoadedInfo\@\@QEBA?AV?$unique_ptr\@VChunkViewSource\@\@U?$default_delete\@VChunkViewSource\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ChunkViewSource> getChunkViewSource() const; // NOLINT
    /**
     * @symbol ?getChunksLoadedStatus\@ChunksLoadedInfo\@\@QEBA?AW4ChunksLoadedStatus\@\@XZ
     */
    MCAPI enum class ChunksLoadedStatus getChunksLoadedStatus() const; // NOLINT
    /**
     * @symbol
     * ?areAllChunksLoadedAndTicking\@ChunksLoadedInfo\@\@SA?AW4ChunksLoadedStatus\@\@AEBVDimension\@\@AEAVChunkSource\@\@AEBUBounds\@\@_NUTick\@\@_N\@Z
     */
    MCAPI static enum class ChunksLoadedStatus areAllChunksLoadedAndTicking(
        class Dimension const&,
        class ChunkSource&,
        struct Bounds const&,
        bool,
        struct Tick,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?calculateChunksLoadedInfo\@ChunksLoadedInfo\@\@SA?AU1\@AEBVDimension\@\@AEAVChunkSource\@\@AEBUBounds\@\@_NUTick\@\@_N55\@Z
     */
    MCAPI static struct ChunksLoadedInfo calculateChunksLoadedInfo(
        class Dimension const&,
        class ChunkSource&,
        struct Bounds const&,
        bool,
        struct Tick,
        bool,
        bool,
        bool
    ); // NOLINT
};
