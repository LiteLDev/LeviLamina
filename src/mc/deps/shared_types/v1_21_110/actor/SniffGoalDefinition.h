#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct SniffGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk119287;
    ::ll::UntypedStorage<4, 4> mUnk638e20;
    ::ll::UntypedStorage<4, 4> mUnkb5b9e9;
    ::ll::UntypedStorage<4, 4> mUnk9d1b85;
    ::ll::UntypedStorage<4, 8> mUnkbab143;
    // NOLINTEND

public:
    // prevent constructor by default
    SniffGoalDefinition& operator=(SniffGoalDefinition const&);
    SniffGoalDefinition(SniffGoalDefinition const&);
    SniffGoalDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_DURATION();

    MCNAPI static float const& DEFAULT_SNIFFING_RADIUS();

    MCNAPI static float const& DEFAULT_SUSPICION_RADIUS_HORIZONTAL();

    MCNAPI static float const& DEFAULT_SUSPICION_RADIUS_VERTICAL();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
