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
    // prevent constructor by default
    AbsorptionMobEffect& operator=(AbsorptionMobEffect const&);
    AbsorptionMobEffect(AbsorptionMobEffect const&);
    AbsorptionMobEffect();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom) /*override*/;

    // vIndex: 1
    virtual void applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const /*override*/;

    // vIndex: 0
    virtual ~AbsorptionMobEffect() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom);

    MCAPI void $applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
