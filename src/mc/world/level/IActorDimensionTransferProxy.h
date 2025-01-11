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
    // vIndex: 0
    virtual ~IActorDimensionTransferProxy() = default;

    // vIndex: 1
    virtual void transferTickingArea(::Actor&, ::Dimension&) const = 0;

    // vIndex: 2
    virtual void removeActorFromLevelChunk(::Actor&) const = 0;

    // vIndex: 3
    virtual void
    transferActorToDimension(::Actor const&, ::Dimension&, ::Vec3 const&, ::std::unique_ptr<::CompoundTag>, bool)
        const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
