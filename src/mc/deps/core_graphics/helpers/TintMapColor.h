#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TintMapColor {
public:
    // prevent constructor by default
    TintMapColor& operator=(TintMapColor const&);
    TintMapColor(TintMapColor const&);

public:
    // NOLINTBEGIN
    MCAPI TintMapColor();

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
