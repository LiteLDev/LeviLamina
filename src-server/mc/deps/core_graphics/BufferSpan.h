#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

struct BufferSpan {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkd24b49;
    ::ll::UntypedStorage<8, 8> mUnk4f0197;
    // NOLINTEND

public:
    // prevent constructor by default
    BufferSpan& operator=(BufferSpan const&);
    BufferSpan(BufferSpan const&);
    BufferSpan();

};

}
