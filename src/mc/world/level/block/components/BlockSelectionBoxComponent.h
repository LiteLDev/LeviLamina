#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockSelectionBoxComponent {
public:
    // prevent constructor by default
    BlockSelectionBoxComponent& operator=(BlockSelectionBoxComponent const&);
    BlockSelectionBoxComponent(BlockSelectionBoxComponent const&);
    BlockSelectionBoxComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockSelectionBoxComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
