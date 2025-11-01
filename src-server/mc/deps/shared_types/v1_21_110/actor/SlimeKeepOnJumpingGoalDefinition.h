#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/versionless/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct SlimeKeepOnJumpingGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk53e1eb;
    // NOLINTEND

public:
    // prevent constructor by default
    SlimeKeepOnJumpingGoalDefinition& operator=(SlimeKeepOnJumpingGoalDefinition const&);
    SlimeKeepOnJumpingGoalDefinition(SlimeKeepOnJumpingGoalDefinition const&);
    SlimeKeepOnJumpingGoalDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_SPEED_MULTIPLIER();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

};

}
