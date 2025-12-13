#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecraftGame {
public:
    // MinecraftGame inner types declare
    // clang-format off
    struct InitContext;
    // clang-format on

    // MinecraftGame inner types define
    enum class DeviceLostState : int {};

    enum class SurfaceState : int {};

    enum class SuspendState : int {};

    enum class WorkList : uint64 {};

    struct InitContext {};
};
