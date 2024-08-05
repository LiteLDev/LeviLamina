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
    // vIndex: 0
    virtual ~ChunkBuildOrderPolicy() = default;

    // vIndex: 1
    virtual int getChunkRebuildPriority(class ChunkPos const& cp) const;

    // vIndex: 2
    virtual uint registerForUpdates();

    // vIndex: 3
    virtual void unregisterForUpdates(uint handle);

    // vIndex: 4
    virtual void setPlayerInfluence(uint handle, class ChunkPos const& playerPosition, class Vec3 const&);

    // vIndex: 5
    virtual void setTickingAreaInfluence(uint handle, class ChunkPos const&, int sizeX, int sizeZ, bool isCircle, bool);

    // vIndex: 6
    virtual void updateInfluences();

    // NOLINTEND
};
