#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ILevelChunkEventManagerProxy.h"

class LevelChunkEventManagerProxy : public ::ILevelChunkEventManagerProxy {
public:
    // prevent constructor by default
    LevelChunkEventManagerProxy& operator=(LevelChunkEventManagerProxy const&);
    LevelChunkEventManagerProxy(LevelChunkEventManagerProxy const&);
    LevelChunkEventManagerProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelChunkEventManagerProxy() = default;

    // vIndex: 1
    virtual bool isReadOnly(class LevelChunk const& levelChunk) const;

    // vIndex: 2
    virtual bool setOnChunkLoadedCalled(class LevelChunk& levelChunk);

    // vIndex: 3
    virtual void onTickingStarted(class LevelChunk& levelChunk);

    // vIndex: 4
    virtual void setupRedstoneCircuit(class ChunkSource& chunkSource, class LevelChunk& levelChunk);

    // vIndex: 5
    virtual int getClosestPlayerDistanceSquared(class LevelChunk const& levelChunk) const;

    // vIndex: 6
    virtual bool isOwnedByTickingThread(class LevelChunk const& levelChunk) const;

    // vIndex: 7
    virtual void onTickingStopped(class LevelChunk& levelChunk);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI int getClosestPlayerDistanceSquared$(class LevelChunk const& levelChunk) const;

    MCAPI bool isOwnedByTickingThread$(class LevelChunk const& levelChunk) const;

    MCAPI bool isReadOnly$(class LevelChunk const& levelChunk) const;

    MCAPI void onTickingStarted$(class LevelChunk& levelChunk);

    MCAPI void onTickingStopped$(class LevelChunk& levelChunk);

    MCAPI bool setOnChunkLoadedCalled$(class LevelChunk& levelChunk);

    MCAPI void setupRedstoneCircuit$(class ChunkSource& chunkSource, class LevelChunk& levelChunk);

    // NOLINTEND
};
