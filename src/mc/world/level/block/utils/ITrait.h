#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockTrait {

class ITrait {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTRAIT_ITRAIT
public:
    ITrait& operator=(ITrait const&) = delete;
    ITrait(ITrait const&)            = delete;
    ITrait()                         = delete;
#endif

public:
    /**
     * @symbol ?bindType\@ITrait\@BlockTrait\@\@SAXXZ
     */
    MCAPI static void bindType();
};

}; // namespace BlockTrait
