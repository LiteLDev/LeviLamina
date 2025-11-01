#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template<typename T0>
class SharedLock : public std::shared_lock<T0> {
};

}
