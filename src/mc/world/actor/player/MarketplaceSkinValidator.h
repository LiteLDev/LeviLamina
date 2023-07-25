#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MarketplaceSkinValidator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MARKETPLACESKINVALIDATOR
public:
    MarketplaceSkinValidator& operator=(MarketplaceSkinValidator const&) = delete;
    MarketplaceSkinValidator(MarketplaceSkinValidator const&)            = delete;
    MarketplaceSkinValidator()                                           = delete;
#endif

public:
    /**
     * @symbol
     * ?checkIfValid\@MarketplaceSkinValidator\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool checkIfValid(std::string const&);
};
