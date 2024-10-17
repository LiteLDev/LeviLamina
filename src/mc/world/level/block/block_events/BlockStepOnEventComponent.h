#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

class BlockStepOnEventComponent {
public:
    // prevent constructor by default
    BlockStepOnEventComponent& operator=(BlockStepOnEventComponent const&);
    BlockStepOnEventComponent(BlockStepOnEventComponent const&);
    BlockStepOnEventComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockStepOnEventComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};

}; // namespace BlockEvents
