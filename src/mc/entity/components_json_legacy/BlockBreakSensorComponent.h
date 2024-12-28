#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

class BlockBreakSensorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk64c207;
    ::ll::UntypedStorage<4, 12> mUnk4b67dd;
    ::ll::UntypedStorage<8, 32> mUnke2081e;
    ::ll::UntypedStorage<8, 24> mUnk6d2d59;
    ::ll::UntypedStorage<8, 24> mUnka79c49;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockBreakSensorComponent& operator=(BlockBreakSensorComponent const&);
    BlockBreakSensorComponent(BlockBreakSensorComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockBreakSensorComponent();

    MCAPI void initialize(::Actor& actor);

    MCAPI ::BlockBreakSensorComponent& operator=(::BlockBreakSensorComponent&&);

    MCAPI void updateSensorPos(::Vec3 const& newPos);

    MCAPI ~BlockBreakSensorComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
