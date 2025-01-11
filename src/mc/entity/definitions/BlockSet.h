#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkcabbb5;
    ::ll::UntypedStorage<8, 24> mUnkd8257b;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSet& operator=(BlockSet const&);
    BlockSet(BlockSet const&);
    BlockSet();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockSet();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
