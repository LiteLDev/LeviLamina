#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/versionless/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct SwimWanderGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk956701;
    ::ll::UntypedStorage<4, 4> mUnk719230;
    ::ll::UntypedStorage<4, 4> mUnk7892c0;
    ::ll::UntypedStorage<4, 4> mUnk21822e;
    // NOLINTEND

public:
    // prevent constructor by default
    SwimWanderGoalDefinition& operator=(SwimWanderGoalDefinition const&);
    SwimWanderGoalDefinition(SwimWanderGoalDefinition const&);
    SwimWanderGoalDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_INTERVAL();

    MCNAPI static float const& DEFAULT_LOOK_AHEAD();

    MCNAPI static float const& DEFAULT_SPEED_MULTIPLIER();

    MCNAPI static float const& DEFAULT_WANDER_TIME();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

};

}
