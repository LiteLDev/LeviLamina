#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RemovePassengersComponent {
public:
    // prevent constructor by default
    RemovePassengersComponent& operator=(RemovePassengersComponent const&);
    RemovePassengersComponent(RemovePassengersComponent const&);
    RemovePassengersComponent();

public:
    // NOLINTBEGIN
    MCAPI struct RemovePassengersComponent& operator=(struct RemovePassengersComponent&&);

    MCAPI ~RemovePassengersComponent();

    // NOLINTEND
};
