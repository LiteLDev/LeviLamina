#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetDSDebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7f9d38;
    // NOLINTEND

public:
    // prevent constructor by default
    SetDSDebugNameCmd& operator=(SetDSDebugNameCmd const&);
    SetDSDebugNameCmd(SetDSDebugNameCmd const&);
    SetDSDebugNameCmd();
};

} // namespace renoir
