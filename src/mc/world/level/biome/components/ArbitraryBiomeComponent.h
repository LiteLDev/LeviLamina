#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ArbitraryBiomeComponent {
public:
    // prevent constructor by default
    ArbitraryBiomeComponent& operator=(ArbitraryBiomeComponent const&);
    ArbitraryBiomeComponent(ArbitraryBiomeComponent const&);
    ArbitraryBiomeComponent();

public:
    // NOLINTBEGIN
    MCAPI ~ArbitraryBiomeComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
