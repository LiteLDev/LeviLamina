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

struct MeleeAttackBaseGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                     mAttackTypes;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnAttack;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnKill;
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
    // prevent constructor by default
    MeleeAttackBaseGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MeleeAttackBaseGoalDefinition(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition&&);

    MCNAPI MeleeAttackBaseGoalDefinition(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const&);

    MCNAPI ::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition&
    operator=(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition&&);

    MCNAPI ::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition&
    operator=(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const&);

    MCNAPI bool operator==(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const&) const;

    MCNAPI ~MeleeAttackBaseGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition&&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
