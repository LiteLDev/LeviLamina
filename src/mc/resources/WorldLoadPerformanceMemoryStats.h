#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct WorldLoadPerformanceMemoryStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkbad329;
    ::ll::UntypedStorage<8, 8>   mUnkc7b0a0;
    ::ll::UntypedStorage<8, 120> mUnkbd12dd;
    ::ll::UntypedStorage<8, 8>   mUnkd144f3;
    ::ll::UntypedStorage<8, 8>   mUnk4fc4d9;
    ::ll::UntypedStorage<8, 8>   mUnk26ba5a;
    ::ll::UntypedStorage<1, 1>   mUnka1a5b1;
    ::ll::UntypedStorage<1, 1>   mUnk2be7bb;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldLoadPerformanceMemoryStats& operator=(WorldLoadPerformanceMemoryStats const&);
    WorldLoadPerformanceMemoryStats(WorldLoadPerformanceMemoryStats const&);
    WorldLoadPerformanceMemoryStats();
};

} // namespace Bedrock::Resources
