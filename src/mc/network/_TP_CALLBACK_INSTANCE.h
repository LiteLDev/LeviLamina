#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct _TP_CALLBACK_INSTANCE {
public:
    // prevent constructor by default
    _TP_CALLBACK_INSTANCE& operator=(_TP_CALLBACK_INSTANCE const&);
    _TP_CALLBACK_INSTANCE(_TP_CALLBACK_INSTANCE const&);
    _TP_CALLBACK_INSTANCE();
};
