#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"

class DamageSensorComponent {
public:
    // prevent constructor by default
    DamageSensorComponent& operator=(DamageSensorComponent const&);
    DamageSensorComponent(DamageSensorComponent const&);

public:
    // NOLINTBEGIN
    MCAPI DamageSensorComponent();

    MCAPI float getAdjustedDamage(class Actor&, class ActorDamageSource const&, float) const;

    MCAPI ::ActorDamageCause getCause() const;

    MCAPI bool isFatal() const;

    MCAPI class DamageSensorComponent& operator=(class DamageSensorComponent&&);

    MCAPI bool recordBlockDamage(class Actor&, ::ActorDamageCause, float, class BlockPos);

    MCAPI bool recordGenericDamage(class Actor&, class Actor*, ::ActorDamageCause, float, class VariantParameterList);

    MCAPI bool
    recordGenericDamage(class Actor&, class ActorDamageSource const&, float, float, class VariantParameterList, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _fillParameters(class VariantParameterList&, class Actor&, class Actor*, class Actor*);

    // NOLINTEND
};
