#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PerfContextEvent : uint64 {
    UpdateClients = 0,
    PreFrame = 1,
    RenderFrame = 2,
    RunCoroutines = 3,
    EndFrame = 4,
    ClientSimTick = 5,
    ServerSimTick = 6,
    ActorRender = 7,
    ActorClientTick = 8,
    ActorServerTick = 9,
    AudioUpdate = 10,
    SortAndPacketize = 11,
    Count = 12,
};
