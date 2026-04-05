#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetVertexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkac2450;
    // NOLINTEND

public:
    // prevent constructor by default
    SetVertexBufferCmd& operator=(SetVertexBufferCmd const&);
    SetVertexBufferCmd(SetVertexBufferCmd const&);
    SetVertexBufferCmd();
};

} // namespace renoir
