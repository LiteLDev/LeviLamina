#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ObjectHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk94fcd0;
    ::ll::UntypedStorage<1, 1> mUnka0f03d;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectHandle& operator=(ObjectHandle const&);
    ObjectHandle(ObjectHandle const&);
    ObjectHandle();

};

}
