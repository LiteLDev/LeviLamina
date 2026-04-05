#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class LevelChunk;
// clang-format on

class ILevelChunkEventManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILevelChunkEventManagerProxy() = default;

    virtual bool isReadOnly(::LevelChunk const& levelChunk) const = 0;

    virtual bool setOnChunkLoadedCalled(::LevelChunk& levelChunk) = 0;

    virtual void onTickingStarted(::LevelChunk& levelChunk) = 0;

    virtual void setupRedstoneCircuit(::ChunkSource& chunkSource, ::LevelChunk& levelChunk) = 0;

    virtual int getClosestPlayerDistanceSquared(::LevelChunk const& levelChunk) const = 0;

    virtual bool isOwnedByTickingThread(::LevelChunk const& levelChunk) const = 0;

    virtual void onTickingStopped(::LevelChunk& levelChunk) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
