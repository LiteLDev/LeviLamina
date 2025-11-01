#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Buffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk971192;
    ::ll::UntypedStorage<4, 4> mUnkf25ebd;
    ::ll::UntypedStorage<8, 32> mUnkbfda20;
    ::ll::UntypedStorage<4, 4> mUnk916439;
    // NOLINTEND

public:
    // prevent constructor by default
    Buffer& operator=(Buffer const&);
    Buffer(Buffer const&);
    Buffer();

};

}
