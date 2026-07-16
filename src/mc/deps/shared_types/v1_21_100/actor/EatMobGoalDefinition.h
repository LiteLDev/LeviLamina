#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct EatMobGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>          mRunSpeed;
    ::ll::TypedStorage<4, 4, float>          mEatAnimationTime;
    ::ll::TypedStorage<4, 4, float>          mPullInForce;
    ::ll::TypedStorage<4, 4, float>          mReachMobDistance;
    ::ll::TypedStorage<8, 32, ::std::string> mEatMobSound;
    ::ll::TypedStorage<8, 32, ::std::string> mLootTable;
    // NOLINTEND

public:
    // prevent constructor by default
    EatMobGoalDefinition& operator=(EatMobGoalDefinition const&);
    EatMobGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EatMobGoalDefinition(::SharedTypes::v1_21_100::EatMobGoalDefinition const&);

    MCAPI ::SharedTypes::v1_21_100::EatMobGoalDefinition& operator=(::SharedTypes::v1_21_100::EatMobGoalDefinition&&);

    MCAPI bool operator==(::SharedTypes::v1_21_100::EatMobGoalDefinition const&) const;
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
    MCAPI void* $ctor(::SharedTypes::v1_21_100::EatMobGoalDefinition const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
