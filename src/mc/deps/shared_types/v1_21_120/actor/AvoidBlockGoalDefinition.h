#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ItemDescriptor; }
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct AvoidBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                            mWalkSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                                            mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, int>                                                              mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                                              mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                                              mInterval;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mMethod;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>>            mTargetBlockDescriptors;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnEscapedTriggers;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                           mSoundEvent;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                                        mSoundIntervalRange;
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidBlockGoalDefinition& operator=(AvoidBlockGoalDefinition const&);
    AvoidBlockGoalDefinition(AvoidBlockGoalDefinition const&);
    AvoidBlockGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_120::AvoidBlockGoalDefinition&
    operator=(::SharedTypes::v1_21_120::AvoidBlockGoalDefinition&&);

    MCAPI ~AvoidBlockGoalDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
