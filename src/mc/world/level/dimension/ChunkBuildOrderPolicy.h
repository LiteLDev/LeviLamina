#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/ChunkBuildOrderPolicyBase.h"

class ChunkBuildOrderPolicy : public ::ChunkBuildOrderPolicyBase {
public:
    // prevent constructor by default
    ChunkBuildOrderPolicy& operator=(ChunkBuildOrderPolicy const&) = delete;
    ChunkBuildOrderPolicy(ChunkBuildOrderPolicy const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

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

    // symbol: ??0ChunkBuildOrderPolicy@@QEAA@XZ
    MCAPI ChunkBuildOrderPolicy();

    // NOLINTEND
};
