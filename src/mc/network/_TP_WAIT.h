#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct _TP_WAIT {
public:
    // prevent constructor by default
    _TP_WAIT& operator=(_TP_WAIT const&);
    _TP_WAIT(_TP_WAIT const&);
    _TP_WAIT();
};
