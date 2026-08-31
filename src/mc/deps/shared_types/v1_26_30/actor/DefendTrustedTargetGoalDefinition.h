#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_26_0/actor/NearestAttackableTargetGoalDefinition.h"

namespace SharedTypes::v1_26_30 {

struct DefendTrustedTargetGoalDefinition : public ::SharedTypes::v1_26_0::NearestAttackableTargetGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                mAttackIntervalSeconds;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>             mAggroSound;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnDefendEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    DefendTrustedTargetGoalDefinition& operator=(DefendTrustedTargetGoalDefinition const&);
    DefendTrustedTargetGoalDefinition(DefendTrustedTargetGoalDefinition const&);
    DefendTrustedTargetGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DefendTrustedTargetGoalDefinition(::SharedTypes::v1_26_30::DefendTrustedTargetGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_30::DefendTrustedTargetGoalDefinition&
    operator=(::SharedTypes::v1_26_30::DefendTrustedTargetGoalDefinition&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_30::DefendTrustedTargetGoalDefinition&&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
