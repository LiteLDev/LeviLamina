#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ssl_st {
public:
    // prevent constructor by default
    ssl_st& operator=(ssl_st const&);
    ssl_st(ssl_st const&);
    ssl_st();
};
