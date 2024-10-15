#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VehicleComponent {
public:
    // prevent constructor by default
    VehicleComponent& operator=(VehicleComponent const&);
    VehicleComponent();

public:
    // NOLINTBEGIN
    MCAPI VehicleComponent(struct VehicleComponent const&);

    MCAPI struct VehicleComponent& operator=(struct VehicleComponent&&);

    MCAPI ~VehicleComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct VehicleComponent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
