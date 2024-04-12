#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunksLoadedStatus.h"

struct ChunksLoadedInfo {
public:
    // prevent constructor by default
    ChunksLoadedInfo& operator=(ChunksLoadedInfo const&);
    ChunksLoadedInfo(ChunksLoadedInfo const&);
    ChunksLoadedInfo();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getChunkViewSource@ChunksLoadedInfo@@QEBA?AV?$unique_ptr@VChunkViewSource@@U?$default_delete@VChunkViewSource@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class ChunkViewSource> getChunkViewSource() const;

    // symbol: ?getChunksLoadedStatus@ChunksLoadedInfo@@QEBA?AW4ChunksLoadedStatus@@XZ
    MCAPI ::ChunksLoadedStatus getChunksLoadedStatus() const;

    // symbol:
    // ?areAllChunksLoadedAndTicking@ChunksLoadedInfo@@SA?AW4ChunksLoadedStatus@@AEBVDimension@@AEAVChunkSource@@AEBUBounds@@_NUTick@@_N@Z
    MCAPI static ::ChunksLoadedStatus areAllChunksLoadedAndTicking(
        class Dimension const& dimension,
        class ChunkSource&     source,
        struct Bounds const&   bounds,
        bool                   isCircle,
        struct Tick            currentLevelTick,
        bool                   allowNonPlayerTicking
    );

    // symbol:
    // ?calculateChunksLoadedInfo@ChunksLoadedInfo@@SA?AU1@AEBVDimension@@AEAVChunkSource@@AEBUBounds@@_NUTick@@_N55@Z
    MCAPI static struct ChunksLoadedInfo calculateChunksLoadedInfo(
        class Dimension const& dimension,
        class ChunkSource&     source,
        struct Bounds const&   bounds,
        bool                   isCircle,
        struct Tick            currentLevelTick,
        bool                   allowUnloadedChunks,
        bool                   allowNonPlayerTicking,
        bool
    );

    // NOLINTEND
};
