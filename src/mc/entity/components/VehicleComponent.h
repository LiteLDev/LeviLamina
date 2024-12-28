#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VehicleComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5fcf58;
    // NOLINTEND

public:
    // prevent constructor by default
    VehicleComponent& operator=(VehicleComponent const&);
    VehicleComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VehicleComponent(::VehicleComponent const&);

    MCAPI ~VehicleComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::VehicleComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
