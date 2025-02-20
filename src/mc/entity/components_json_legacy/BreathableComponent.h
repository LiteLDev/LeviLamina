#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class BreathableComponent {
public:
    // BreathableComponent inner types define
    enum class BreathableState : int {
        InAir                        = 0,
        InWater                      = 1,
        InLava                       = 2,
        InSolids                     = 3,
        InBreathableOverrideBlock    = 4,
        InNonBreathableOverrideBlock = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk58f587;
    ::ll::UntypedStorage<4, 4>  mUnk2575d0;
    ::ll::UntypedStorage<4, 4>  mUnk90b35d;
    ::ll::UntypedStorage<1, 1>  mUnk64330c;
    ::ll::UntypedStorage<1, 1>  mUnk42a9fc;
    ::ll::UntypedStorage<1, 1>  mUnk831168;
    ::ll::UntypedStorage<1, 1>  mUnk93e36e;
    ::ll::UntypedStorage<1, 1>  mUnk63c4b3;
    ::ll::UntypedStorage<2, 2>  mUnk874e39;
    ::ll::UntypedStorage<2, 2>  mUnk79d7bc;
    ::ll::UntypedStorage<8, 24> mUnka5fa23;
    ::ll::UntypedStorage<8, 24> mUnkbe7ee0;
    ::ll::UntypedStorage<4, 4>  mUnk1042c3;
    // NOLINTEND

public:
    // prevent constructor by default
    BreathableComponent& operator=(BreathableComponent const&);
    BreathableComponent(BreathableComponent const&);
    BreathableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool canBreathe(::Actor const& owner) const;

    MCAPI void updateBreathableState(::Actor& owner);

    MCAPI ~BreathableComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
