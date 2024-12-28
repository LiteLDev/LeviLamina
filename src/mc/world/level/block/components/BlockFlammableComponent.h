#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockFlammableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5e8ce2;
    ::ll::UntypedStorage<4, 4> mUnkc6d4aa;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockFlammableComponent& operator=(BlockFlammableComponent const&);
    BlockFlammableComponent(BlockFlammableComponent const&);
    BlockFlammableComponent();
};
