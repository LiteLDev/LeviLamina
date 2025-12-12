#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct SonicBoomGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk697ff2;
    ::ll::UntypedStorage<4, 4>  mUnk68de5d;
    ::ll::UntypedStorage<4, 4>  mUnk77bf91;
    ::ll::UntypedStorage<4, 4>  mUnkc40095;
    ::ll::UntypedStorage<4, 4>  mUnke6de65;
    ::ll::UntypedStorage<4, 4>  mUnk5e8180;
    ::ll::UntypedStorage<4, 4>  mUnkf5d750;
    ::ll::UntypedStorage<4, 4>  mUnke9af09;
    ::ll::UntypedStorage<4, 4>  mUnkc7401f;
    ::ll::UntypedStorage<4, 4>  mUnk274360;
    ::ll::UntypedStorage<8, 32> mUnkf8cad9;
    ::ll::UntypedStorage<8, 32> mUnkfb7d23;
    // NOLINTEND

public:
    // prevent constructor by default
    SonicBoomGoalDefinition& operator=(SonicBoomGoalDefinition const&);
    SonicBoomGoalDefinition(SonicBoomGoalDefinition const&);
    SonicBoomGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_110::SonicBoomGoalDefinition&
    operator=(::SharedTypes::v1_21_110::SonicBoomGoalDefinition&&);

    MCNAPI ~SonicBoomGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_ATTACK_COOLDOWN();

    MCNAPI static float const& DEFAULT_ATTACK_DAMAGE();

    MCNAPI static float const& DEFAULT_ATTACK_RANGE_HORIZONTAL();

    MCNAPI static float const& DEFAULT_ATTACK_RANGE_VERTICAL();

    MCNAPI static float const& DEFAULT_DURATION();

    MCNAPI static float const& DEFAULT_DURATION_UNTIL_ATTACK_SOUND();

    MCNAPI static float const& DEFAULT_KNOCKBACK_HEIGHT_CAP();

    MCNAPI static float const& DEFAULT_KNOCKBACK_HORIZONTAL_STRENGTH();

    MCNAPI static float const& DEFAULT_KNOCKBACK_VERTICAL_STRENGTH();

    MCNAPI static float const& DEFAULT_SPEED_MULTIPLIER();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
