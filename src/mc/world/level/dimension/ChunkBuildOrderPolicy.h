#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/ChunkBuildOrderPolicyBase.h"

class ChunkBuildOrderPolicy : public ::ChunkBuildOrderPolicyBase {
public:
    // prevent constructor by default
    ChunkBuildOrderPolicy& operator=(ChunkBuildOrderPolicy const&);
    ChunkBuildOrderPolicy(ChunkBuildOrderPolicy const&);
    ChunkBuildOrderPolicy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ChunkBuildOrderPolicy@@UEAA@XZ
    virtual ~ChunkBuildOrderPolicy() = default;

    // vIndex: 1, symbol: ?getChunkRebuildPriority@ChunkBuildOrderPolicy@@UEBAHAEBVChunkPos@@@Z
    virtual int getChunkRebuildPriority(class ChunkPos const&) const;

    // vIndex: 2, symbol: ?registerForUpdates@ChunkBuildOrderPolicy@@UEAAIXZ
    virtual uint registerForUpdates();

    // vIndex: 3, symbol: ?unregisterForUpdates@ChunkBuildOrderPolicy@@UEAAXI@Z
    virtual void unregisterForUpdates(uint);

    // vIndex: 4, symbol: ?setPlayerInfluence@ChunkBuildOrderPolicy@@UEAAXIAEBVChunkPos@@AEBVVec3@@@Z
    virtual void setPlayerInfluence(uint, class ChunkPos const&, class Vec3 const&);

    // vIndex: 5, symbol: ?setTickingAreaInfluence@ChunkBuildOrderPolicy@@UEAAXIAEBVChunkPos@@HH_N1@Z
    virtual void setTickingAreaInfluence(uint, class ChunkPos const&, int, int, bool, bool);

    // vIndex: 6, symbol: ?updateInfluences@ChunkBuildOrderPolicy@@UEAAXXZ
    virtual void updateInfluences();

    // NOLINTEND
};
