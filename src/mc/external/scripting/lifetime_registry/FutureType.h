#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct FutureType {
public:
    // prevent constructor by default
    FutureType& operator=(FutureType const&);
    FutureType(FutureType const&);
    FutureType();
};

}; // namespace Scripting
