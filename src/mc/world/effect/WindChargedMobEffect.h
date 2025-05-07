#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class WindChargedMobEffect : public ::MobEffect {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void onActorDied(::Actor& target, int amplifier) const /*override*/;

    // vIndex: 0
    virtual ~WindChargedMobEffect() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onActorDied(::Actor& target, int amplifier) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
