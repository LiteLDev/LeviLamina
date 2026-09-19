#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct WorldLoadPerformanceIoPhaseStat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9b8dbc;
    ::ll::UntypedStorage<8, 8> mUnkcb21fa;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldLoadPerformanceIoPhaseStat& operator=(WorldLoadPerformanceIoPhaseStat const&);
    WorldLoadPerformanceIoPhaseStat(WorldLoadPerformanceIoPhaseStat const&);
    WorldLoadPerformanceIoPhaseStat();
};

} // namespace Bedrock::Resources
