#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template<typename T0>
class LockGuard : std::lock_guard<T0> {
};

}
