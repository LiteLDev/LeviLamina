#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class FATBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6e4896;
    ::ll::UntypedStorage<4, 4>  mUnka792c6;
    ::ll::UntypedStorage<4, 4>  mUnk9e1597;
    ::ll::UntypedStorage<4, 4>  mUnkdde60f;
    ::ll::UntypedStorage<8, 24> mUnkc16921;
    ::ll::UntypedStorage<8, 32> mUnk89512b;
    ::ll::UntypedStorage<1, 1>  mUnk9c5649;
    // NOLINTEND

public:
    // prevent constructor by default
    FATBlock& operator=(FATBlock const&);
    FATBlock(FATBlock const&);
    FATBlock();
};

} // namespace SFAT
