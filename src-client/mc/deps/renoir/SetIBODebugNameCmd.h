#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetIBODebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8da7e8;
    // NOLINTEND

public:
    // prevent constructor by default
    SetIBODebugNameCmd& operator=(SetIBODebugNameCmd const&);
    SetIBODebugNameCmd(SetIBODebugNameCmd const&);
    SetIBODebugNameCmd();
};

} // namespace renoir
