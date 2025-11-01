#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CircleAroundAnchorGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk15e364;
    ::ll::UntypedStorage<4, 4> mUnke20e00;
    ::ll::UntypedStorage<4, 4> mUnk63d1b8;
    ::ll::UntypedStorage<4, 4> mUnk9fd2f2;
    ::ll::UntypedStorage<4, 4> mUnk2188ef;
    ::ll::UntypedStorage<4, 4> mUnk2b43a1;
    ::ll::UntypedStorage<4, 8> mUnk29214e;
    ::ll::UntypedStorage<4, 8> mUnk3e20f5;
    ::ll::UntypedStorage<4, 8> mUnk442318;
    // NOLINTEND

public:
    // prevent constructor by default
    CircleAroundAnchorGoalDefinition& operator=(CircleAroundAnchorGoalDefinition const&);
    CircleAroundAnchorGoalDefinition(CircleAroundAnchorGoalDefinition const&);
    CircleAroundAnchorGoalDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_RADIUS_CHANGE();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
