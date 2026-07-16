#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

struct ExpDigits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4d0904;
    ::ll::UntypedStorage<1, 6> mUnkb20ab1;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpDigits& operator=(ExpDigits const&);
    ExpDigits(ExpDigits const&);
    ExpDigits();
};

} // namespace absl
