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
    MCAPI struct DepenetrationComponent& operator=(struct DepenetrationComponent&&);

    MCAPI struct DepenetrationComponent& operator=(struct DepenetrationComponent const&);

    MCAPI ~DepenetrationComponent();

    // NOLINTEND
};
