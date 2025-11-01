#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions {

class ILegacyActorDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILegacyActorDependencies() = default;

    // vIndex: 1
    virtual bool isRemoved() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
