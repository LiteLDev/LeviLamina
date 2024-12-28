#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ILevel;
// clang-format on

struct PauseChecks {
public:
    // prevent constructor by default
    PauseChecks& operator=(PauseChecks const&);
    PauseChecks(PauseChecks const&);
    PauseChecks();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isActorTickPaused(::Actor const& actor);

    MCAPI static bool isAnimationPaused(::Actor const& actor);

    MCAPI static bool isMobSpawningPaused(::ILevel const& level);
    // NOLINTEND
};
