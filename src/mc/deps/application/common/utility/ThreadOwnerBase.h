#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Application {

class ThreadOwnerBase {
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void releaseThread();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Application
