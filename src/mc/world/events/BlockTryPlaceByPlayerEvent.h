#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockTryPlaceByPlayerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd0e05d;
    ::ll::UntypedStorage<4, 12> mUnk125695;
    ::ll::UntypedStorage<1, 1>  mUnk1dd1ff;
    ::ll::UntypedStorage<4, 12> mUnkcb157c;
    ::ll::UntypedStorage<8, 8>  mUnk439762;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTryPlaceByPlayerEvent& operator=(BlockTryPlaceByPlayerEvent const&);
    BlockTryPlaceByPlayerEvent(BlockTryPlaceByPlayerEvent const&);
    BlockTryPlaceByPlayerEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockTryPlaceByPlayerEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
