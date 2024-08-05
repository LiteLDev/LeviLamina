#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

class BlockQueuedTickEventComponent {
public:
    // prevent constructor by default
    BlockQueuedTickEventComponent& operator=(BlockQueuedTickEventComponent const&);
    BlockQueuedTickEventComponent(BlockQueuedTickEventComponent const&);
    BlockQueuedTickEventComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockQueuedTickEventComponent() = default;

    // NOLINTEND
};

}; // namespace BlockEvents
