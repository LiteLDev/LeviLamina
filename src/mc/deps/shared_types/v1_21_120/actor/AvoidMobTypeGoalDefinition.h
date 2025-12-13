#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct AvoidMobTypeGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk7164e0;
    ::ll::UntypedStorage<4, 4>   mUnk821e39;
    ::ll::UntypedStorage<4, 4>   mUnkcb6fc6;
    ::ll::UntypedStorage<4, 4>   mUnkc9f543;
    ::ll::UntypedStorage<4, 4>   mUnk43c3c4;
    ::ll::UntypedStorage<4, 4>   mUnk2ddc31;
    ::ll::UntypedStorage<4, 4>   mUnkae0417;
    ::ll::UntypedStorage<4, 4>   mUnkd79a76;
    ::ll::UntypedStorage<4, 4>   mUnkadf7a3;
    ::ll::UntypedStorage<4, 4>   mUnk40acee;
    ::ll::UntypedStorage<1, 1>   mUnk17799b;
    ::ll::UntypedStorage<8, 368> mUnkc0fd4e;
    ::ll::UntypedStorage<4, 4>   mUnk5d34a1;
    ::ll::UntypedStorage<4, 8>   mUnkb295d9;
    ::ll::UntypedStorage<8, 24>  mUnkff506f;
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidMobTypeGoalDefinition& operator=(AvoidMobTypeGoalDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AvoidMobTypeGoalDefinition();

    MCNAPI AvoidMobTypeGoalDefinition(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition const&);

    MCNAPI AvoidMobTypeGoalDefinition(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition&&);

    MCNAPI ::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition&
    operator=(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition&&);

    MCNAPI ~AvoidMobTypeGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DEFAULT_AVOID_TARGET_XZ();

    MCNAPI static int const& DEFAULT_AVOID_TARGET_Y();

    MCNAPI static bool const& DEFAULT_IGNORE_VISIBILITY();

    MCNAPI static float const& DEFAULT_MAX_DIST();

    MCNAPI static float const& DEFAULT_MAX_FLEE();

    MCNAPI static float const& DEFAULT_PROBABILITY_PER_STRENGTH();

    MCNAPI static bool const& DEFAULT_REMOVE_TARGET();

    MCNAPI static float const& DEFAULT_RIVER_SPEED_MULTIPLIER();

    MCNAPI static float const& DEFAULT_SPRINT_DISTANCE();

    MCNAPI static float const& DEFAULT_SPRINT_SPEED_MULTIPLIER();

    MCNAPI static float const& DEFAULT_WALK_SPEED_MULTIPLIER();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition const&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
