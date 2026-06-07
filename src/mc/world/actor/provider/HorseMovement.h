#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct HorseStandCounterComponent;
// clang-format on

namespace HorseMovement {
// functions
// NOLINTBEGIN
MCAPI bool allowStandSliding(::EntityContext const& provider);

MCAPI void initializeHorse(::EntityContext& provider);

MCFOLD void resetStandCounter(::HorseStandCounterComponent& horseStandCounter);

MCAPI void setAllowStandSliding(::EntityContext& provider, bool value);

MCFOLD void startStandCounter(::HorseStandCounterComponent& horseStandCounter);

MCAPI bool tickStandCounter(::HorseStandCounterComponent& horseStandCounter, int maxValue);
// NOLINTEND

} // namespace HorseMovement
