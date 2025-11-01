#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/versionless/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct SwimIdleGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk66a567;
    ::ll::UntypedStorage<4, 4> mUnk54b556;
    // NOLINTEND

public:
    // prevent constructor by default
    SwimIdleGoalDefinition& operator=(SwimIdleGoalDefinition const&);
    SwimIdleGoalDefinition(SwimIdleGoalDefinition const&);
    SwimIdleGoalDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_IDLE_TIME();

    MCNAPI static float const& DEFAULT_SUCCESS_RATE();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

};

}
