#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class Source {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNAPPY_SOURCE
public:
    Source& operator=(Source const&) = delete;
    Source(Source const&)            = delete;
    Source()                         = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SNAPPY_SOURCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Source();
#endif
};

}; // namespace snappy
