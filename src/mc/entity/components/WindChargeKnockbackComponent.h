#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WindChargeKnockbackComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb5c54d;
    ::ll::UntypedStorage<4, 4> mUnkbd4c34;
    ::ll::UntypedStorage<1, 1> mUnkb371bf;
    // NOLINTEND

public:
    // prevent constructor by default
    WindChargeKnockbackComponent& operator=(WindChargeKnockbackComponent const&);
    WindChargeKnockbackComponent(WindChargeKnockbackComponent const&);
    WindChargeKnockbackComponent();
};
