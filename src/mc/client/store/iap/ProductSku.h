#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProductSku {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRODUCTSKU
public:
    ProductSku& operator=(ProductSku const&) = delete;
    ProductSku(ProductSku const&)            = delete;
    ProductSku()                             = delete;
#endif

public:
};
