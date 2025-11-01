#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Vec3;
// clang-format on

class ChunkBuildOrderPolicyBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChunkBuildOrderPolicyBase();

    // vIndex: 1
    virtual int getChunkRebuildPriority(::ChunkPos const&) const = 0;

    // vIndex: 2
    virtual uint registerForUpdates();

    // vIndex: 3
    virtual void unregisterForUpdates(uint) = 0;

    // vIndex: 4
    virtual void setPlayerInfluence(uint, ::ChunkPos const&, ::Vec3 const&) = 0;

    // vIndex: 5
    virtual void setTickingAreaInfluence(uint, ::ChunkPos const&, int, int, bool, bool) = 0;

    // vIndex: 6
    virtual void updateInfluences() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint $registerForUpdates();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
