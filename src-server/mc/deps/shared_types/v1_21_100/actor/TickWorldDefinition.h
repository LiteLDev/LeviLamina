#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct TickWorldDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4c11ac;
    ::ll::UntypedStorage<4, 4> mUnk909379;
    ::ll::UntypedStorage<1, 1> mUnkb4ac9b;
    // NOLINTEND

public:
    // prevent constructor by default
    TickWorldDefinition& operator=(TickWorldDefinition const&);
    TickWorldDefinition(TickWorldDefinition const&);
    TickWorldDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_DISTANCE_TO_PLAYERS();

    MCNAPI static bool const& DEFAULT_NEVER_DESPAWN();

    MCNAPI static uint const& DEFAULT_RADIUS();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

};

}
