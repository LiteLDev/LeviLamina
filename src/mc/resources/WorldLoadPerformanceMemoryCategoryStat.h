#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct WorldLoadPerformanceMemoryCategoryStat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbb870c;
    ::ll::UntypedStorage<8, 8> mUnkda6534;
    ::ll::UntypedStorage<8, 8> mUnke06b7d;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldLoadPerformanceMemoryCategoryStat& operator=(WorldLoadPerformanceMemoryCategoryStat const&);
    WorldLoadPerformanceMemoryCategoryStat(WorldLoadPerformanceMemoryCategoryStat const&);
    WorldLoadPerformanceMemoryCategoryStat();
};

} // namespace Bedrock::Resources
