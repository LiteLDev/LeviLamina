#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class buffer_span {

public:
    // prevent constructor by default
    buffer_span& operator=(buffer_span const&) = delete;
    buffer_span(buffer_span const&)            = delete;
    buffer_span()                              = delete;
};
