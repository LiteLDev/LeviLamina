#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkce21a5;
    ::ll::UntypedStorage<8, 8>  mUnk713829;
    ::ll::UntypedStorage<8, 88> mUnk6a4c1d;
    // NOLINTEND

public:
    // prevent constructor by default
    BehaviorComponent& operator=(BehaviorComponent const&);
    BehaviorComponent(BehaviorComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BehaviorComponent();

    MCAPI BehaviorComponent(::BehaviorComponent&&);

    MCAPI ~BehaviorComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BehaviorComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
