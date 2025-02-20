#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DepenetrationComponent {
public:
    // DepenetrationComponent inner types define
    enum class Bit : int {
        IsAlwaysOneWayCollision = 0,
        WasPenetratingLastFrame = 1,
        IsStuckInCollider       = 2,
        IsStuckItem             = 3,
        PushTowardsClosestSpace = 4,
        Count                   = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf806dd;
    ::ll::UntypedStorage<4, 12> mUnk4dc042;
    ::ll::UntypedStorage<8, 24> mUnkb9e726;
    ::ll::UntypedStorage<4, 16> mUnk9116cf;
    // NOLINTEND

public:
    // prevent constructor by default
    DepenetrationComponent& operator=(DepenetrationComponent const&);
    DepenetrationComponent(DepenetrationComponent const&);
    DepenetrationComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::DepenetrationComponent& operator=(::DepenetrationComponent&&);
    // NOLINTEND
};
