#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
// clang-format on

struct ValidateClientPlayerActionSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void registerServerAntiCheatSystems(::EntitySystems& systemRegistry);

    MCAPI static void registerSystems(::EntitySystems& systemRegistry, bool reportTelemetry);
    // NOLINTEND
};
