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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
