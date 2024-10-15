#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDamageCause.h"

class DamageSensorComponent {
public:
    // prevent constructor by default
    DamageSensorComponent& operator=(DamageSensorComponent const&);
    DamageSensorComponent(DamageSensorComponent const&);

public:
    // NOLINTBEGIN
    MCAPI DamageSensorComponent();

    MCAPI float getAdjustedDamage(class Actor& owner, class ActorDamageSource const& source, float amount) const;

    MCAPI ::ActorDamageCause getCause() const;

    MCAPI bool isFatal() const;

    MCAPI class DamageSensorComponent& operator=(class DamageSensorComponent&&);

    MCAPI bool
    recordBlockDamage(class Actor& owner, ::ActorDamageCause cause, float amount, class BlockPos standingOnPos);

    MCAPI bool recordGenericDamage(
        class Actor&               owner,
        class Actor*               sender,
        ::ActorDamageCause         cause,
        float                      amount,
        class VariantParameterList parameters
    );

    MCAPI bool recordGenericDamage(
        class Actor&                   owner,
        class ActorDamageSource const& source,
        float                          amount,
        float                          preDamageHealth,
        class VariantParameterList     parameters,
        bool                           willTrigger
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _fillParameters(
        class VariantParameterList& inOutParameters,
        class Actor&                owner,
        class Actor*                sender,
        class Actor*                damager
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
