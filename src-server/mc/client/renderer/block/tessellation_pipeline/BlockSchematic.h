#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct BlockSchematic {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> mUnkc136ef;
    ::ll::UntypedStorage<8, 24> mUnk52e108;
    ::ll::UntypedStorage<8, 24> mUnk81f0ce;
    ::ll::UntypedStorage<8, 24> mUnk907936;
    ::ll::UntypedStorage<1, 1> mUnk2b740e;
    ::ll::UntypedStorage<4, 12> mUnke92606;
    ::ll::UntypedStorage<4, 12> mUnk9127e4;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSchematic& operator=(BlockSchematic const&);
    BlockSchematic(BlockSchematic const&);
    BlockSchematic();

};

}
