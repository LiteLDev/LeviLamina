#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct RuntimeStats {
public:
    // prevent constructor by default
    RuntimeStats& operator=(RuntimeStats const&);
    RuntimeStats(RuntimeStats const&);
    RuntimeStats();
};

}; // namespace Scripting
