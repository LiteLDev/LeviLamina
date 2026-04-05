#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class Dimension;
class Vec3;
// clang-format on

class IActorDimensionTransferProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IActorDimensionTransferProxy() = default;

    virtual void transferTickingArea(::Actor& actor, ::Dimension& dimension) const = 0;

    virtual void removeActorFromLevelChunk(::Actor& actor) const = 0;

    virtual void transferActorToDimension(
        ::Actor const&                   actor,
        ::Dimension&                     dimension,
        ::Vec3 const&                    targetPosition,
        ::std::unique_ptr<::CompoundTag> saveTag
    ) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
