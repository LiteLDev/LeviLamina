#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class Source {

public:
    // prevent constructor by default
    Source& operator=(Source const&) = delete;
    Source(Source const&)            = delete;
    Source()                         = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SNAPPY_SOURCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Source(); // NOLINT
#endif
};

}; // namespace snappy
