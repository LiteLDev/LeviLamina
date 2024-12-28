#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractWithBlockAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk8e0509;
    ::ll::UntypedStorage<4, 12>  mUnk7666cf;
    ::ll::UntypedStorage<1, 1>   mUnke90097;
    ::ll::UntypedStorage<4, 12>  mUnk3e0408;
    ::ll::UntypedStorage<8, 152> mUnk2bcbe3;
    ::ll::UntypedStorage<8, 152> mUnkafb46a;
    ::ll::UntypedStorage<1, 1>   mUnk3c4e63;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractWithBlockAfterEvent& operator=(PlayerInteractWithBlockAfterEvent const&);
    PlayerInteractWithBlockAfterEvent(PlayerInteractWithBlockAfterEvent const&);
    PlayerInteractWithBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerInteractWithBlockAfterEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
