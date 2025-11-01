#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template<typename T0>
class UniqueLock : std::unique_lock<T0> {
};

}
