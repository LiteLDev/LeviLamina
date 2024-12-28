#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractWithBlockBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk29c686;
    ::ll::UntypedStorage<4, 12>  mUnk5b3ecd;
    ::ll::UntypedStorage<1, 1>   mUnk501c44;
    ::ll::UntypedStorage<4, 12>  mUnk98a4ae;
    ::ll::UntypedStorage<8, 152> mUnk560b4b;
    ::ll::UntypedStorage<1, 1>   mUnk77f14d;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractWithBlockBeforeEvent& operator=(PlayerInteractWithBlockBeforeEvent const&);
    PlayerInteractWithBlockBeforeEvent(PlayerInteractWithBlockBeforeEvent const&);
    PlayerInteractWithBlockBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerInteractWithBlockBeforeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
