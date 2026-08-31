#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/threading/BasicLockbox.h"

namespace Bedrock::Threading {

template <typename T0, typename T1>
class SharedLockbox : public BasicLockbox<T0, T1> {};

} // namespace Bedrock::Threading
