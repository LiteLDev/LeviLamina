#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_30/actor/RandomLookAroundGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct RandomLookAroundAndSitGoalDefinition : public ::SharedTypes::v1_26_30::RandomLookAroundGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mContinueSitting;
    ::ll::TypedStorage<1, 1, bool> mContinueIfLeashed;
    ::ll::TypedStorage<4, 4, int>  mMinLookCount;
    ::ll::TypedStorage<4, 4, int>  mMaxLookCount;
    ::ll::TypedStorage<4, 4, int>  mMinLookAroundTime;
    ::ll::TypedStorage<4, 4, int>  mMaxLookAroundTime;
    ::ll::TypedStorage<4, 4, int>  mRandomLookAroundCooldown;
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

} // namespace SharedTypes::v1_26_30
