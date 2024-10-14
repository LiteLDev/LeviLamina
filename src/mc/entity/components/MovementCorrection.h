#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/CorrectionMethod.h"

struct MovementCorrection {
public:
    // prevent constructor by default
    MovementCorrection& operator=(MovementCorrection const&);
    MovementCorrection(MovementCorrection const&);
    MovementCorrection();

public:
    // NOLINTBEGIN
    MCAPI MovementCorrection(::CorrectionMethod method, class Vec3 const& acceptPos);

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
