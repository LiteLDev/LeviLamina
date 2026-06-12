#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetScissorRectCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 4>  mUnkd8dfe9;
    ::ll::UntypedStorage<1, 20> mUnk235728;
    // NOLINTEND

public:
    // prevent constructor by default
    SetScissorRectCmd& operator=(SetScissorRectCmd const&);
    SetScissorRectCmd(SetScissorRectCmd const&);
    SetScissorRectCmd();
};

} // namespace renoir
