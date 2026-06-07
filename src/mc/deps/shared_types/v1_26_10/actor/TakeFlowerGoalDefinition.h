#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10 {

struct TakeFlowerGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>         mFilters;
    ::ll::TypedStorage<4, 4, float>                                              mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                              mMinPickupFlowerWaitSeconds;
    ::ll::TypedStorage<4, 4, float>                                              mMaxPickupFlowerWaitSeconds;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mSearchArea;
    ::ll::TypedStorage<4, 4, float>                                              mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>                                              mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>                                              mMinDistanceToTarget;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnTakeFlower;
    // NOLINTEND

public:
    // prevent constructor by default
    TakeFlowerGoalDefinition& operator=(TakeFlowerGoalDefinition const&);
    TakeFlowerGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TakeFlowerGoalDefinition(::SharedTypes::v1_26_10::TakeFlowerGoalDefinition&&);

    MCAPI TakeFlowerGoalDefinition(::SharedTypes::v1_26_10::TakeFlowerGoalDefinition const&);

    MCAPI ~TakeFlowerGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCFOLD static ::SemVersion getStrictParsingVersion();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_10::TakeFlowerGoalDefinition&&);

    MCAPI void* $ctor(::SharedTypes::v1_26_10::TakeFlowerGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
