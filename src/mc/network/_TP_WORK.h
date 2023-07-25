#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct _TP_WORK {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION__TP_WORK
public:
    _TP_WORK& operator=(_TP_WORK const&) = delete;
    _TP_WORK(_TP_WORK const&)            = delete;
    _TP_WORK()                           = delete;
#endif

public:
};
