#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IBlockWorldGenAPI {
public:
    // prevent constructor by default
    IBlockWorldGenAPI& operator=(IBlockWorldGenAPI const&);
    IBlockWorldGenAPI(IBlockWorldGenAPI const&);
    IBlockWorldGenAPI();

public:
    // NOLINTBEGIN
    MCVAPI bool canGetChunk() const;

    MCVAPI class LevelChunk* getChunk(class ChunkPos const& pos);

    // NOLINTEND
};
