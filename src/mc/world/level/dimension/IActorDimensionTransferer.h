#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IActorDimensionTransferer {
public:
    // prevent constructor by default
    IActorDimensionTransferer& operator=(IActorDimensionTransferer const&);
    IActorDimensionTransferer(IActorDimensionTransferer const&);
    IActorDimensionTransferer();
};
