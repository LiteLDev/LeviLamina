#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class Writer {

public:
    // prevent constructor by default
    Writer& operator=(Writer const&) = delete;
    Writer(Writer const&)            = delete;
    Writer()                         = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JSON_WRITER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Writer();
#endif
    // NOLINTEND
};

}; // namespace Json
