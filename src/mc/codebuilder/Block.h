#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct Block {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk305992;
    ::ll::UntypedStorage<8, 8>  mUnk668a41;
    ::ll::UntypedStorage<8, 32> mUnk242b73;
    // NOLINTEND

public:
    // prevent constructor by default
    Block& operator=(Block const&);
    Block(Block const&);
    Block();
};

} // namespace CodeBuilder
