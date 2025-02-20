#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerActionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk95b4e4;
    ::ll::UntypedStorage<8, 312> mUnk478719;
    ::ll::UntypedStorage<8, 8>   mUnk317b59;
    ::ll::UntypedStorage<8, 24>  mUnke1e403;
    ::ll::UntypedStorage<4, 8>   mUnk6075a7;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerActionComponent& operator=(PlayerActionComponent const&);
    PlayerActionComponent(PlayerActionComponent const&);
    PlayerActionComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerActionComponent(::PlayerActionComponent&&);

    MCAPI ::PlayerActionComponent& operator=(::PlayerActionComponent&&);

    MCAPI ~PlayerActionComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string
    getDiffOfPlayerAuthInputPacket(::PlayerActionComponent const& lhs, ::PlayerActionComponent const& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PlayerActionComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
