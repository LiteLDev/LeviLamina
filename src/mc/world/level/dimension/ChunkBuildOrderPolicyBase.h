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
    // vIndex: 0
    virtual ~ChunkBuildOrderPolicyBase();

    // vIndex: 1
    virtual int getChunkRebuildPriority(class ChunkPos const& cp) const = 0;

    // vIndex: 2
    virtual uint registerForUpdates();

    // vIndex: 3
    virtual void unregisterForUpdates(uint handle) = 0;

    // vIndex: 4
    virtual void setPlayerInfluence(uint handle, class ChunkPos const& playerPosition, class Vec3 const&) = 0;

    // vIndex: 5
    virtual void
    setTickingAreaInfluence(uint handle, class ChunkPos const&, int sizeX, int sizeZ, bool isCircle, bool) = 0;

    // vIndex: 6
    virtual void updateInfluences() = 0;

    // NOLINTEND
};
