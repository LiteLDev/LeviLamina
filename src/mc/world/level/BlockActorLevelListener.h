#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class LevelChunk;
// clang-format on

class BlockActorLevelListener : public ::LevelListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockActorLevelListener() /*override*/ = default;

    // vIndex: 20
    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    // vIndex: 22
    virtual void onSubChunkLoaded(
        ::ChunkSource&,
        ::LevelChunk& lc,
        short         absoluteSubChunkIndex,
        bool          subChunkVisibilityChanged
    ) /*override*/;

    // vIndex: 23
    virtual void onChunkUnloaded(::LevelChunk& lc) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    MCNAPI void
    $onSubChunkLoaded(::ChunkSource&, ::LevelChunk& lc, short absoluteSubChunkIndex, bool subChunkVisibilityChanged);

    MCNAPI void $onChunkUnloaded(::LevelChunk& lc);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
