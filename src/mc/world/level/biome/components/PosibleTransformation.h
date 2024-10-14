#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PosibleTransformation {
public:
    // prevent constructor by default
    PosibleTransformation();

public:
    // NOLINTBEGIN
    MCAPI PosibleTransformation(struct PosibleTransformation const&);

    MCAPI struct PosibleTransformation& operator=(struct PosibleTransformation const&);

    MCAPI ~PosibleTransformation();

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
