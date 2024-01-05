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
    // symbol: ?canGetChunk@IBlockWorldGenAPI@@UEBA_NXZ
    MCVAPI bool canGetChunk() const;

    // symbol: ?getChunk@IBlockWorldGenAPI@@UEAAPEAVLevelChunk@@AEBVChunkPos@@@Z
    MCVAPI class LevelChunk* getChunk(class ChunkPos const& pos);

    // NOLINTEND
};
