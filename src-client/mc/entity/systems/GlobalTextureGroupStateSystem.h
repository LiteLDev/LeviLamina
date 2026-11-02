#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class GlobalTextureGroupStateSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isReloading(::EntityRegistry& registry);

    MCNAPI static void setIsReloading(::EntityRegistry& registry, bool isReloading);
    // NOLINTEND
};
