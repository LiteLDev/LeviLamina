#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50 {

struct FlockingComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mInWater;
    ::ll::TypedStorage<1, 1, bool>  mMatchVariants;
    ::ll::TypedStorage<1, 1, bool>  mUseCenterOfMass;
    ::ll::TypedStorage<4, 4, int>   mLowFlockLimit;
    ::ll::TypedStorage<4, 4, int>   mHighFlockLimit;
    ::ll::TypedStorage<4, 4, float> mGoalWeight;
    ::ll::TypedStorage<4, 4, float> mLonerChance;
    ::ll::TypedStorage<4, 4, float> mInfluenceRadius;
    ::ll::TypedStorage<4, 4, float> mBreachInfluence;
    ::ll::TypedStorage<4, 4, float> mSeparationWeight;
    ::ll::TypedStorage<4, 4, float> mSeparationThreshold;
    ::ll::TypedStorage<4, 4, float> mCohesionWeight;
    ::ll::TypedStorage<4, 4, float> mCohesionThreshold;
    ::ll::TypedStorage<4, 4, float> mInnerCohesionThreshold;
    ::ll::TypedStorage<4, 4, float> mMinHeight;
    ::ll::TypedStorage<4, 4, float> mMaxHeight;
    ::ll::TypedStorage<4, 4, float> mBlockDistance;
    ::ll::TypedStorage<4, 4, float> mBlockWeight;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& DEFAULT_BLOCK_DISTANCE();

    MCAPI static float const& DEFAULT_BLOCK_WEIGHT();

    MCAPI static float const& DEFAULT_BREACH_INFLUENCE();

    MCAPI static float const& DEFAULT_COHESION_THRESHOLD();

    MCAPI static float const& DEFAULT_COHESION_WEIGHT();

    MCAPI static float const& DEFAULT_GOAL_WEIGHT();

    MCAPI static int const& DEFAULT_HIGH_FLOCK_LIMIT();

    MCAPI static float const& DEFAULT_INFLUENCE_RADIUS();

    MCAPI static float const& DEFAULT_INNER_COHESION_THRESHOLD();

    MCAPI static bool const& DEFAULT_IN_WATER();

    MCAPI static float const& DEFAULT_LONER_CHANCE();

    MCAPI static int const& DEFAULT_LOW_FLOCK_LIMIT();

    MCAPI static bool const& DEFAULT_MATCH_VARIANTS();

    MCAPI static float const& DEFAULT_MAX_HEIGHT();

    MCAPI static float const& DEFAULT_MIN_HEIGHT();

    MCAPI static float const& DEFAULT_SEPARATION_THRESHOLD();

    MCAPI static float const& DEFAULT_SEPARATION_WEIGHT();

    MCAPI static bool const& DEFAULT_USE_CENTER_OF_MASS();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
