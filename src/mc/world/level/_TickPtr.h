#pragma once

#include "mc/_HeaderOutputPredefine.h"

class _TickPtr {

public:
    // prevent constructor by default
    _TickPtr& operator=(_TickPtr const&) = delete;
    _TickPtr(_TickPtr const&)            = delete;
    _TickPtr()                           = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL__TICKPTR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~_TickPtr();
#endif
    // NOLINTEND
};
