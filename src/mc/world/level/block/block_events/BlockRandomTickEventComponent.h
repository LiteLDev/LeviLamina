#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

class BlockRandomTickEventComponent {
public:
    // prevent constructor by default
    BlockRandomTickEventComponent& operator=(BlockRandomTickEventComponent const&);
    BlockRandomTickEventComponent(BlockRandomTickEventComponent const&);
    BlockRandomTickEventComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockRandomTickEventComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};

}; // namespace BlockEvents
