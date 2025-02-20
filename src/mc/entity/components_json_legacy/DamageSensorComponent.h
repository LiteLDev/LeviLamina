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
    ::ll::UntypedStorage<4, 4>  mUnk24d3d6;
    ::ll::UntypedStorage<1, 1>  mUnkd57d7c;
    ::ll::UntypedStorage<4, 4>  mUnk3a8b9f;
    ::ll::UntypedStorage<8, 24> mUnk44565b;
    // NOLINTEND

public:
    // prevent constructor by default
    DamageSensorComponent& operator=(DamageSensorComponent const&);
    DamageSensorComponent(DamageSensorComponent const&);
    DamageSensorComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::DamageSensorTrigger const* _getVerifiedDamageSensorTrigger(
        ::Actor&                                       owner,
        ::SharedTypes::Legacy::ActorDamageCause const& cause,
        ::VariantParameterList const&                  parameters
    ) const;

    MCAPI ::SharedTypes::Legacy::DealsDamage _recordDamageAndCheckIfDealt(
        ::Actor&                                       owner,
        ::Actor*                                       sender,
        ::SharedTypes::Legacy::ActorDamageCause const& cause,
        ::Actor*                                       damager,
        float                                          amount,
        float                                          preDamageHealth,
        ::VariantParameterList                         parameters,
        bool                                           willTrigger
    );

    MCAPI float getAdjustedDamage(::Actor& owner, ::ActorDamageSource const& source, float amount) const;

    MCAPI ::DamageSensorComponent& operator=(::DamageSensorComponent&&);

    MCAPI ::SharedTypes::Legacy::DealsDamage recordBlockDamageAndCheckIfDealt(
        ::Actor&                                owner,
        ::SharedTypes::Legacy::ActorDamageCause cause,
        float                                   standingOnPos,
        ::BlockPos                              amount
    );

    MCAPI ::SharedTypes::Legacy::DealsDamage recordGenericDamageAndCheckIfDealt(
        ::Actor&                   owner,
        ::ActorDamageSource const& source,
        float                      amount,
        float                      preDamageHealth,
        ::VariantParameterList     parameters,
        bool                       willTrigger
    );
    // NOLINTEND
};
