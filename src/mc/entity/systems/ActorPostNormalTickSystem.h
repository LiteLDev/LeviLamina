#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct ActorPostNormalTickSystem {
public:
    // prevent constructor by default
    ActorPostNormalTickSystem& operator=(ActorPostNormalTickSystem const&);
    ActorPostNormalTickSystem(ActorPostNormalTickSystem const&);
    ActorPostNormalTickSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystemClient();

    MCAPI static ::TickingSystemWithInfo createSystemServer();
    // NOLINTEND
};
