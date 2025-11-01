#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

struct RenderMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3593dc;
    ::ll::UntypedStorage<4, 8> mUnkb946c3;
    ::ll::UntypedStorage<1, 1> mUnkee182d;
    ::ll::UntypedStorage<8, 48> mUnk6891c9;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderMetadata& operator=(RenderMetadata const&);
    RenderMetadata(RenderMetadata const&);
    RenderMetadata();

};

}
