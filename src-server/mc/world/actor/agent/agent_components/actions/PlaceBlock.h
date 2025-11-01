#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct PlaceBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk89eb99;
    ::ll::UntypedStorage<4, 4> mUnk93e46e;
    ::ll::UntypedStorage<8, 152> mUnk728042;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaceBlock& operator=(PlaceBlock const&);
    PlaceBlock(PlaceBlock const&);
    PlaceBlock();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlaceBlock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
