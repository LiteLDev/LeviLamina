#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Brush {

struct BlockStatePair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkd080d0;
    ::ll::UntypedStorage<8, 40> mUnk6e8c55;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStatePair& operator=(BlockStatePair const&);
    BlockStatePair(BlockStatePair const&);
    BlockStatePair();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockStatePair();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
