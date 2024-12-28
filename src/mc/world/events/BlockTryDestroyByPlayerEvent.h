#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockTryDestroyByPlayerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkd17f94;
    ::ll::UntypedStorage<8, 8>   mUnkd9d1ee;
    ::ll::UntypedStorage<4, 12>  mUnk72eaa4;
    ::ll::UntypedStorage<8, 152> mUnk2c2079;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTryDestroyByPlayerEvent& operator=(BlockTryDestroyByPlayerEvent const&);
    BlockTryDestroyByPlayerEvent(BlockTryDestroyByPlayerEvent const&);
    BlockTryDestroyByPlayerEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockTryDestroyByPlayerEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
