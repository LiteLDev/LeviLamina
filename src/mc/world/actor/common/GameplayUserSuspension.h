#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameplayUserSuspension {
public:
    // GameplayUserSuspension inner types define
    enum class State {};

public:
    // prevent constructor by default
    GameplayUserSuspension& operator=(GameplayUserSuspension const&);
    GameplayUserSuspension(GameplayUserSuspension const&);
    GameplayUserSuspension();

public:
    // NOLINTBEGIN
    // symbol: ??0GameplayUserSuspension@@QEAA@VWeakEntityRef@@W4State@0@@Z
    MCAPI GameplayUserSuspension(class WeakEntityRef entityRef, ::GameplayUserSuspension::State suspensionState);

    // NOLINTEND
};
