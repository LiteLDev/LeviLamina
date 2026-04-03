#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/EntityTypes.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes {

struct TargetGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                   mAttackOwner;
    ::ll::TypedStorage<1, 1, bool>                                   mMustReach;
    ::ll::TypedStorage<1, 1, bool>                                   mMustSee;
    ::ll::TypedStorage<4, 4, float>                                  mDefaultFollowDistance;
    ::ll::TypedStorage<4, 4, float>                                  mForgetTargetTime;
    ::ll::TypedStorage<4, 4, float>                                  mPersistTargetTime;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_120::EntityTypes> mTargetTypes;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes
