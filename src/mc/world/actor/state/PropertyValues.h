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

    MCAPI void resize(uint64 numInts, uint64 numFloats, uint64 numBools, uint64 numEnums);

    MCAPI ~PropertyValues();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct PropertyValues const&);

    MCAPI void dtor$();

    // NOLINTEND
};
