#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class StrictExecutionContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRICTEXECUTIONCONTEXT
public:
    StrictExecutionContext& operator=(StrictExecutionContext const&) = delete;
    StrictExecutionContext(StrictExecutionContext const&)            = delete;
    StrictExecutionContext()                                         = delete;
#endif

public:
};
