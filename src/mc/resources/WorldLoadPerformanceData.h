#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct WorldLoadPerformanceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkc2ed8f;
    ::ll::UntypedStorage<8, 32>  mUnk85b552;
    ::ll::UntypedStorage<1, 1>   mUnk4d6924;
    ::ll::UntypedStorage<1, 1>   mUnka53b7a;
    ::ll::UntypedStorage<8, 8>   mUnk210828;
    ::ll::UntypedStorage<2, 2>   mUnk19e672;
    ::ll::UntypedStorage<8, 32>  mUnk598c89;
    ::ll::UntypedStorage<1, 1>   mUnk4acc95;
    ::ll::UntypedStorage<4, 4>   mUnk1e62cc;
    ::ll::UntypedStorage<8, 24>  mUnk57d498;
    ::ll::UntypedStorage<8, 24>  mUnk840903;
    ::ll::UntypedStorage<8, 24>  mUnk5ddb11;
    ::ll::UntypedStorage<8, 24>  mUnk68038e;
    ::ll::UntypedStorage<8, 80>  mUnk53934f;
    ::ll::UntypedStorage<8, 56>  mUnkd42fb5;
    ::ll::UntypedStorage<8, 168> mUnkbc201e;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldLoadPerformanceData& operator=(WorldLoadPerformanceData const&);
    WorldLoadPerformanceData(WorldLoadPerformanceData const&);
    WorldLoadPerformanceData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~WorldLoadPerformanceData();
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
