#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ssl_ctx_st {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SSL_CTX_ST
public:
    ssl_ctx_st& operator=(ssl_ctx_st const&) = delete;
    ssl_ctx_st(ssl_ctx_st const&)            = delete;
    ssl_ctx_st()                             = delete;
#endif

public:
};
