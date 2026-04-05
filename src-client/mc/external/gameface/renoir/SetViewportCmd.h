#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetViewportCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk277331;
    // NOLINTEND

public:
    // prevent constructor by default
    SetViewportCmd& operator=(SetViewportCmd const&);
    SetViewportCmd(SetViewportCmd const&);
    SetViewportCmd();
};

} // namespace renoir
