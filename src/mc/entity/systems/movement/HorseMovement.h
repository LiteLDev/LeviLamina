#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace HorseMovement {
// NOLINTBEGIN
// symbol: ?allowStandSliding@HorseMovement@@YA_NAEBVEntityContext@@@Z
MCAPI bool allowStandSliding(class EntityContext const& provider);

// symbol: ?initializeHorse@HorseMovement@@YAXAEAVEntityContext@@@Z
MCAPI void initializeHorse(class EntityContext& provider);

// symbol: ?resetStandCounter@HorseMovement@@YAXAEAUHorseStandCounterComponent@@@Z
MCAPI void resetStandCounter(struct HorseStandCounterComponent&);

// symbol: ?setAllowStandSliding@HorseMovement@@YAXAEAVEntityContext@@_N@Z
MCAPI void setAllowStandSliding(class EntityContext& provider, bool value);

// symbol: ?startStandCounter@HorseMovement@@YAXAEAUHorseStandCounterComponent@@@Z
MCAPI void startStandCounter(struct HorseStandCounterComponent&);

// symbol: ?tickStandCounter@HorseMovement@@YA_NAEAUHorseStandCounterComponent@@H@Z
MCAPI bool tickStandCounter(struct HorseStandCounterComponent&, int);
// NOLINTEND

}; // namespace HorseMovement
