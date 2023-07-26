#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCollisionBoxComponent {

public:
    // prevent constructor by default
    BlockCollisionBoxComponent& operator=(BlockCollisionBoxComponent const&) = delete;
    BlockCollisionBoxComponent(BlockCollisionBoxComponent const&)            = delete;
    BlockCollisionBoxComponent()                                             = delete;
};
