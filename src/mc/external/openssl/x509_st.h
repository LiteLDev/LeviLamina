#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct x509_st {
public:
    // prevent constructor by default
    x509_st& operator=(x509_st const&);
    x509_st(x509_st const&);
    x509_st();
};
