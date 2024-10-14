#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntitySubsensorDescriptor {
public:
    // prevent constructor by default
    EntitySubsensorDescriptor& operator=(EntitySubsensorDescriptor const&);
    EntitySubsensorDescriptor();

public:
    // NOLINTBEGIN
    MCAPI EntitySubsensorDescriptor(struct EntitySubsensorDescriptor const&);

    MCAPI ~EntitySubsensorDescriptor();

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
