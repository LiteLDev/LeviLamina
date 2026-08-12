#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/DealsDamage.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

struct DamageSensorTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                          mOnDamageSound;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>              mOnDamage;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause> mCause;
    ::ll::TypedStorage<4, 4, float>                                   mDamageMultipler;
    ::ll::TypedStorage<4, 4, float>                                   mDamageModifier;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::DealsDamage>      mDealsDamage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setCause(::std::string const& causeName);

    MCAPI void setDealsDamage(::std::string const& value);

    MCAPI ~DamageSensorTrigger();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
