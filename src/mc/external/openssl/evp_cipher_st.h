#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct evp_cipher_st {
public:
    // prevent constructor by default
    evp_cipher_st& operator=(evp_cipher_st const&);
    evp_cipher_st(evp_cipher_st const&);
    evp_cipher_st();
};
