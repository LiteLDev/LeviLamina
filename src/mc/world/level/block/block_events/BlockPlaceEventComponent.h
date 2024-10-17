#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

class BlockPlaceEventComponent {
public:
    // prevent constructor by default
    BlockPlaceEventComponent& operator=(BlockPlaceEventComponent const&);
    BlockPlaceEventComponent(BlockPlaceEventComponent const&);
    BlockPlaceEventComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPlaceEventComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};

}; // namespace BlockEvents
