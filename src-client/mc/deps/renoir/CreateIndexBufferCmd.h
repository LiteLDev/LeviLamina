#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct CreateIndexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkfb6a5d;
    ::ll::UntypedStorage<4, 4> mUnke61e9f;
    ::ll::UntypedStorage<4, 4> mUnkb0d6cb;
    ::ll::UntypedStorage<1, 1> mUnk9780bd;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateIndexBufferCmd& operator=(CreateIndexBufferCmd const&);
    CreateIndexBufferCmd(CreateIndexBufferCmd const&);
    CreateIndexBufferCmd();
};

} // namespace renoir
