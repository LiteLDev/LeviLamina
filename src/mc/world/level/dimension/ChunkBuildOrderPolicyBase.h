#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkBuildOrderPolicyBase {
public:
    // prevent constructor by default
    ChunkBuildOrderPolicyBase& operator=(ChunkBuildOrderPolicyBase const&);
    ChunkBuildOrderPolicyBase(ChunkBuildOrderPolicyBase const&);
    ChunkBuildOrderPolicyBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ChunkBuildOrderPolicyBase@@UEAA@XZ
    virtual ~ChunkBuildOrderPolicyBase();

    // vIndex: 1, symbol: ?getChunkRebuildPriority@ChunkBuildOrderPolicy@@UEBAHAEBVChunkPos@@@Z
    virtual int getChunkRebuildPriority(class ChunkPos const& cp) const = 0;

    // vIndex: 2, symbol: ?registerForUpdates@ChunkBuildOrderPolicyBase@@UEAAIXZ
    virtual uint registerForUpdates();

    // vIndex: 3, symbol: ?unregisterForUpdates@ChunkBuildOrderPolicy@@UEAAXI@Z
    virtual void unregisterForUpdates(uint handle) = 0;

    // vIndex: 4, symbol: ?setPlayerInfluence@ChunkBuildOrderPolicy@@UEAAXIAEBVChunkPos@@AEBVVec3@@@Z
    virtual void setPlayerInfluence(uint handle, class ChunkPos const& playerPosition, class Vec3 const&) = 0;

    // vIndex: 5, symbol: ?setTickingAreaInfluence@ChunkBuildOrderPolicy@@UEAAXIAEBVChunkPos@@HH_N1@Z
    virtual void
    setTickingAreaInfluence(uint handle, class ChunkPos const&, int sizeX, int sizeZ, bool isCircle, bool) = 0;

    // vIndex: 6, symbol: ?updateInfluences@ChunkBuildOrderPolicy@@UEAAXXZ
    virtual void updateInfluences() = 0;

    // NOLINTEND
};
