#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class http_stl_allocator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HTTP_STL_ALLOCATOR
public:
    http_stl_allocator& operator=(http_stl_allocator const&) = delete;
    http_stl_allocator(http_stl_allocator const&)            = delete;
    http_stl_allocator()                                     = delete;
#endif

public:
};
