#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class Writer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JSON_WRITER
public:
    Writer& operator=(Writer const&) = delete;
    Writer(Writer const&)            = delete;
    Writer()                         = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JSON_WRITER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Writer();
#endif
};

}; // namespace Json
