#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct GuardianAttackGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mMagicDamage;
    ::ll::TypedStorage<4, 4, int>   mHardModeExtraMagicDamage;
    ::ll::TypedStorage<4, 4, int>   mElderExtraMagicDamage;
    ::ll::TypedStorage<4, 4, float> mMaxRotationX;
    ::ll::TypedStorage<4, 4, float> mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float> mMinDistance;
    ::ll::TypedStorage<4, 4, float> mSoundDelayTime;
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
};

} // namespace SharedTypes::v1_26_0
