#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockSelectionBoxComponent {

public:
    // prevent constructor by default
    BlockSelectionBoxComponent& operator=(BlockSelectionBoxComponent const&) = delete;
    BlockSelectionBoxComponent(BlockSelectionBoxComponent const&)            = delete;
    BlockSelectionBoxComponent()                                             = delete;
};
