#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0, typename T1>
class GeneratorIterator {
public:
    // prevent constructor by default
    GeneratorIterator& operator=(GeneratorIterator const&);
    GeneratorIterator(GeneratorIterator const&);
    GeneratorIterator();
};

}; // namespace Scripting
