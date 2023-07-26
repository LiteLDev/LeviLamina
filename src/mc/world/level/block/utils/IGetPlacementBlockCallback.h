#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockTrait {

class IGetPlacementBlockCallback {

public:
    // prevent constructor by default
    IGetPlacementBlockCallback& operator=(IGetPlacementBlockCallback const&) = delete;
    IGetPlacementBlockCallback(IGetPlacementBlockCallback const&)            = delete;
    IGetPlacementBlockCallback()                                             = delete;
};

}; // namespace BlockTrait
