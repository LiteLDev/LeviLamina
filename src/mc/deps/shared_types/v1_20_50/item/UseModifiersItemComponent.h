#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct UseModifiersItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                  mUseDuration;
    ::ll::TypedStorage<1, 1, bool>                   mEmitVibrations;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mMovementModifier;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool const& DEFAULT_EMIT_VIBRATIONS();

    MCAPI static float const& DEFAULT_USE_DURATION();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
