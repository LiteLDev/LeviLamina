#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct BufferDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6ae714;
    ::ll::UntypedStorage<4, 4> mUnkf530c9;
    // NOLINTEND

public:
    // prevent constructor by default
    BufferDescription& operator=(BufferDescription const&);
    BufferDescription(BufferDescription const&);
    BufferDescription();
};

} // namespace renoir
