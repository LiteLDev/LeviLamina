#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProductSku {
public:
    // prevent constructor by default
    ProductSku& operator=(ProductSku const&);
    ProductSku(ProductSku const&);
    ProductSku();
};
