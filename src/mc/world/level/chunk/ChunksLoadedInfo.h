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
    MCAPI std::unique_ptr<class ChunkViewSource> getChunkViewSource() const;

    MCAPI ::ChunksLoadedStatus getChunksLoadedStatus() const;

    MCAPI static ::ChunksLoadedStatus areAllChunksLoadedAndTicking(
        class Dimension const& dimension,
        class ChunkSource&     source,
        struct Bounds const&   bounds,
        bool                   isCircle,
        struct Tick            currentLevelTick,
        bool                   allowNonPlayerTicking
    );

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
