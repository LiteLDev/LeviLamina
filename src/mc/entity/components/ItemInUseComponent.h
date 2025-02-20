#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemInUseComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk16c81e;
    ::ll::UntypedStorage<4, 4> mUnk61faad;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemInUseComponent& operator=(ItemInUseComponent const&);
    ItemInUseComponent(ItemInUseComponent const&);
    ItemInUseComponent();
};
