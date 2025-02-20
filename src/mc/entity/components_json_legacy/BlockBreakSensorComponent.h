#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    BlockBreakSensorComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockBreakSensorComponent(::BlockBreakSensorComponent&&);

    MCAPI ::BlockBreakSensorComponent& operator=(::BlockBreakSensorComponent&&);

    MCAPI ~BlockBreakSensorComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockBreakSensorComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
