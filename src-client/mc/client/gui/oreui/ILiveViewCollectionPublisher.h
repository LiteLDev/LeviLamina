#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class ILiveViewCollectionPublisher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILiveViewCollectionPublisher() = default;

    virtual uint allocateHandle() = 0;

    virtual void markChanged(uint handle) = 0;
    // NOLINTEND
};

} // namespace OreUI
