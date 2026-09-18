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

struct NapGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                      mCooldownMin;
    ::ll::TypedStorage<4, 4, float>                                      mCooldownMax;
    ::ll::TypedStorage<4, 4, float>                                      mMobDetectDist;
    ::ll::TypedStorage<4, 4, float>                                      mMobDetectHeight;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mCanNapFilters;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mWakeMobExceptions;
    // NOLINTEND

public:
    // prevent constructor by default
    NapGoalDefinition& operator=(NapGoalDefinition const&);
    NapGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NapGoalDefinition(::SharedTypes::v1_26_40::NapGoalDefinition&&);

    MCAPI NapGoalDefinition(::SharedTypes::v1_26_40::NapGoalDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_40::NapGoalDefinition const&) const;
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
    MCAPI void* $ctor(::SharedTypes::v1_26_40::NapGoalDefinition&&);

    MCAPI void* $ctor(::SharedTypes::v1_26_40::NapGoalDefinition const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
