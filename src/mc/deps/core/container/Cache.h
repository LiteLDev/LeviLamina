#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

template <typename T0, typename T1, typename T2>
class Cache {
public:
    // prevent constructor by default
    Cache& operator=(Cache const&);
    Cache(Cache const&);
    Cache();
};

} // namespace Core
