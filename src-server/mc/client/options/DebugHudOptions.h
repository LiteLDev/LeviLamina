#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DebugHudOptions : int {
    Off = 0,
    Basic = 1,
    ImGui = 2,
    WorkerThreads = 3,
    RenderChunks = 4,
    Profiler = 5,
    TextureMemory = 6,
    ImageMemory = 7,
    PerImageMemory = 8,
    BufferMemory = 9,
    MaterialMemory = 10,
    Camera = 11,
    Audio = 12,
    ClientNetwork = 13,
    ServerNetwork = 14,
    LockContention = 15,
    OreUI = 16,
    CacheStorageUsage = 17,
    Nothing = 18,
    Count = 19,
};
