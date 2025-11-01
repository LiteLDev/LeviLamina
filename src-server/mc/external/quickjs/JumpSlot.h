#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JumpSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk65f074;
    ::ll::UntypedStorage<4, 4> mUnke33a88;
    ::ll::UntypedStorage<4, 4> mUnkf30aca;
    ::ll::UntypedStorage<4, 4> mUnke58c1e;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpSlot& operator=(JumpSlot const&);
    JumpSlot(JumpSlot const&);
    JumpSlot();
};
