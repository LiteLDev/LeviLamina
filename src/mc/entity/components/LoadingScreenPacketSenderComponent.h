#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LoadingScreenPacketSenderComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf94cb5;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadingScreenPacketSenderComponent& operator=(LoadingScreenPacketSenderComponent const&);
    LoadingScreenPacketSenderComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LoadingScreenPacketSenderComponent(::LoadingScreenPacketSenderComponent const&);

    MCAPI ~LoadingScreenPacketSenderComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LoadingScreenPacketSenderComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
