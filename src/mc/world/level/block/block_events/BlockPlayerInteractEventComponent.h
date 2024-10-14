#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

class BlockPlayerInteractEventComponent {
public:
    // prevent constructor by default
    BlockPlayerInteractEventComponent& operator=(BlockPlayerInteractEventComponent const&);
    BlockPlayerInteractEventComponent(BlockPlayerInteractEventComponent const&);
    BlockPlayerInteractEventComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPlayerInteractEventComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};

}; // namespace BlockEvents
