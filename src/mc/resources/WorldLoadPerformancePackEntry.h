#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct WorldLoadPerformancePackEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk16f3f7;
    ::ll::UntypedStorage<8, 32> mUnka987f1;
    ::ll::UntypedStorage<8, 32> mUnk4ad2cc;
    ::ll::UntypedStorage<8, 32> mUnk37a203;
    ::ll::UntypedStorage<8, 32> mUnkf44b04;
    ::ll::UntypedStorage<4, 4>  mUnk922401;
    ::ll::UntypedStorage<8, 8>  mUnk87358d;
    ::ll::UntypedStorage<4, 4>  mUnkf71f5d;
    ::ll::UntypedStorage<8, 8>  mUnk48eb78;
    ::ll::UntypedStorage<8, 64> mUnkf8ab43;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldLoadPerformancePackEntry& operator=(WorldLoadPerformancePackEntry const&);
    WorldLoadPerformancePackEntry(WorldLoadPerformancePackEntry const&);
    WorldLoadPerformancePackEntry();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~WorldLoadPerformancePackEntry();
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
