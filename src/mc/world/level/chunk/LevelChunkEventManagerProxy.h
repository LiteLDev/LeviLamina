#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ILevelChunkEventManagerProxy.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class LevelChunk;
// clang-format on

class LevelChunkEventManagerProxy : public ::ILevelChunkEventManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isReadOnly(::LevelChunk const& levelChunk) const /*override*/;

    virtual bool setOnChunkLoadedCalled(::LevelChunk& levelChunk) /*override*/;

    virtual void onTickingStarted(::LevelChunk& levelChunk) /*override*/;

    virtual void setupRedstoneCircuit(::ChunkSource& chunkSource, ::LevelChunk& levelChunk) /*override*/;

    virtual int getClosestPlayerDistanceSquared(::LevelChunk const& levelChunk) const /*override*/;

    virtual bool isOwnedByTickingThread(::LevelChunk const& levelChunk) const /*override*/;

    virtual void onTickingStopped(::LevelChunk& levelChunk) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isReadOnly(::LevelChunk const& levelChunk) const;

    MCAPI bool $setOnChunkLoadedCalled(::LevelChunk& levelChunk);

    MCNAPI void $onTickingStarted(::LevelChunk& levelChunk);

    MCNAPI void $setupRedstoneCircuit(::ChunkSource& chunkSource, ::LevelChunk& levelChunk);

    MCNAPI int $getClosestPlayerDistanceSquared(::LevelChunk const& levelChunk) const;

    MCNAPI bool $isOwnedByTickingThread(::LevelChunk const& levelChunk) const;

    MCNAPI void $onTickingStopped(::LevelChunk& levelChunk);


    // NOLINTEND
};
