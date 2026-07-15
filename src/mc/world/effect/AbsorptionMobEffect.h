#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseAttributeMap;
struct EffectDuration;
// clang-format on

class AbsorptionMobEffect : public ::MobEffect {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void removeEffects(::BaseAttributeMap&) /*override*/;

    virtual void applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
