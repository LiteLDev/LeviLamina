#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ssl_ctx_st {
public:
    // prevent constructor by default
    ssl_ctx_st& operator=(ssl_ctx_st const&);
    ssl_ctx_st(ssl_ctx_st const&);
    ssl_ctx_st();
};
