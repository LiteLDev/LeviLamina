#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct BackendResourceCommandOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk18b5de;
    ::ll::UntypedStorage<4, 4> mUnk4833b2;
    // NOLINTEND

public:
    // prevent constructor by default
    BackendResourceCommandOffset& operator=(BackendResourceCommandOffset const&);
    BackendResourceCommandOffset(BackendResourceCommandOffset const&);
    BackendResourceCommandOffset();
};

} // namespace renoir
