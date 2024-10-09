#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct http_alloc_deleter {
public:
    // prevent constructor by default
    http_alloc_deleter& operator=(http_alloc_deleter const&);
    http_alloc_deleter(http_alloc_deleter const&);
    http_alloc_deleter();
};
