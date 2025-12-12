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
    ::ll::UntypedStorage<4, 4>  mUnkf8d276;
    ::ll::UntypedStorage<4, 4>  mUnkfa4e4c;
    ::ll::UntypedStorage<4, 4>  mUnk3d93ba;
    ::ll::UntypedStorage<4, 4>  mUnk8ae5e1;
    ::ll::UntypedStorage<8, 32> mUnk707bad;
    ::ll::UntypedStorage<8, 32> mUnk542448;
    // NOLINTEND

public:
    // prevent constructor by default
    EatMobGoalDefinition& operator=(EatMobGoalDefinition const&);
    EatMobGoalDefinition(EatMobGoalDefinition const&);
    EatMobGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_100::EatMobGoalDefinition& operator=(::SharedTypes::v1_21_100::EatMobGoalDefinition&&);

    MCNAPI ~EatMobGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_EAT_ANIMATION_TIME();

    MCNAPI static float const& DEFAULT_PULL_IN_FORCE();

    MCNAPI static float const& DEFAULT_REACH_MOB_DISTANCE();

    MCNAPI static float const& DEFAULT_RUN_SPEED();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
