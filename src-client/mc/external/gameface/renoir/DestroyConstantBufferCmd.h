#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct DestroyConstantBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1b8395;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyConstantBufferCmd& operator=(DestroyConstantBufferCmd const&);
    DestroyConstantBufferCmd(DestroyConstantBufferCmd const&);
    DestroyConstantBufferCmd();
};

} // namespace renoir
