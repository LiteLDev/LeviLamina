#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UpdateBoundingBox {

struct SetSizeArgs {
public:
    // prevent constructor by default
    SetSizeArgs& operator=(SetSizeArgs const&);
    SetSizeArgs(SetSizeArgs const&);
    SetSizeArgs();
};

}; // namespace UpdateBoundingBox
