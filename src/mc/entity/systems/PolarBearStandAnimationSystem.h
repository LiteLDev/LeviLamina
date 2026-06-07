#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct StandAnimationComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace PolarBearStandAnimationSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI float getStandingAnimationScale(::StandAnimationComponent const& standAnimationComponent, float a);
// NOLINTEND

} // namespace PolarBearStandAnimationSystem
