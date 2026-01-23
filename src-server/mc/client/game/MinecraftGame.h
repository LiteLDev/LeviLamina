#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MinecraftGame {
public:
    // MinecraftGame inner types declare
    // clang-format off
    struct InitContext;
    struct FrameGapImpl;
    // clang-format on

    // MinecraftGame inner types define
    enum class SuspendState : int {};

    enum class DeviceLostState : int {};

    enum class SurfaceState : int {};

    enum class WorkList : uint64 {};

    struct InitContext {};

    struct FrameGapImpl {};
};
