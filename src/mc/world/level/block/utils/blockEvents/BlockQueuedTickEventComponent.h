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
    // vIndex: 0, symbol: __gen_??1BlockQueuedTickEventComponent@BlockEvents@@UEAA@XZ
    virtual ~BlockQueuedTickEventComponent() = default;

    // NOLINTEND
};

}; // namespace BlockEvents
