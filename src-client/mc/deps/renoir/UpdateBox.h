#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct UpdateBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd1a3a9;
    ::ll::UntypedStorage<4, 4> mUnk39063f;
    ::ll::UntypedStorage<4, 4> mUnk73a820;
    ::ll::UntypedStorage<4, 4> mUnk5b61af;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateBox& operator=(UpdateBox const&);
    UpdateBox(UpdateBox const&);
    UpdateBox();
};

} // namespace renoir
