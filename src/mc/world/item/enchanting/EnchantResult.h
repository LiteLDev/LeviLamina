#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EnchantResult {

public:
    // prevent constructor by default
    EnchantResult& operator=(EnchantResult const&) = delete;
    EnchantResult(EnchantResult const&)            = delete;
    EnchantResult()                                = delete;
};
