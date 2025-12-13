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
    virtual ~ChunkBuildOrderPolicyBase();

    virtual int getChunkRebuildPriority(::ChunkPos const&) const = 0;

    virtual uint registerForUpdates();

    virtual void unregisterForUpdates(uint) = 0;

    virtual void setPlayerInfluence(uint, ::ChunkPos const&, ::Vec3 const&) = 0;

    virtual void setTickingAreaInfluence(uint, ::ChunkPos const&, int, int, bool, bool) = 0;

    virtual void updateInfluences() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD uint $registerForUpdates();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
