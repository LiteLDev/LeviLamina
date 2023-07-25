#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class buffer_span {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUFFER_SPAN
public:
    buffer_span& operator=(buffer_span const&) = delete;
    buffer_span(buffer_span const&)            = delete;
    buffer_span()                              = delete;
#endif

public:
};
