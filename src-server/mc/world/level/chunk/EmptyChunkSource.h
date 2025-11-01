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
    // vIndex: 14
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;

    // vIndex: 9
    virtual bool structurePostProcessChunk(::ChunkViewSource&) /*override*/;

    // vIndex: 10
    virtual bool decorationPostProcessChunk(::ChunkViewSource&) /*override*/;

    // vIndex: 0
    virtual ~EmptyChunkSource() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
