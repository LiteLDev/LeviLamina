#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

class BlockStepOffEventComponent {
public:
    // prevent constructor by default
    BlockStepOffEventComponent& operator=(BlockStepOffEventComponent const&);
    BlockStepOffEventComponent(BlockStepOffEventComponent const&);
    BlockStepOffEventComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockStepOffEventComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};

}; // namespace BlockEvents
