#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BaseMobSpawner.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class MobSpawnerBlockActor;
// clang-format on

class DefaultMobSpawner : public ::BaseMobSpawner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MobSpawnerBlockActor*> mOwner;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DefaultMobSpawner() /*override*/ = default;

    // vIndex: 4
    virtual ::BlockPos const& getPos() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockPos const& $getPos();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
