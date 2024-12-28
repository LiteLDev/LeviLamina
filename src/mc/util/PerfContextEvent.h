#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PerfContextEvent : uint64 {
    UpdateClients    = 0,
    PreFrame         = 0,
    RenderFrame      = 0,
    RunCoroutines    = 0,
    EndFrame         = 0,
    ClientSimTick    = 0,
    ServerSimTick    = 0,
    ActorRender      = 0,
    ActorClientTick  = 0,
    ActorServerTick  = 0,
    AudioUpdate      = 0,
    SortAndPacketize = 0,
    Count            = 0,
};
