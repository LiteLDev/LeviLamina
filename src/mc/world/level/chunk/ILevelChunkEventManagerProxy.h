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

    virtual bool isReadOnly(::LevelChunk const&) const = 0;

    virtual bool setOnChunkLoadedCalled(::LevelChunk&) = 0;

    virtual void onTickingStarted(::LevelChunk&) = 0;

    virtual void setupRedstoneCircuit(::ChunkSource&, ::LevelChunk&) = 0;

    virtual int getClosestPlayerDistanceSquared(::LevelChunk const&) const = 0;

    virtual bool isOwnedByTickingThread(::LevelChunk const&) const = 0;

    virtual void onTickingStopped(::LevelChunk&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
