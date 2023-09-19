#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RemovePassengersComponent {
public:
    // prevent constructor by default
    RemovePassengersComponent& operator=(RemovePassengersComponent const&);
    RemovePassengersComponent(RemovePassengersComponent const&);
    RemovePassengersComponent();

public:
    // NOLINTBEGIN
    // symbol: ??4RemovePassengersComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct RemovePassengersComponent& operator=(struct RemovePassengersComponent&&);

    // symbol: ??1RemovePassengersComponent@@QEAA@XZ
    MCAPI ~RemovePassengersComponent();

    // NOLINTEND
};
