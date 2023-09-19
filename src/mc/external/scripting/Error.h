#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Error {
public:
    // prevent constructor by default
    Error& operator=(Error const&);
    Error(Error const&);
    Error();
};

}; // namespace Scripting
