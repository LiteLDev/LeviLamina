#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class ILiveViewCollectionConsumer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILiveViewCollectionConsumer();

    virtual ::std::vector<uint> consumeChangedHandles() = 0;
    // NOLINTEND
};

} // namespace OreUI
