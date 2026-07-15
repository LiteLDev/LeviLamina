#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace PlayerSleep {
// functions
// NOLINTBEGIN
MCAPI short getSleepCounter(::EntityContext const& provider);

MCAPI bool isSleepingLongEnough(::EntityContext const& provider);

MCAPI void resetSleepCounter(::EntityContext& provider);

MCAPI void setSleepCounter(::EntityContext& provider, short value);

MCAPI void setSleepCounterToMax(::EntityContext& provider);
// NOLINTEND

} // namespace PlayerSleep
