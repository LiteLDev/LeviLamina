#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct x509_store_ctx_st {
public:
    // prevent constructor by default
    x509_store_ctx_st& operator=(x509_store_ctx_st const&);
    x509_store_ctx_st(x509_store_ctx_st const&);
    x509_store_ctx_st();
};
