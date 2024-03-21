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
    // vIndex: 0, symbol: __gen_??1LevelChunkEventManagerProxy@@UEAA@XZ
    virtual ~LevelChunkEventManagerProxy() = default;

    // vIndex: 1, symbol: ?isReadOnly@LevelChunkEventManagerProxy@@UEBA_NAEBVLevelChunk@@@Z
    virtual bool isReadOnly(class LevelChunk const&) const;

    // vIndex: 2, symbol: ?setOnChunkLoadedCalled@LevelChunkEventManagerProxy@@UEAA_NAEAVLevelChunk@@@Z
    virtual bool setOnChunkLoadedCalled(class LevelChunk&);

    // vIndex: 3, symbol: ?onTickingStarted@LevelChunkEventManagerProxy@@UEAAXAEAVLevelChunk@@@Z
    virtual void onTickingStarted(class LevelChunk&);

    // vIndex: 4, symbol: ?setupRedstoneCircuit@LevelChunkEventManagerProxy@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    virtual void setupRedstoneCircuit(class ChunkSource&, class LevelChunk&);

    // vIndex: 5, symbol: ?getClosestPlayerDistanceSquared@LevelChunkEventManagerProxy@@UEBAHAEBVLevelChunk@@@Z
    virtual int getClosestPlayerDistanceSquared(class LevelChunk const&) const;

    // vIndex: 6, symbol: ?isOwnedByTickingThread@LevelChunkEventManagerProxy@@UEBA_NAEBVLevelChunk@@@Z
    virtual bool isOwnedByTickingThread(class LevelChunk const&) const;

    // vIndex: 7, symbol: ?onTickingStopped@LevelChunkEventManagerProxy@@UEAAXAEAVLevelChunk@@@Z
    virtual void onTickingStopped(class LevelChunk&);

    // NOLINTEND
};
