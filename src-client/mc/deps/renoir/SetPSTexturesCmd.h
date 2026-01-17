#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetPSTexturesCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkcab4d8;
    ::ll::UntypedStorage<4, 4> mUnk9b77be;
    // NOLINTEND

public:
    // prevent constructor by default
    SetPSTexturesCmd& operator=(SetPSTexturesCmd const&);
    SetPSTexturesCmd(SetPSTexturesCmd const&);
    SetPSTexturesCmd();
};

} // namespace renoir
