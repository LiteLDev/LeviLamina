#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDimension {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDIMENSION
public:
    IDimension& operator=(IDimension const&) = delete;
    IDimension(IDimension const&)            = delete;
    IDimension()                             = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IDIMENSION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IDimension();
#endif
};
