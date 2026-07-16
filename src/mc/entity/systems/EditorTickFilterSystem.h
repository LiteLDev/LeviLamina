#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct EditorTickFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createAddPauseTickNeeded();

    MCAPI static ::TickingSystemWithInfo createRemoveActorTickNeeded();
    // NOLINTEND
};
