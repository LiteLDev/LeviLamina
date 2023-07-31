#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockTrait {

class ITrait {

public:
    // prevent constructor by default
    ITrait& operator=(ITrait const&) = delete;
    ITrait(ITrait const&)            = delete;
    ITrait()                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?bindType\@ITrait\@BlockTrait\@\@SAXXZ
     */
    MCAPI static void bindType();
    // NOLINTEND
};

}; // namespace BlockTrait
