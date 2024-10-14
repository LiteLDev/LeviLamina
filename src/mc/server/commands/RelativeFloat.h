#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RelativeFloat {
public:
    // prevent constructor by default
    RelativeFloat& operator=(RelativeFloat const&);
    RelativeFloat(RelativeFloat const&);

public:
    // NOLINTBEGIN
    MCAPI RelativeFloat();

    MCAPI RelativeFloat(float offset, bool relative);

    MCAPI float getValue(float base) const;

    MCAPI bool isRelative() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
