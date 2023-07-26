#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemGameplayHandler {

public:
    // prevent constructor by default
    ItemGameplayHandler& operator=(ItemGameplayHandler const&) = delete;
    ItemGameplayHandler(ItemGameplayHandler const&)            = delete;
    ItemGameplayHandler()                                      = delete;
};
