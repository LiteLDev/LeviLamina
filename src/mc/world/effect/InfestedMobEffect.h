#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
// clang-format on

class InfestedMobEffect : public ::MobEffect {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onActorHurt(::Actor&, int, ::ActorDamageSource const&, float) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
