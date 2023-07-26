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
    /**
     * @symbol ?bindType\@ITrait\@BlockTrait\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
};

}; // namespace BlockTrait
