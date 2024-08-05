#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ILevelChunkEventManagerProxy.h"

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
    virtual bool isReadOnly(class LevelChunk const&) const;

    // vIndex: 2
    virtual bool setOnChunkLoadedCalled(class LevelChunk&);

    // vIndex: 3
    virtual void onTickingStarted(class LevelChunk&);

    // vIndex: 4
    virtual void setupRedstoneCircuit(class ChunkSource&, class LevelChunk&);

    // vIndex: 5
    virtual int getClosestPlayerDistanceSquared(class LevelChunk const&) const;

    // vIndex: 6
    virtual bool isOwnedByTickingThread(class LevelChunk const&) const;

    // vIndex: 7
    virtual void onTickingStopped(class LevelChunk&);

    // NOLINTEND
};
