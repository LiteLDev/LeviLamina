#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BaseMobSpawner.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class DefaultMobSpawner : public ::BaseMobSpawner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk21360f;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultMobSpawner& operator=(DefaultMobSpawner const&);
    DefaultMobSpawner(DefaultMobSpawner const&);
    DefaultMobSpawner();

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
    MCNAPI ::BlockPos const& $getPos();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
