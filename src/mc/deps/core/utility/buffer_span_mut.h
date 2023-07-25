#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class buffer_span_mut {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUFFER_SPAN_MUT
public:
    buffer_span_mut& operator=(buffer_span_mut const&) = delete;
    buffer_span_mut(buffer_span_mut const&)            = delete;
    buffer_span_mut()                                  = delete;
#endif

public:
};
