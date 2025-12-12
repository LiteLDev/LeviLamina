#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ILevel;
// clang-format on

struct PauseChecks {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isActorTickPaused(::Actor const& actor);

    MCNAPI_C static bool isAnimationPaused(::Actor const& actor);

    MCNAPI static bool isMobSpawningPaused(::ILevel const& level);
    // NOLINTEND
};
