#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetViewportCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 0> mUnk277331;
    // NOLINTEND

public:
    // prevent constructor by default
    SetViewportCmd& operator=(SetViewportCmd const&);
    SetViewportCmd(SetViewportCmd const&);
    SetViewportCmd();
};

} // namespace renoir
