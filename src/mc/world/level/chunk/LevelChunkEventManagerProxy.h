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
    // vIndex: 1
    virtual bool isReadOnly(::LevelChunk const& levelChunk) const /*override*/;

    // vIndex: 2
    virtual bool setOnChunkLoadedCalled(::LevelChunk& levelChunk) /*override*/;

    // vIndex: 3
    virtual void onTickingStarted(::LevelChunk& levelChunk) /*override*/;

    // vIndex: 4
    virtual void setupRedstoneCircuit(::ChunkSource& chunkSource, ::LevelChunk& levelChunk) /*override*/;

    // vIndex: 5
    virtual int getClosestPlayerDistanceSquared(::LevelChunk const& levelChunk) const /*override*/;

    // vIndex: 6
    virtual bool isOwnedByTickingThread(::LevelChunk const& levelChunk) const /*override*/;

    // vIndex: 7
    virtual void onTickingStopped(::LevelChunk& levelChunk) /*override*/;

    // vIndex: 0
    virtual ~LevelChunkEventManagerProxy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isReadOnly(::LevelChunk const& levelChunk) const;

    MCAPI bool $setOnChunkLoadedCalled(::LevelChunk& levelChunk);

    MCAPI void $onTickingStarted(::LevelChunk& levelChunk);

    MCAPI void $setupRedstoneCircuit(::ChunkSource& chunkSource, ::LevelChunk& levelChunk);

    MCAPI int $getClosestPlayerDistanceSquared(::LevelChunk const& levelChunk) const;

    MCAPI bool $isOwnedByTickingThread(::LevelChunk const& levelChunk) const;

    MCAPI void $onTickingStopped(::LevelChunk& levelChunk);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
