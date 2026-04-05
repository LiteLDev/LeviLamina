#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetPSConstantBuffersCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkeaf3f5;
    ::ll::UntypedStorage<4, 4> mUnk69de26;
    // NOLINTEND

public:
    // prevent constructor by default
    SetPSConstantBuffersCmd& operator=(SetPSConstantBuffersCmd const&);
    SetPSConstantBuffersCmd(SetPSConstantBuffersCmd const&);
    SetPSConstantBuffersCmd();
};

} // namespace renoir
