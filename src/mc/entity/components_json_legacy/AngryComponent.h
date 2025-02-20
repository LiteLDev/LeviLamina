#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class AngryComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1762df;
    ::ll::UntypedStorage<1, 1>  mUnk28ed13;
    ::ll::UntypedStorage<1, 1>  mUnk15f19c;
    ::ll::UntypedStorage<1, 1>  mUnkea9761;
    ::ll::UntypedStorage<1, 1>  mUnk7ac011;
    ::ll::UntypedStorage<1, 1>  mUnk5621fd;
    ::ll::UntypedStorage<4, 4>  mUnk7a699b;
    ::ll::UntypedStorage<8, 64> mUnkeb7214;
    ::ll::UntypedStorage<8, 64> mUnk2a0619;
    ::ll::UntypedStorage<8, 8>  mUnk200d4e;
    // NOLINTEND

public:
    // prevent constructor by default
    AngryComponent& operator=(AngryComponent const&);
    AngryComponent(AngryComponent const&);
    AngryComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool canGetAngry(::Mob& owner, ::Mob* testMob, ::Actor* target, bool allowInvulnerable, bool mustSee) const;

    MCAPI ::AngryComponent& operator=(::AngryComponent&&);

    MCAPI void restartTimer(::Mob& owner);

    MCAPI ~AngryComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
