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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
