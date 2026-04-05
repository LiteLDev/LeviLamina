#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetPSODebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8ef4e5;
    // NOLINTEND

public:
    // prevent constructor by default
    SetPSODebugNameCmd& operator=(SetPSODebugNameCmd const&);
    SetPSODebugNameCmd(SetPSODebugNameCmd const&);
    SetPSODebugNameCmd();
};

} // namespace renoir
