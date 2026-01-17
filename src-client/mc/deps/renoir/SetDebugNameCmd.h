#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetDebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk62790a;
    // NOLINTEND

public:
    // prevent constructor by default
    SetDebugNameCmd& operator=(SetDebugNameCmd const&);
    SetDebugNameCmd(SetDebugNameCmd const&);
    SetDebugNameCmd();
};

} // namespace renoir
