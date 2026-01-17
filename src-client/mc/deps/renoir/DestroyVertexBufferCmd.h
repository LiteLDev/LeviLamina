#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct DestroyVertexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9d64c5;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyVertexBufferCmd& operator=(DestroyVertexBufferCmd const&);
    DestroyVertexBufferCmd(DestroyVertexBufferCmd const&);
    DestroyVertexBufferCmd();
};

} // namespace renoir
