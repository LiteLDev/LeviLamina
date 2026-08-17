#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0, typename T1>
class BasicLockbox {
    T1 mMutex;
    T0 mContent;
};

} // namespace Bedrock::Threading
