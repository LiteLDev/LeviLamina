#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct BackendCommandOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6c003b;
    ::ll::UntypedStorage<4, 4> mUnkd99364;
    // NOLINTEND

public:
    // prevent constructor by default
    BackendCommandOffset& operator=(BackendCommandOffset const&);
    BackendCommandOffset(BackendCommandOffset const&);
    BackendCommandOffset();
};

} // namespace renoir
