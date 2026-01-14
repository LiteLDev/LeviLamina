#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct DragonFlamingGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mGroundFlameAttackCount;
    ::ll::TypedStorage<4, 4, float>          mCooldownTime;
    ::ll::TypedStorage<4, 4, float>          mFlameTime;
    ::ll::TypedStorage<4, 4, float>          mRoarTime;
    ::ll::TypedStorage<4, 4, float>          mSmokeRadius;
    ::ll::TypedStorage<4, 4, float>          mSmokeTime;
    ::ll::TypedStorage<8, 32, ::std::string> mSmokeColor;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonFlamingGoalDefinition& operator=(DragonFlamingGoalDefinition const&);
    DragonFlamingGoalDefinition(DragonFlamingGoalDefinition const&);
    DragonFlamingGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_100::DragonFlamingGoalDefinition&
    operator=(::SharedTypes::v1_21_100::DragonFlamingGoalDefinition&&);

    MCAPI ~DragonFlamingGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& DEFAULT_GROUND_FLAME_COUNT();

    MCAPI static ::std::string_view const& DEFAULT_SMOKE_COLOR();

    MCAPI static float const& DEFAULT_SMOKE_RADIUS();

    MCAPI static float const& DEFAULT_SMOKE_TIME();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
