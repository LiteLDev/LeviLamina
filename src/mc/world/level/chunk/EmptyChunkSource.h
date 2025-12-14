#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"

// auto generated forward declare list
// clang-format off
class ChunkViewSource;
class LevelChunk;
// clang-format on

class EmptyChunkSource : public ::ChunkSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;

    virtual bool structurePostProcessChunk(::ChunkViewSource&) /*override*/;

    virtual bool decorationPostProcessChunk(::ChunkViewSource&) /*override*/;

    virtual ~EmptyChunkSource() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCFOLD bool $structurePostProcessChunk(::ChunkViewSource&);

    MCFOLD bool $decorationPostProcessChunk(::ChunkViewSource&);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
