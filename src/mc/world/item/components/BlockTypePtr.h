#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTypePtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk94b04a;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTypePtr& operator=(BlockTypePtr const&);
    BlockTypePtr(BlockTypePtr const&);
    BlockTypePtr();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string toString() const;
    // NOLINTEND
};
