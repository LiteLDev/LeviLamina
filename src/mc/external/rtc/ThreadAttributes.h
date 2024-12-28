#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct ThreadAttributes {
public:
    // prevent constructor by default
    ThreadAttributes& operator=(ThreadAttributes const&);
    ThreadAttributes(ThreadAttributes const&);
    ThreadAttributes();
};

} // namespace rtc
