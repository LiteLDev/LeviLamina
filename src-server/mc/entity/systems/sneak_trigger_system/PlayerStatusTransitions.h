#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SneakTriggerSystem {

struct PlayerStatusTransitions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk96a283;
    ::ll::UntypedStorage<1, 2> mUnk6a624f;
    ::ll::UntypedStorage<1, 2> mUnkfd53ce;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerStatusTransitions& operator=(PlayerStatusTransitions const&);
    PlayerStatusTransitions(PlayerStatusTransitions const&);
    PlayerStatusTransitions();

};

}
