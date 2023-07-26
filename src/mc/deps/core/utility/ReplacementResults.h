#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct ReplacementResults {

public:
    // prevent constructor by default
    ReplacementResults& operator=(ReplacementResults const&) = delete;
    ReplacementResults(ReplacementResults const&)            = delete;
    ReplacementResults()                                     = delete;
};

}; // namespace Util
