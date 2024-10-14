#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IBlockWorldGenAPI {
public:
    // prevent constructor by default
    IBlockWorldGenAPI& operator=(IBlockWorldGenAPI const&);
    IBlockWorldGenAPI(IBlockWorldGenAPI const&);
    IBlockWorldGenAPI();

public:
    // vIndex: 0
    virtual ~IBlockWorldGenAPI() = default;

    // NOLINTBEGIN
    MCVAPI bool canGetChunk() const;

    MCVAPI class LevelChunk* getChunk(class ChunkPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI bool canGetChunk$() const;

    MCAPI class LevelChunk* getChunk$(class ChunkPos const& pos);

    // NOLINTEND
};
