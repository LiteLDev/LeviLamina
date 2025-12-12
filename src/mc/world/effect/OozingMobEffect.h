#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class OozingMobEffect : public ::MobEffect {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onActorDied(::Actor& target, int amplifier) const /*override*/;

    virtual ~OozingMobEffect() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onActorDied(::Actor& target, int amplifier) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
