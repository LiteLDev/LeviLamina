#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0, typename T1>
class SharedLockbox {
public:
    // prevent constructor by default
    SharedLockbox& operator=(SharedLockbox const&);
    SharedLockbox(SharedLockbox const&);
    SharedLockbox();
};

} // namespace Bedrock::Threading
