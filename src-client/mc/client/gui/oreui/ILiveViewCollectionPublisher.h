#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class ILiveViewCollectionPublisher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILiveViewCollectionPublisher() = default;

    virtual uint allocateHandle() = 0;

    virtual void markChanged(uint) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
