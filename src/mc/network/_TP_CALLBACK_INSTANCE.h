#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct _TP_CALLBACK_INSTANCE {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION__TP_CALLBACK_INSTANCE
public:
    _TP_CALLBACK_INSTANCE& operator=(_TP_CALLBACK_INSTANCE const&) = delete;
    _TP_CALLBACK_INSTANCE(_TP_CALLBACK_INSTANCE const&)            = delete;
    _TP_CALLBACK_INSTANCE()                                        = delete;
#endif

public:
};
