#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkKey.h"

// auto generated forward declare list
// clang-format off
class LevelChunk;
// clang-format on

class DBChunkStorageKey : public ::ChunkKey {
public:
    // prevent constructor by default
    DBChunkStorageKey();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DBChunkStorageKey(::LevelChunk const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelChunk const&);
    // NOLINTEND

};
