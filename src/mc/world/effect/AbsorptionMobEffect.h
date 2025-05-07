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
    // vIndex: 2
    virtual void removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom) /*override*/;

    // vIndex: 1
    virtual void applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const /*override*/;

    // vIndex: 0
    virtual ~AbsorptionMobEffect() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom);

    MCNAPI void $applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
