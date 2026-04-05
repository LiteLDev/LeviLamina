#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetRenderTargetCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk950a89;
    ::ll::UntypedStorage<4, 4> mUnk87a028;
    // NOLINTEND

public:
    // prevent constructor by default
    SetRenderTargetCmd& operator=(SetRenderTargetCmd const&);
    SetRenderTargetCmd(SetRenderTargetCmd const&);
    SetRenderTargetCmd();
};

} // namespace renoir
