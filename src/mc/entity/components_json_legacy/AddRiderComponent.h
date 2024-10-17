#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AddRiderComponent {
public:
    // prevent constructor by default
    AddRiderComponent& operator=(AddRiderComponent const&);
    AddRiderComponent(AddRiderComponent const&);
    AddRiderComponent();

public:
    // NOLINTBEGIN
    MCAPI void reloadComponent(class Actor& owner);

    MCAPI ~AddRiderComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
