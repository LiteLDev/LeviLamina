#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace PlayerSleep {
// functions
// NOLINTBEGIN
MCNAPI short getSleepCounter(::EntityContext const& provider);

MCNAPI bool isSleepingLongEnough(::EntityContext const& provider);

MCNAPI void resetSleepCounter(::EntityContext& provider);

MCNAPI void setSleepCounter(::EntityContext& provider, short value);

MCNAPI void setSleepCounterToMax(::EntityContext& provider);
// NOLINTEND

} // namespace PlayerSleep
