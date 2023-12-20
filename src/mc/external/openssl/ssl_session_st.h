#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ssl_session_st {
public:
    // prevent constructor by default
    ssl_session_st& operator=(ssl_session_st const&);
    ssl_session_st(ssl_session_st const&);
    ssl_session_st();
};
