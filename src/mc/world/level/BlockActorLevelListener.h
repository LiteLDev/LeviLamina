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
    virtual ~BlockActorLevelListener() /*override*/ = default;

    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    virtual void onSubChunkLoaded(
        ::ChunkSource&,
        ::LevelChunk& lc,
        short         absoluteSubChunkIndex,
        bool          subChunkVisibilityChanged
    ) /*override*/;

    virtual void onChunkUnloaded(::LevelChunk& lc) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    MCAPI void
    $onSubChunkLoaded(::ChunkSource&, ::LevelChunk& lc, short absoluteSubChunkIndex, bool subChunkVisibilityChanged);

    MCAPI void $onChunkUnloaded(::LevelChunk& lc);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
