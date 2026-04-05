#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetPSSamplersCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk307a1f;
    ::ll::UntypedStorage<4, 4> mUnkc7fc72;
    // NOLINTEND

public:
    // prevent constructor by default
    SetPSSamplersCmd& operator=(SetPSSamplersCmd const&);
    SetPSSamplersCmd(SetPSSamplersCmd const&);
    SetPSSamplersCmd();
};

} // namespace renoir
