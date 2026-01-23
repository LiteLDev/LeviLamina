#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LocalPlayer {
public:
    // LocalPlayer inner types declare
    // clang-format off
    struct ContainerCloseInfo;
    struct EmoteExpediateData;
    struct FellFromWorldHeightAchievementTracker;
    struct RegionListener;
    struct UndergroundTelemetryHeuristic;
    // clang-format on

    // LocalPlayer inner types define
    struct ContainerCloseInfo {};

    struct EmoteExpediateData {};

    struct FellFromWorldHeightAchievementTracker {
    public:
        // FellFromWorldHeightAchievementTracker inner types define
        enum class FallState : uchar {};
    };

    struct RegionListener {};

    struct UndergroundTelemetryHeuristic {};
};
