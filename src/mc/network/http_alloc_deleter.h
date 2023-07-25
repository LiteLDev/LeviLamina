#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct http_alloc_deleter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HTTP_ALLOC_DELETER
public:
    http_alloc_deleter& operator=(http_alloc_deleter const&) = delete;
    http_alloc_deleter(http_alloc_deleter const&)            = delete;
    http_alloc_deleter()                                     = delete;
#endif

public:
};
