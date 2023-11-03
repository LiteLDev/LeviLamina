#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemInUseComponent {
public:
    // prevent constructor by default
    ItemInUseComponent& operator=(ItemInUseComponent const&);
    ItemInUseComponent(ItemInUseComponent const&);
    ItemInUseComponent();

public:
    // NOLINTBEGIN
    // symbol: ??1ItemInUseComponent@@QEAA@XZ
    MCAPI ~ItemInUseComponent();

    // NOLINTEND
};
