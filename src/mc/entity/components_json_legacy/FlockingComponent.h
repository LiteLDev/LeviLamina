#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class FlockingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2ac316;
    ::ll::UntypedStorage<4, 12> mUnk260d0b;
    ::ll::UntypedStorage<4, 12> mUnkc87136;
    ::ll::UntypedStorage<4, 12> mUnk20cf3b;
    ::ll::UntypedStorage<4, 12> mUnk10a040;
    ::ll::UntypedStorage<1, 1>  mUnkd5aebc;
    ::ll::UntypedStorage<1, 1>  mUnkbf0011;
    ::ll::UntypedStorage<1, 1>  mUnk8e5a9c;
    ::ll::UntypedStorage<1, 1>  mUnkdafef7;
    ::ll::UntypedStorage<1, 1>  mUnkbc9af2;
    ::ll::UntypedStorage<1, 1>  mUnkaa0b41;
    ::ll::UntypedStorage<1, 1>  mUnkf5de12;
    ::ll::UntypedStorage<1, 1>  mUnk64dad6;
    ::ll::UntypedStorage<4, 4>  mUnk13248b;
    ::ll::UntypedStorage<4, 4>  mUnk672d0c;
    ::ll::UntypedStorage<4, 4>  mUnkaa2a83;
    ::ll::UntypedStorage<4, 4>  mUnk563eba;
    ::ll::UntypedStorage<4, 4>  mUnk1ebf5a;
    ::ll::UntypedStorage<4, 4>  mUnke0b962;
    ::ll::UntypedStorage<4, 4>  mUnk42c128;
    ::ll::UntypedStorage<4, 4>  mUnk90f6fa;
    ::ll::UntypedStorage<4, 4>  mUnke5af87;
    ::ll::UntypedStorage<4, 4>  mUnk82b1e6;
    ::ll::UntypedStorage<4, 4>  mUnk5f4885;
    ::ll::UntypedStorage<4, 4>  mUnk2374cb;
    ::ll::UntypedStorage<4, 4>  mUnkc37b7c;
    ::ll::UntypedStorage<4, 4>  mUnkef8707;
    ::ll::UntypedStorage<1, 1>  mUnk577294;
    // NOLINTEND

public:
    // prevent constructor by default
    FlockingComponent& operator=(FlockingComponent const&);
    FlockingComponent(FlockingComponent const&);
    FlockingComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlockingComponent(::FlockingComponent&&);

    MCAPI void calculateFlockVector(::Actor const& owner);

    MCAPI bool canJoinFlock(::Actor& owner) const;

    MCAPI void joinFlock(::Actor& owner);

    MCAPI void manageNeighborhood(::Actor& owner);

    MCAPI void mergeNeighborhoods(::Actor& owner);

    MCAPI ::FlockingComponent& operator=(::FlockingComponent&&);

    MCAPI void updateNeighborhoodData(::Actor const& owner);

    MCAPI bool validateVariantEntityTypes(::Actor const& e0, ::Actor const& e1) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FlockingComponent&&);
    // NOLINTEND
};
