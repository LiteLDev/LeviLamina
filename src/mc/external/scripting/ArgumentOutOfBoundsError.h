#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentOutOfBoundsError {
public:
    // prevent constructor by default
    ArgumentOutOfBoundsError& operator=(ArgumentOutOfBoundsError const&);
    ArgumentOutOfBoundsError(ArgumentOutOfBoundsError const&);
    ArgumentOutOfBoundsError();
};

}; // namespace Scripting
