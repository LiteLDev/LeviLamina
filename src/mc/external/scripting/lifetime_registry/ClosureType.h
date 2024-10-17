#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ClosureType {
public:
    // prevent constructor by default
    ClosureType& operator=(ClosureType const&);
    ClosureType(ClosureType const&);
    ClosureType();
};

}; // namespace Scripting
