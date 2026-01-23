#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct MeleeAttackGoalBaseDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                     mAttackTypes;
    ::ll::TypedStorage<8, 368, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnAttack;
    ::ll::TypedStorage<8, 368, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnKill;
    ::ll::TypedStorage<4, 4, float>                                              mCooldownTime;
    ::ll::TypedStorage<4, 4, float>                                              mMeleeFov;
    ::ll::TypedStorage<4, 4, float>                                              mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>                                              mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, int>                                                mRandomStopInterval;
    ::ll::TypedStorage<1, 1, bool>                                               mAttackOnce;
    ::ll::TypedStorage<1, 1, bool>                                               mCanSpreadOnFire;
    ::ll::TypedStorage<1, 1, bool>                                               mRequireCompletePath;
    ::ll::TypedStorage<1, 1, bool>                                               mTrackTarget;
    ::ll::TypedStorage<1, 1, bool>                                               mHijackMountNavigation;
    ::ll::TypedStorage<4, 4, float>                                              mMinPathTime;
    ::ll::TypedStorage<4, 4, float>                                              mMaxPathTime;
    ::ll::TypedStorage<4, 4, float>                                              mPathFailTimeIncrease;
    ::ll::TypedStorage<4, 4, float>                                              mInnerBoundaryTimeIncrease;
    ::ll::TypedStorage<4, 4, float>                                              mOuterBoundaryTimeIncrease;
    ::ll::TypedStorage<4, 4, float>                                              mPathInnerBoundary;
    ::ll::TypedStorage<4, 4, float>                                              mPathOuterBoundary;
    ::ll::TypedStorage<4, 4, float>                                              mSpeedMultiplier;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MeleeAttackGoalBaseDefinition();

    MCAPI MeleeAttackGoalBaseDefinition(::SharedTypes::v1_21_120::MeleeAttackGoalBaseDefinition const&);

    MCAPI ::SharedTypes::v1_21_120::MeleeAttackGoalBaseDefinition&
    operator=(::SharedTypes::v1_21_120::MeleeAttackGoalBaseDefinition&&);

    MCAPI ::SharedTypes::v1_21_120::MeleeAttackGoalBaseDefinition&
    operator=(::SharedTypes::v1_21_120::MeleeAttackGoalBaseDefinition const&);

    MCAPI ~MeleeAttackGoalBaseDefinition();
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
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_120::MeleeAttackGoalBaseDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
