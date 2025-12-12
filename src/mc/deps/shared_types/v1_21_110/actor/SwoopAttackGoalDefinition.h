#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct SwoopAttackGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1e454f;
    ::ll::UntypedStorage<4, 4> mUnk616ec8;
    ::ll::UntypedStorage<4, 8> mUnk1bc3d6;
    // NOLINTEND

public:
    // prevent constructor by default
    SwoopAttackGoalDefinition& operator=(SwoopAttackGoalDefinition const&);
    SwoopAttackGoalDefinition(SwoopAttackGoalDefinition const&);
    SwoopAttackGoalDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_DAMAGE_REACH();

    MCNAPI static float const& DEFAULT_SPEED_MULTIPLIER();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
