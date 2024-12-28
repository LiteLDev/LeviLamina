#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct Block {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdd3fad;
    ::ll::UntypedStorage<8, 8>  mUnk668a41;
    ::ll::UntypedStorage<8, 32> mUnkc71233;
    // NOLINTEND

public:
    // prevent constructor by default
    Block& operator=(Block const&);
    Block(Block const&);
    Block();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Block();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace CodeBuilder
