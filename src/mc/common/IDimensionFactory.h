#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDimensionFactory {

public:
    // prevent constructor by default
    IDimensionFactory& operator=(IDimensionFactory const&) = delete;
    IDimensionFactory(IDimensionFactory const&)            = delete;
    IDimensionFactory()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IDIMENSIONFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IDimensionFactory(); // NOLINT
#endif
};
