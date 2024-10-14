#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BreedableType {
public:
    // prevent constructor by default
    BreedableType& operator=(BreedableType const&);
    BreedableType();

public:
    // NOLINTBEGIN
    MCAPI BreedableType(struct BreedableType const&);

    MCAPI ~BreedableType();

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
