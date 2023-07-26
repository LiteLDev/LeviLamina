#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Error {

public:
    // prevent constructor by default
    Error& operator=(Error const&) = delete;
    Error(Error const&)            = delete;
    Error()                        = delete;
};

}; // namespace Scripting
