#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ObjectHandle {
public:
    // prevent constructor by default
    ObjectHandle& operator=(ObjectHandle const&);
    ObjectHandle(ObjectHandle const&);
    ObjectHandle();
};

}; // namespace Scripting
