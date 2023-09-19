#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EnchantResult {
public:
    // prevent constructor by default
    EnchantResult& operator=(EnchantResult const&);
    EnchantResult(EnchantResult const&);
    EnchantResult();
};
