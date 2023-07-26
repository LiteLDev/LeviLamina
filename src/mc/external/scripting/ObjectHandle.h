#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ObjectHandle {

public:
    // prevent constructor by default
    ObjectHandle& operator=(ObjectHandle const&) = delete;
    ObjectHandle(ObjectHandle const&)            = delete;
    ObjectHandle()                               = delete;
};

}; // namespace Scripting
