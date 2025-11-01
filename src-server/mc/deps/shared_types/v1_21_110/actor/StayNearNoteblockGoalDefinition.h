#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct StayNearNoteblockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdda1f4;
    ::ll::UntypedStorage<4, 4> mUnk825050;
    ::ll::UntypedStorage<4, 4> mUnk7eba68;
    ::ll::UntypedStorage<4, 4> mUnkfd3d79;
    // NOLINTEND

public:
    // prevent constructor by default
    StayNearNoteblockGoalDefinition& operator=(StayNearNoteblockGoalDefinition const&);
    StayNearNoteblockGoalDefinition(StayNearNoteblockGoalDefinition const&);
    StayNearNoteblockGoalDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DEFAULT_LISTEN_TIME();

    MCNAPI static float const& DEFAULT_SPEED();

    MCNAPI static float const& DEFAULT_START_DISTANCE();

    MCNAPI static float const& DEFAULT_STOP_DISTANCE();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
