#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct ChargeAttackGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                  mMinDistance;
    ::ll::TypedStorage<4, 4, float>                                  mMaxDistance;
    ::ll::TypedStorage<4, 4, float>                                  mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                                  mSuccessRate;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& DEFAULT_MAX_DISTANCE();

    MCAPI static float const& DEFAULT_MIN_DISTANCE();

    MCAPI static float const& DEFAULT_SPEED_MULTIPLIER();

    MCAPI static float const& DEFAULT_SUCCESS_RATE();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
