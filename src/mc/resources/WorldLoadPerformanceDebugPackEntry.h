#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct WorldLoadPerformanceDebugPackEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7aa087;
    ::ll::UntypedStorage<8, 32> mUnk54f6f7;
    ::ll::UntypedStorage<8, 32> mUnk223c69;
    ::ll::UntypedStorage<8, 32> mUnk2bba87;
    ::ll::UntypedStorage<8, 32> mUnk684ac6;
    ::ll::UntypedStorage<4, 4>  mUnk44a9c7;
    ::ll::UntypedStorage<8, 8>  mUnkd12464;
    ::ll::UntypedStorage<4, 4>  mUnka64e93;
    ::ll::UntypedStorage<1, 1>  mUnk5d97a8;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldLoadPerformanceDebugPackEntry& operator=(WorldLoadPerformanceDebugPackEntry const&);
    WorldLoadPerformanceDebugPackEntry(WorldLoadPerformanceDebugPackEntry const&);
    WorldLoadPerformanceDebugPackEntry();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~WorldLoadPerformanceDebugPackEntry();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Resources
