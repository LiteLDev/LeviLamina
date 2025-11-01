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
    // vIndex: 0
    virtual ~ILevelChunkEventManagerProxy() = default;

    // vIndex: 1
    virtual bool isReadOnly(::LevelChunk const&) const = 0;

    // vIndex: 2
    virtual bool setOnChunkLoadedCalled(::LevelChunk&) = 0;

    // vIndex: 3
    virtual void onTickingStarted(::LevelChunk&) = 0;

    // vIndex: 4
    virtual void setupRedstoneCircuit(::ChunkSource&, ::LevelChunk&) = 0;

    // vIndex: 5
    virtual int getClosestPlayerDistanceSquared(::LevelChunk const&) const = 0;

    // vIndex: 6
    virtual bool isOwnedByTickingThread(::LevelChunk const&) const = 0;

    // vIndex: 7
    virtual void onTickingStopped(::LevelChunk&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
