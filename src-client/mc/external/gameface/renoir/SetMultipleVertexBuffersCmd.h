#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetMultipleVertexBuffersCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke148e3;
    ::ll::UntypedStorage<4, 4> mUnk2d9ed4;
    // NOLINTEND

public:
    // prevent constructor by default
    SetMultipleVertexBuffersCmd& operator=(SetMultipleVertexBuffersCmd const&);
    SetMultipleVertexBuffersCmd(SetMultipleVertexBuffersCmd const&);
    SetMultipleVertexBuffersCmd();
};

} // namespace renoir
