#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCollisionBoxComponent {
public:
    // prevent constructor by default
    BlockCollisionBoxComponent& operator=(BlockCollisionBoxComponent const&);
    BlockCollisionBoxComponent(BlockCollisionBoxComponent const&);
    BlockCollisionBoxComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockCollisionBoxComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
