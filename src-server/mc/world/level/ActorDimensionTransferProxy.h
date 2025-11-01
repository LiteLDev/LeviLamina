#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IActorDimensionTransferProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class Dimension;
class Vec3;
// clang-format on

class ActorDimensionTransferProxy : public ::IActorDimensionTransferProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorDimensionTransferProxy() /*override*/ = default;

    // vIndex: 1
    virtual void transferTickingArea(::Actor& actor, ::Dimension& dimension) const /*override*/;

    // vIndex: 2
    virtual void removeActorFromLevelChunk(::Actor& actor) const /*override*/;

    // vIndex: 3
    virtual void transferActorToDimension(::Actor const& actor, ::Dimension& dimension, ::Vec3 const& targetPosition, ::std::unique_ptr<::CompoundTag> saveTag) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $transferTickingArea(::Actor& actor, ::Dimension& dimension) const;

    MCNAPI void $removeActorFromLevelChunk(::Actor& actor) const;

    MCNAPI void $transferActorToDimension(::Actor const& actor, ::Dimension& dimension, ::Vec3 const& targetPosition, ::std::unique_ptr<::CompoundTag> saveTag) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
