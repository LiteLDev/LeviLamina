#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/TargetGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct NearestAttackableTargetGoalDefinition : public ::SharedTypes::TargetGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mReselectTargets;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mAttackInterval;
    ::ll::TypedStorage<4, 4, int>                       mScanInterval;
    ::ll::TypedStorage<4, 4, float>                     mTargetSearchHeight;
    ::ll::TypedStorage<4, 4, float>                     mTargetInvisibleMultiplier;
    ::ll::TypedStorage<4, 4, float>                     mTargetSneakVisibilityMultiplier;
    ::ll::TypedStorage<1, 1, bool>                      mSetPersistent;
    ::ll::TypedStorage<4, 4, float>                     mTargetAcquisitionProbability;
    // NOLINTEND

public:
    // prevent constructor by default
    NearestAttackableTargetGoalDefinition& operator=(NearestAttackableTargetGoalDefinition const&);
    NearestAttackableTargetGoalDefinition(NearestAttackableTargetGoalDefinition const&);
    NearestAttackableTargetGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_26_0::NearestAttackableTargetGoalDefinition&
    operator=(::SharedTypes::v1_26_0::NearestAttackableTargetGoalDefinition&&);

    MCAPI ~NearestAttackableTargetGoalDefinition();
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

} // namespace SharedTypes::v1_26_0
