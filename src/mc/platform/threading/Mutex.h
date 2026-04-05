#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/ZeroInit.h"

namespace Bedrock::Threading {

class Mutex : public ::Bedrock::Threading::ZeroInit, public ::std::mutex {
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI Mutex();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Threading
