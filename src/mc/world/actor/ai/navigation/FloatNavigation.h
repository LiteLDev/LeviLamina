#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

// auto generated forward declare list
// clang-format off
class Mob;
class NavigationComponent;
// clang-format on

class FloatNavigation : public ::PathNavigation {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 10
    virtual bool travel(::NavigationComponent& parent, ::Mob& mob, float& xa, float& ya, float& za) /*override*/;

    // vIndex: 0
    virtual ~FloatNavigation() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $travel(::NavigationComponent& parent, ::Mob& mob, float& xa, float& ya, float& za);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
