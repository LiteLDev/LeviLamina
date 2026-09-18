#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct WorldLoadPerformanceCpuData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk95ea1e;
    ::ll::UntypedStorage<8, 8> mUnk8c538a;
    ::ll::UntypedStorage<4, 4> mUnka93d21;
    ::ll::UntypedStorage<8, 8> mUnke7acb0;
    ::ll::UntypedStorage<4, 4> mUnk29bbc9;
    ::ll::UntypedStorage<4, 4> mUnkdb7de4;
    ::ll::UntypedStorage<4, 4> mUnkd757ef;
    ::ll::UntypedStorage<8, 8> mUnk75ff1e;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldLoadPerformanceCpuData& operator=(WorldLoadPerformanceCpuData const&);
    WorldLoadPerformanceCpuData(WorldLoadPerformanceCpuData const&);
    WorldLoadPerformanceCpuData();
};

} // namespace Bedrock::Resources
