#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct DestroyPSOCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk92b5f4;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyPSOCmd& operator=(DestroyPSOCmd const&);
    DestroyPSOCmd(DestroyPSOCmd const&);
    DestroyPSOCmd();
};

} // namespace renoir
