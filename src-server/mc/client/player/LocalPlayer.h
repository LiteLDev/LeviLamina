#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LocalPlayer {
public:
    // LocalPlayer inner types declare
    // clang-format off
    class RegionListener;
    class EmoteExpediateData;
    class FellFromWorldHeightAchievementTracker;
    class UndergroundTelemetryHeuristic;
    struct ContainerCloseInfo;
    // clang-format on

    // LocalPlayer inner types define
    class RegionListener {};

    class EmoteExpediateData {};

    class FellFromWorldHeightAchievementTracker {
    public:
        // FellFromWorldHeightAchievementTracker inner types define
        enum class FallState : uchar {};
    };

    class UndergroundTelemetryHeuristic {};

    struct ContainerCloseInfo {};
};
