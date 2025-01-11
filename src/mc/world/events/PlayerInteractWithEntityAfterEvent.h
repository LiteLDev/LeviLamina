#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractWithEntityAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnke56395;
    ::ll::UntypedStorage<8, 24>  mUnk38ba29;
    ::ll::UntypedStorage<8, 152> mUnke4e190;
    ::ll::UntypedStorage<8, 152> mUnk23d0bf;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractWithEntityAfterEvent& operator=(PlayerInteractWithEntityAfterEvent const&);
    PlayerInteractWithEntityAfterEvent(PlayerInteractWithEntityAfterEvent const&);
    PlayerInteractWithEntityAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerInteractWithEntityAfterEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
