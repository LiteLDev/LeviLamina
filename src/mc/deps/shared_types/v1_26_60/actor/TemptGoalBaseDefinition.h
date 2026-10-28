#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ItemDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_60 {

struct TemptGoalBaseDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                 mSpeedMultiplier;
    ::ll::TypedStorage<1, 1, bool>                                                  mCanGetScared;
    ::ll::TypedStorage<1, 1, bool>                                                  mCanTemptVertically;
    ::ll::TypedStorage<1, 1, bool>                                                  mCanTemptWhileRidden;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                mTemptSound;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                             mSoundInterval;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>> mItems;
    ::ll::TypedStorage<4, 4, float>                                                 mWithinRadius;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                mStopDistance;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>    mOnTemptStartEvent;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>    mOnTemptEndEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    TemptGoalBaseDefinition(TemptGoalBaseDefinition const&);
    TemptGoalBaseDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TemptGoalBaseDefinition(::SharedTypes::v1_26_60::TemptGoalBaseDefinition&&);

    MCAPI ::SharedTypes::v1_26_60::TemptGoalBaseDefinition&
    operator=(::SharedTypes::v1_26_60::TemptGoalBaseDefinition&&);

    MCAPI ::SharedTypes::v1_26_60::TemptGoalBaseDefinition&
    operator=(::SharedTypes::v1_26_60::TemptGoalBaseDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_60::TemptGoalBaseDefinition const&) const;

    MCAPI ~TemptGoalBaseDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_60::TemptGoalBaseDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60
