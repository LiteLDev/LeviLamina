#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SkinAdjustments {
public:
    // prevent constructor by default
    SkinAdjustments& operator=(SkinAdjustments const&);
    SkinAdjustments(SkinAdjustments const&);

public:
    // NOLINTBEGIN
    MCAPI SkinAdjustments();

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
