#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class ILiveViewCollectionConsumer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILiveViewCollectionConsumer() = default;

    virtual ::std::vector<uint> consumeChangedHandles() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
