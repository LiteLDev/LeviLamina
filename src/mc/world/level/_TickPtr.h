#pragma once

#include "mc/_HeaderOutputPredefine.h"

class _TickPtr {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION__TICKPTR
public:
    _TickPtr& operator=(_TickPtr const&) = delete;
    _TickPtr(_TickPtr const&)            = delete;
    _TickPtr()                           = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL__TICKPTR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~_TickPtr();
#endif
};
