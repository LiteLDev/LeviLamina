#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct PostEntityDismountGameEventSystem {
public:
    // prevent constructor by default
    PostEntityDismountGameEventSystem& operator=(PostEntityDismountGameEventSystem const&);
    PostEntityDismountGameEventSystem(PostEntityDismountGameEventSystem const&);
    PostEntityDismountGameEventSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
