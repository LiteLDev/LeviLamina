#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct WorldLoadPerformanceCacheState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1ebe7b;
    ::ll::UntypedStorage<1, 1> mUnkcbc955;
    ::ll::UntypedStorage<1, 1> mUnk2bbe8c;
    ::ll::UntypedStorage<8, 8> mUnk8d8ddf;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldLoadPerformanceCacheState& operator=(WorldLoadPerformanceCacheState const&);
    WorldLoadPerformanceCacheState(WorldLoadPerformanceCacheState const&);
    WorldLoadPerformanceCacheState();
};

} // namespace Bedrock::Resources
