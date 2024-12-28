#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class ActorDataSyncSystem {
public:
    // prevent constructor by default
    ActorDataSyncSystem& operator=(ActorDataSyncSystem const&);
    ActorDataSyncSystem(ActorDataSyncSystem const&);
    ActorDataSyncSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createActorDataSyncSystem();
    // NOLINTEND
};
