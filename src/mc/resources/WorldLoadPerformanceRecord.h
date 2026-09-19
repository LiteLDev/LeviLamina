#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

class WorldLoadPerformanceRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 528> mUnk64c3f0;
    ::ll::UntypedStorage<1, 1>   mUnkee41ee;
    ::ll::UntypedStorage<8, 24>  mUnkf96940;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldLoadPerformanceRecord& operator=(WorldLoadPerformanceRecord const&);
    WorldLoadPerformanceRecord(WorldLoadPerformanceRecord const&);
    WorldLoadPerformanceRecord();
};

} // namespace Bedrock::Resources
