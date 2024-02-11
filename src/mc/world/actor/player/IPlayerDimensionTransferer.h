#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPlayerDimensionTransferer {
public:
    // prevent constructor by default
    IPlayerDimensionTransferer& operator=(IPlayerDimensionTransferer const&);
    IPlayerDimensionTransferer(IPlayerDimensionTransferer const&);
    IPlayerDimensionTransferer();
};
