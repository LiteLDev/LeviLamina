#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DepenetrationComponent {
public:
    // DepenetrationComponent inner types define
    enum class Bit {};

public:
    // prevent constructor by default
    DepenetrationComponent(DepenetrationComponent const&);
    DepenetrationComponent();

public:
    // NOLINTBEGIN
    // symbol: ??4DepenetrationComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct DepenetrationComponent& operator=(struct DepenetrationComponent&&);

    // symbol: ??4DepenetrationComponent@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct DepenetrationComponent& operator=(struct DepenetrationComponent const&);

    // symbol: ??1DepenetrationComponent@@QEAA@XZ
    MCAPI ~DepenetrationComponent();

    // NOLINTEND
};
