#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDimensionChangeBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkaa75cf;
    ::ll::UntypedStorage<4, 4>  mUnk832c50;
    ::ll::UntypedStorage<4, 12> mUnkbf8058;
    ::ll::UntypedStorage<4, 4>  mUnk75bd36;
    ::ll::UntypedStorage<4, 12> mUnkd72501;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDimensionChangeBeforeEvent& operator=(PlayerDimensionChangeBeforeEvent const&);
    PlayerDimensionChangeBeforeEvent(PlayerDimensionChangeBeforeEvent const&);
    PlayerDimensionChangeBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerDimensionChangeBeforeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
