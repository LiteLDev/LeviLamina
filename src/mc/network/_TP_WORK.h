#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct _TP_WORK {
public:
    // prevent constructor by default
    _TP_WORK& operator=(_TP_WORK const&);
    _TP_WORK(_TP_WORK const&);
    _TP_WORK();
};
