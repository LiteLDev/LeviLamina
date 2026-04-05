#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct CrashManagerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf5faf2;
    ::ll::UntypedStorage<8, 16> mUnk9dd2c9;
    ::ll::UntypedStorage<1, 1>  mUnk48f7d1;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashManagerConfig& operator=(CrashManagerConfig const&);
    CrashManagerConfig(CrashManagerConfig const&);
    CrashManagerConfig();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~CrashManagerConfig();
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

} // namespace Bedrock
