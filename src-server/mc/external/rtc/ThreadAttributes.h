#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct ThreadAttributes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5a2101;
    // NOLINTEND

public:
    // prevent constructor by default
    ThreadAttributes& operator=(ThreadAttributes const&);
    ThreadAttributes(ThreadAttributes const&);
    ThreadAttributes();

};

}
