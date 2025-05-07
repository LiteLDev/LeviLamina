#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class AttributeModifier;
// clang-format on

class AttackDamageMobEffect : public ::MobEffect {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual float getAttributeModifierValue(int amplifier, ::AttributeModifier const& modifier) const /*override*/;

    // vIndex: 0
    virtual ~AttackDamageMobEffect() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getAttributeModifierValue(int amplifier, ::AttributeModifier const& modifier) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
