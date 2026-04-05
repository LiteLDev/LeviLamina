#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct DestroyIndexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk192c3a;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyIndexBufferCmd& operator=(DestroyIndexBufferCmd const&);
    DestroyIndexBufferCmd(DestroyIndexBufferCmd const&);
    DestroyIndexBufferCmd();
};

} // namespace renoir
