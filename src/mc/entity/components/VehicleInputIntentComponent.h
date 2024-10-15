#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VehicleInputIntentComponent {
public:
    // prevent constructor by default
    VehicleInputIntentComponent& operator=(VehicleInputIntentComponent const&);
    VehicleInputIntentComponent(VehicleInputIntentComponent const&);
    VehicleInputIntentComponent();

public:
    // NOLINTBEGIN
    MCAPI VehicleInputIntentComponent(struct VehicleInputIntentComponent&&);

    MCAPI struct VehicleInputIntentComponent& operator=(struct VehicleInputIntentComponent&&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct VehicleInputIntentComponent&&);

    // NOLINTEND
};
