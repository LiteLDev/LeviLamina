#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ItemDescriptor; }
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_40 {

struct MoveToBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // MoveToBlockGoalDefinition inner types define
    enum class TargetSelectionMethod : int {
        Nearest = 0,
        Random  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, int>   mSearchRange;
    ::ll::TypedStorage<4, 4, int>   mSearchHeight;
    ::ll::TypedStorage<4, 4, int>   mTickInterval;
    ::ll::TypedStorage<4, 4, float> mStayDuration;
    ::ll::TypedStorage<4, 4, float> mGoalRadius;
    ::ll::TypedStorage<4, 4, float> mStartChance;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_40::MoveToBlockGoalDefinition::TargetSelectionMethod>
                                                                                               mTargetSelectionMethod;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                          mTargetOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnReachTriggers;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnStayCompletedTriggers;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>>            mTargetBlockDescriptors;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>                       mTargetBlockFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToBlockGoalDefinition& operator=(MoveToBlockGoalDefinition const&);
    MoveToBlockGoalDefinition(MoveToBlockGoalDefinition const&);
    MoveToBlockGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveToBlockGoalDefinition(::SharedTypes::v1_26_40::MoveToBlockGoalDefinition&&);

    MCAPI ~MoveToBlockGoalDefinition();
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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_40::MoveToBlockGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
