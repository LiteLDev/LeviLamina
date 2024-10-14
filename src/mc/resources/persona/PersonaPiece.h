#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PersonaPiece {
public:
    // prevent constructor by default
    PersonaPiece& operator=(PersonaPiece const&);
    PersonaPiece(PersonaPiece const&);

public:
    // NOLINTBEGIN
    MCAPI PersonaPiece();

    MCAPI ~PersonaPiece();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static class PersonaPiece const& INVALID_PIECE();

    // NOLINTEND
};
