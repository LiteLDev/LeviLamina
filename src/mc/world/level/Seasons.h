#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkPos;
class Dimension;
class LevelChunk;
// clang-format on

class Seasons {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7e578e;
    ::ll::UntypedStorage<8, 40> mUnk88ff00;
    // NOLINTEND

public:
    // prevent constructor by default
    Seasons& operator=(Seasons const&);
    Seasons(Seasons const&);
    Seasons();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Seasons(::Dimension& dimension);

    MCAPI void postProcess(::LevelChunk& levelChunk, ::BlockSource& region, ::ChunkPos const& chunkPos);

    MCAPI void tick();

    MCAPI ~Seasons();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
