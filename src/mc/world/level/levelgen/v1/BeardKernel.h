#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeardKernel {
public:
    // prevent constructor by default
    BeardKernel& operator=(BeardKernel const&);
    BeardKernel(BeardKernel const&);

public:
    // NOLINTBEGIN
    MCAPI BeardKernel();

    MCAPI static float getContribution(int dx, int dy, int dz);

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
