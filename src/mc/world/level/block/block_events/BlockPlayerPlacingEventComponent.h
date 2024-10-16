#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

class BlockPlayerPlacingEventComponent {
public:
    // prevent constructor by default
    BlockPlayerPlacingEventComponent& operator=(BlockPlayerPlacingEventComponent const&);
    BlockPlayerPlacingEventComponent(BlockPlayerPlacingEventComponent const&);
    BlockPlayerPlacingEventComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPlayerPlacingEventComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};

}; // namespace BlockEvents
