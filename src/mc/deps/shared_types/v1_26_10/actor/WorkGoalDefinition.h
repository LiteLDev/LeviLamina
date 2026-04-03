#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10 {

struct WorkGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                mMinSoundDelay;
    ::ll::TypedStorage<4, 4, int>                                                mMaxSoundDelay;
    ::ll::TypedStorage<4, 4, int>                                                mGoalCooldown;
    ::ll::TypedStorage<4, 4, int>                                                mActiveTime;
    ::ll::TypedStorage<1, 1, bool>                                               mCanWorkInRain;
    ::ll::TypedStorage<4, 4, int>                                                mWorkInRainTolerance;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnArrival;
    ::ll::TypedStorage<4, 4, float>                                              mSpeedMod;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkGoalDefinition(WorkGoalDefinition const&);
    WorkGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_26_10::WorkGoalDefinition& operator=(::SharedTypes::v1_26_10::WorkGoalDefinition const&);

    MCAPI ~WorkGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
