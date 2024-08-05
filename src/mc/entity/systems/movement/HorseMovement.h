#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace HorseMovement {
// NOLINTBEGIN
MCAPI bool allowStandSliding(class EntityContext const& provider);

MCAPI void initializeHorse(class EntityContext& provider);

MCAPI void resetStandCounter(struct HorseStandCounterComponent&);

MCAPI void setAllowStandSliding(class EntityContext& provider, bool value);

MCAPI void startStandCounter(struct HorseStandCounterComponent&);

MCAPI bool tickStandCounter(struct HorseStandCounterComponent&, int);
// NOLINTEND

}; // namespace HorseMovement
