#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_21_120/actor/EntityTypes.h"

namespace SharedTypes::v1_21_120 {

struct AvoidMobTypeGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                               mIgnoreVisibility;
    ::ll::TypedStorage<4, 4, int>                                                mAvoidTargetPositionDistanceXZ;
    ::ll::TypedStorage<4, 4, int>                                                mAvoidTargetPositionDistanceY;
    ::ll::TypedStorage<4, 4, float>                                              mMaximumDistance;
    ::ll::TypedStorage<4, 4, float>                                              mMaximumFlee;
    ::ll::TypedStorage<4, 4, float>                                              mProbabilityPerStrength;
    ::ll::TypedStorage<4, 4, float>                                              mRiverSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                              mSprintDistance;
    ::ll::TypedStorage<4, 4, float>                                              mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                              mWalkSpeedModifier;
    ::ll::TypedStorage<1, 1, bool>                                               mRemoveTarget;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnEscapeTrigger;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>             mSoundEvent;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                          mSoundIntervalRange;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_120::EntityTypes>             mAvoidMobs;
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidMobTypeGoalDefinition& operator=(AvoidMobTypeGoalDefinition const&);
    AvoidMobTypeGoalDefinition(AvoidMobTypeGoalDefinition const&);
    AvoidMobTypeGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AvoidMobTypeGoalDefinition(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition&&);

    MCAPI ::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition&
    operator=(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition&&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
