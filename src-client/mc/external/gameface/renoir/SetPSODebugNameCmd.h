#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetPSODebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> mUnk8ef4e5;
    // NOLINTEND

public:
    // prevent constructor by default
    SetPSODebugNameCmd& operator=(SetPSODebugNameCmd const&);
    SetPSODebugNameCmd(SetPSODebugNameCmd const&);
    SetPSODebugNameCmd();
};

} // namespace renoir
