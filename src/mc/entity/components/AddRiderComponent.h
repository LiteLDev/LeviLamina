#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AddRiderComponent {
public:
    // prevent constructor by default
    AddRiderComponent& operator=(AddRiderComponent const&);
    AddRiderComponent(AddRiderComponent const&);
    AddRiderComponent();

public:
    // NOLINTBEGIN
    // symbol: ?reloadComponent@AddRiderComponent@@QEAAXAEAVActor@@@Z
    MCAPI void reloadComponent(class Actor& owner);

    // symbol: ??1AddRiderComponent@@QEAA@XZ
    MCAPI ~AddRiderComponent();

    // NOLINTEND
};
