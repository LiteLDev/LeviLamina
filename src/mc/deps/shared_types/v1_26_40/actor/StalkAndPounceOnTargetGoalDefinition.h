#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_40 {

struct StalkAndPounceOnTargetGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                      mStalkSpeed;
    ::ll::TypedStorage<4, 4, float>                                      mMaxStalkDist;
    ::ll::TypedStorage<4, 4, float>                                      mLeapHeight;
    ::ll::TypedStorage<4, 4, float>                                      mLeapDist;
    ::ll::TypedStorage<4, 4, float>                                      mPounceMaxDist;
    ::ll::TypedStorage<4, 4, float>                                      mStrikeDist;
    ::ll::TypedStorage<4, 4, float>                                      mInterestTime;
    ::ll::TypedStorage<4, 4, float>                                      mStuckTime;
    ::ll::TypedStorage<1, 1, bool>                                       mSetPersistent;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mStuckBlocks;
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

} // namespace SharedTypes::v1_26_40
