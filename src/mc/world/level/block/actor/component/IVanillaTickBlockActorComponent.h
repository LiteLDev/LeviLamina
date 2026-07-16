#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
// clang-format on

class IVanillaTickBlockActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockActor& getBlockActor() = 0;

    virtual ::BlockActor const& getBlockActor() const = 0;

    virtual ::BlockPos const& getBlockActorPosition() const = 0;

    virtual ::BlockActorType getBlockActorType() const = 0;

    virtual void tick(::BlockSource& region) = 0;

    virtual int getTickCount() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
