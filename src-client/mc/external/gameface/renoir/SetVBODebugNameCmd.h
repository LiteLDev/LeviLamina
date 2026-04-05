#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetVBODebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9eb960;
    // NOLINTEND

public:
    // prevent constructor by default
    SetVBODebugNameCmd& operator=(SetVBODebugNameCmd const&);
    SetVBODebugNameCmd(SetVBODebugNameCmd const&);
    SetVBODebugNameCmd();
};

} // namespace renoir
