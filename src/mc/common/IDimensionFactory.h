#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDimensionFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDIMENSIONFACTORY
public:
    IDimensionFactory& operator=(IDimensionFactory const&) = delete;
    IDimensionFactory(IDimensionFactory const&)            = delete;
    IDimensionFactory()                                    = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IDIMENSIONFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IDimensionFactory();
#endif
};
