#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct PromiseType {
public:
    // prevent constructor by default
    PromiseType& operator=(PromiseType const&);
    PromiseType(PromiseType const&);
    PromiseType();
};

}; // namespace Scripting
