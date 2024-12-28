#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

class XXHashState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk353fd1;
    // NOLINTEND

public:
    // prevent constructor by default
    XXHashState& operator=(XXHashState const&);
    XXHashState(XXHashState const&);
    XXHashState();
};

} // namespace Util
