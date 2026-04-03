#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct LookAtActorBaseGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mLookTime;
    ::ll::TypedStorage<4, 4, float>                     mLookDistance;
    ::ll::TypedStorage<4, 4, float>                     mProbability;
    ::ll::TypedStorage<4, 4, int>                       mAngleOfViewX;
    ::ll::TypedStorage<4, 4, int>                       mAngleOfViewY;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx, ::std::string_view filterEnding);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
