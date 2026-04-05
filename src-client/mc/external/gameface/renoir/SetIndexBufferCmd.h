#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetIndexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke20410;
    ::ll::UntypedStorage<4, 4> mUnkc7e157;
    // NOLINTEND

public:
    // prevent constructor by default
    SetIndexBufferCmd& operator=(SetIndexBufferCmd const&);
    SetIndexBufferCmd(SetIndexBufferCmd const&);
    SetIndexBufferCmd();
};

} // namespace renoir
