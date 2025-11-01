#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/versionless/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct SlimeRandomDirectionGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf016da;
    ::ll::UntypedStorage<4, 4> mUnk56fb64;
    ::ll::UntypedStorage<4, 4> mUnk49771c;
    // NOLINTEND

public:
    // prevent constructor by default
    SlimeRandomDirectionGoalDefinition& operator=(SlimeRandomDirectionGoalDefinition const&);
    SlimeRandomDirectionGoalDefinition(SlimeRandomDirectionGoalDefinition const&);
    SlimeRandomDirectionGoalDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DEFAULT_ADD_RANDOM_TIME_RANGE();

    MCNAPI static float const& DEFAULT_MIN_CHANGE_DIRECTION_TIME();

    MCNAPI static int const& DEFAULT_TURN_RANGE();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

};

}
