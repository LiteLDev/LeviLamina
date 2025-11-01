#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class AABB;
// clang-format on

struct DepenetrationComponent {
public:
    // DepenetrationComponent inner types define
    enum class Bit : int {
        IsAlwaysOneWayCollision = 0,
        WasPenetratingLastFrame = 1,
        IsStuckInCollider = 2,
        IsStuckItem = 3,
        PushTowardsClosestSpace = 4,
        Count = 5,
    };
    
    using Bitset = ::std::bitset<5>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::bitset<5>> mBits;
    ::ll::TypedStorage<4, 12, ::Vec3> mMinDepenetration;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>> mOneWayPhysicsBlocks;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mTemporaryOverride;
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
