#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DashComponent {
public:
    // prevent constructor by default
    DashComponent& operator=(DashComponent const&);
    DashComponent(DashComponent const&);
    DashComponent();

public:
    // NOLINTBEGIN
    MCAPI uint const getCooldownTime() const;

    MCAPI float const getHorizontalMomentum() const;

    MCAPI float const getVerticalMomentum() const;

    // NOLINTEND
};
