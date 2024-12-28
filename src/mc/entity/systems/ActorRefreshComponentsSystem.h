#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct ActorRefreshComponentsSystem {
public:
    // prevent constructor by default
    ActorRefreshComponentsSystem& operator=(ActorRefreshComponentsSystem const&);
    ActorRefreshComponentsSystem(ActorRefreshComponentsSystem const&);
    ActorRefreshComponentsSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
