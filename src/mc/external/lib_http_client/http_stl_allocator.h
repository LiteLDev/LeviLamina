#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class http_stl_allocator {
public:
    // prevent constructor by default
    http_stl_allocator& operator=(http_stl_allocator const&);
    http_stl_allocator(http_stl_allocator const&);
    http_stl_allocator();
};
