#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct CreateVertexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbc3547;
    ::ll::UntypedStorage<4, 4> mUnkb239e5;
    ::ll::UntypedStorage<4, 4> mUnk6e3f68;
    ::ll::UntypedStorage<1, 1> mUnka11e25;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateVertexBufferCmd& operator=(CreateVertexBufferCmd const&);
    CreateVertexBufferCmd(CreateVertexBufferCmd const&);
    CreateVertexBufferCmd();
};

} // namespace renoir
