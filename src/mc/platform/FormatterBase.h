#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct FormatterBase {
public:
    // prevent constructor by default
    FormatterBase& operator=(FormatterBase const&);
    FormatterBase(FormatterBase const&);
    FormatterBase();
};

} // namespace Bedrock
