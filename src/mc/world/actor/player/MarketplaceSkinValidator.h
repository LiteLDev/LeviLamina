#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MarketplaceSkinValidator {

public:
    // prevent constructor by default
    MarketplaceSkinValidator& operator=(MarketplaceSkinValidator const&) = delete;
    MarketplaceSkinValidator(MarketplaceSkinValidator const&)            = delete;
    MarketplaceSkinValidator()                                           = delete;

public:
    /**
     * @symbol
     * ?checkIfValid\@MarketplaceSkinValidator\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool checkIfValid(std::string const&); // NOLINT
};
