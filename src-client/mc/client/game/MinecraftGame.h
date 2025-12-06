#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecraftGame {
public:
    // MinecraftGame inner types declare
    // clang-format off
    struct InitContext;
    // clang-format on

    // MinecraftGame inner types define
    enum class DeviceLostState : uint {};

    enum class SurfaceState : uint {};

    enum class SuspendState : uint {};

    enum class WorkList : uint {};

    struct InitContext {};
};
