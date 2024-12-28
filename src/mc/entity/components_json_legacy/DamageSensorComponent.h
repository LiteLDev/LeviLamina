#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/DealsDamage.h"
#include "mc/world/actor/ActorDamageCause.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockPos;
struct VariantParameterList;
// clang-format on

class DamageSensorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk24d3d6;
    ::ll::UntypedStorage<1, 1>  mUnkd57d7c;
    ::ll::UntypedStorage<4, 4>  mUnk3a8b9f;
    ::ll::UntypedStorage<8, 24> mUnk44565b;
    // NOLINTEND

public:
    // prevent constructor by default
    DamageSensorComponent& operator=(DamageSensorComponent const&);
    DamageSensorComponent(DamageSensorComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DamageSensorComponent();

    MCAPI float getAdjustedDamage(::Actor& owner, ::ActorDamageSource const& source, float amount) const;

    MCAPI ::ActorDamageCause getCause() const;

    MCAPI bool isFatal() const;

    MCAPI ::DamageSensorComponent& operator=(::DamageSensorComponent&&);

    MCAPI ::DealsDamage
    recordBlockDamageAndCheckIfDealt(::Actor& owner, ::ActorDamageCause cause, float amount, ::BlockPos standingOnPos);

    MCAPI ::DealsDamage recordGenericDamageAndCheckIfDealt(
        ::Actor&               owner,
        ::Actor*               sender,
        ::ActorDamageCause     cause,
        float                  amount,
        ::VariantParameterList parameters
    );

    MCAPI ::DealsDamage recordGenericDamageAndCheckIfDealt(
        ::Actor&                   owner,
        ::ActorDamageSource const& source,
        float                      amount,
        float                      preDamageHealth,
        ::VariantParameterList     parameters,
        bool                       willTrigger
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
