#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct UpdateConstantBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkcb0a0e;
    ::ll::UntypedStorage<4, 4> mUnk60014f;
    ::ll::UntypedStorage<4, 4> mUnk274454;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateConstantBufferCmd& operator=(UpdateConstantBufferCmd const&);
    UpdateConstantBufferCmd(UpdateConstantBufferCmd const&);
    UpdateConstantBufferCmd();
};

} // namespace renoir
