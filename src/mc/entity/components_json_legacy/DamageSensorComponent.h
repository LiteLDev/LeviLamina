#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/DealsDamage.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockPos;
struct DamageSensorTrigger;
struct VariantParameterList;
// clang-format on

class DamageSensorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                   mDamageAmount;
    ::ll::TypedStorage<1, 1, bool>                                  mDamageIsFatal;
    ::ll::TypedStorage<4, 4, int>                                   mDamageCause;
    ::ll::TypedStorage<8, 24, ::std::vector<::DamageSensorTrigger>> mTriggers;
    // NOLINTEND

public:
    // prevent constructor by default
    DamageSensorComponent& operator=(DamageSensorComponent const&);
    DamageSensorComponent(DamageSensorComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::DamageSensorTrigger const* _getVerifiedDamageSensorTrigger(
        ::Actor&                                       owner,
        ::SharedTypes::Legacy::ActorDamageCause const& cause,
        ::VariantParameterList const&                  parameters
    ) const;

    MCNAPI ::SharedTypes::Legacy::DealsDamage _recordDamageAndCheckIfDealt(
        ::Actor&                                       owner,
        ::Actor*                                       sender,
        ::SharedTypes::Legacy::ActorDamageCause const& cause,
        ::Actor*                                       damager,
        float                                          amount,
        float                                          preDamageHealth,
        ::VariantParameterList                         parameters,
        bool                                           willTrigger
    );

    MCNAPI float getAdjustedDamage(::Actor& owner, ::ActorDamageSource const& source, float amount) const;

    MCNAPI ::DamageSensorComponent& operator=(::DamageSensorComponent&&);

    MCNAPI ::SharedTypes::Legacy::DealsDamage recordBlockDamageAndCheckIfDealt(
        ::Actor&                                owner,
        ::SharedTypes::Legacy::ActorDamageCause cause,
        float                                   standingOnPos,
        ::BlockPos                              amount
    );

    MCNAPI ::SharedTypes::Legacy::DealsDamage recordGenericDamageAndCheckIfDealt(
        ::Actor&                   owner,
        ::ActorDamageSource const& source,
        float                      amount,
        float                      preDamageHealth,
        ::VariantParameterList     parameters,
        bool                       willTrigger
    );
    // NOLINTEND
};
