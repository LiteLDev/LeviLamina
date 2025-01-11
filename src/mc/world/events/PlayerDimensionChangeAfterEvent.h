#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDimensionChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc04a6c;
    ::ll::UntypedStorage<4, 4>  mUnk1798ef;
    ::ll::UntypedStorage<4, 12> mUnke10e45;
    ::ll::UntypedStorage<4, 4>  mUnkaac425;
    ::ll::UntypedStorage<4, 12> mUnkf137b4;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDimensionChangeAfterEvent& operator=(PlayerDimensionChangeAfterEvent const&);
    PlayerDimensionChangeAfterEvent(PlayerDimensionChangeAfterEvent const&);
    PlayerDimensionChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerDimensionChangeAfterEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
