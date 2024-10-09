#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct GeneratorIteratorType {
public:
    // prevent constructor by default
    GeneratorIteratorType& operator=(GeneratorIteratorType const&);
    GeneratorIteratorType(GeneratorIteratorType const&);
    GeneratorIteratorType();
};

}; // namespace Scripting
