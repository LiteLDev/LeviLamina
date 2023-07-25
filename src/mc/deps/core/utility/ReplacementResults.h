#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct ReplacementResults {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UTIL_REPLACEMENTRESULTS
public:
    ReplacementResults& operator=(ReplacementResults const&) = delete;
    ReplacementResults(ReplacementResults const&)            = delete;
    ReplacementResults()                                     = delete;
#endif

public:
};

}; // namespace Util
