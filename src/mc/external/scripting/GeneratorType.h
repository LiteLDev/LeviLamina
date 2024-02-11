#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct GeneratorType {
public:
    // prevent constructor by default
    GeneratorType& operator=(GeneratorType const&);
    GeneratorType(GeneratorType const&);
    GeneratorType();
};

}; // namespace Scripting
