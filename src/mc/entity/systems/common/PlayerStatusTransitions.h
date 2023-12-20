#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SneakTriggerSystem {

struct PlayerStatusTransitions {
public:
    // prevent constructor by default
    PlayerStatusTransitions& operator=(PlayerStatusTransitions const&);
    PlayerStatusTransitions(PlayerStatusTransitions const&);
    PlayerStatusTransitions();
};

}; // namespace SneakTriggerSystem
