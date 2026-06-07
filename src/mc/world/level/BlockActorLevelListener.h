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

    virtual void onChunkLoaded(::ChunkSource& lc, ::LevelChunk&) /*override*/;

    virtual void onSubChunkLoaded(
        ::ChunkSource& lc,
        ::LevelChunk&  absoluteSubChunkIndex,
        short          subChunkVisibilityChanged,
        bool
    ) /*override*/;

    virtual void onChunkUnloaded(::LevelChunk& lc) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockActorLevelListener();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onChunkLoaded(::ChunkSource& lc, ::LevelChunk&);

    MCAPI void
    $onSubChunkLoaded(::ChunkSource& lc, ::LevelChunk& absoluteSubChunkIndex, short subChunkVisibilityChanged, bool);

    MCAPI void $onChunkUnloaded(::LevelChunk& lc);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
