#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
// clang-format on

namespace FireworksMovementSystems {

class IsRocketNotAttachedToThis {
public:
    // prevent constructor by default
    IsRocketNotAttachedToThis& operator=(IsRocketNotAttachedToThis const&);
    IsRocketNotAttachedToThis(IsRocketNotAttachedToThis const&);
    IsRocketNotAttachedToThis();

public:
    // NOLINTBEGIN
    MCAPI bool operator()(class StrictEntityContext const& entity) const;

    // NOLINTEND
};

}; // namespace FireworksMovementSystems
