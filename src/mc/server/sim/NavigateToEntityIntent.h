#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct NavigateToEntityIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mSpeed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void finalize(::SimulatedPlayer& player);
    // NOLINTEND
};

} // namespace sim
