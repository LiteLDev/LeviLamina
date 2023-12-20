#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct NumberRange {
public:
    // prevent constructor by default
    NumberRange& operator=(NumberRange const&);
    NumberRange(NumberRange const&);
    NumberRange();
};

}; // namespace Scripting
