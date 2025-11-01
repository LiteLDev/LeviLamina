#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class SingleThreadedLock {
public:
    constexpr void lock() {}
    constexpr void unlock() {}
};

}
