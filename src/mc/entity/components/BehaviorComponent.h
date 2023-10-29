#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorComponent {
public:
    // prevent constructor by default
    BehaviorComponent& operator=(BehaviorComponent const&);
    BehaviorComponent(BehaviorComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BehaviorComponent@@QEAA@XZ
    MCAPI BehaviorComponent();

    // symbol: ??0BehaviorComponent@@QEAA@$$QEAV0@@Z
    MCAPI BehaviorComponent(class BehaviorComponent&&);

    // symbol: ??4BehaviorComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class BehaviorComponent& operator=(class BehaviorComponent&&);

    // symbol: ??1BehaviorComponent@@QEAA@XZ
    MCAPI ~BehaviorComponent();

    // NOLINTEND
};
