#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertyValues {
public:
    // prevent constructor by default
    PropertyValues& operator=(PropertyValues const&);
    PropertyValues();

public:
    // NOLINTBEGIN
    MCAPI PropertyValues(struct PropertyValues const&);

    MCAPI void resize(uint64, uint64, uint64, uint64);

    MCAPI ~PropertyValues();

    // NOLINTEND
};
