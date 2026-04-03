#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/actor/BaseMoveToBlockGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_21_120/actor/EntityTypes.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10 {

struct DropItemForGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                              mSecondsBeforePickup;
    ::ll::TypedStorage<4, 4, float>                                              mTotalCooldownSeconds;
    ::ll::TypedStorage<4, 4, float>                                              mDropItemChance;
    ::ll::TypedStorage<4, 4, float>                                              mOfferingDistance;
    ::ll::TypedStorage<4, 4, float>                                              mMinimumTeleportDistance;
    ::ll::TypedStorage<4, 4, float>                                              mLookAtTargetMaxHeadHeight;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mTargetRange;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mTeleportDistanceFromTarget;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                          mTimeOfDayRange;
    ::ll::TypedStorage<8, 32, ::std::string>                                     mLootTable;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnDropAttempt;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_120::EntityTypes>             mTargetFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    DropItemForGoalDefinition(DropItemForGoalDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DropItemForGoalDefinition();

    MCAPI DropItemForGoalDefinition(::SharedTypes::v1_26_10::DropItemForGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_10::DropItemForGoalDefinition&
    operator=(::SharedTypes::v1_26_10::DropItemForGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_10::DropItemForGoalDefinition&
    operator=(::SharedTypes::v1_26_10::DropItemForGoalDefinition const&);

    MCAPI ~DropItemForGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec3 const& DEFAULT_TARGET_RANGE();

    MCAPI static ::Vec3 const& DEFAULT_TELEPORT_DISTANCE_FROM_TARGET();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_26_10::DropItemForGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
