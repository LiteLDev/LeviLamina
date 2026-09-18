#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct WorldLoadPerformanceIoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7f022e;
    ::ll::UntypedStorage<4, 4>  mUnkfa6c73;
    ::ll::UntypedStorage<8, 8>  mUnkf3ddb9;
    ::ll::UntypedStorage<4, 4>  mUnk92654c;
    ::ll::UntypedStorage<8, 48> mUnk7e1da0;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldLoadPerformanceIoData& operator=(WorldLoadPerformanceIoData const&);
    WorldLoadPerformanceIoData(WorldLoadPerformanceIoData const&);
    WorldLoadPerformanceIoData();
};

} // namespace Bedrock::Resources
