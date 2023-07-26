#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDimension {

public:
    // prevent constructor by default
    IDimension& operator=(IDimension const&) = delete;
    IDimension(IDimension const&)            = delete;
    IDimension()                             = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IDIMENSION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IDimension(); // NOLINT
#endif
};
