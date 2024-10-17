#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0, typename T1, typename T2>
class Generator {
public:
    // prevent constructor by default
    Generator& operator=(Generator const&);
    Generator(Generator const&);
    Generator();
};

}; // namespace Scripting
