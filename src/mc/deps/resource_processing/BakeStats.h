#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct BakeStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9eade7;
    ::ll::UntypedStorage<4, 4>  mUnk90ddbc;
    ::ll::UntypedStorage<4, 4>  mUnk32eb4f;
    ::ll::UntypedStorage<4, 4>  mUnk245fe8;
    ::ll::UntypedStorage<4, 4>  mUnkec825c;
    ::ll::UntypedStorage<4, 4>  mUnk8837e4;
    ::ll::UntypedStorage<4, 4>  mUnk80f1e7;
    ::ll::UntypedStorage<4, 4>  mUnked1516;
    ::ll::UntypedStorage<4, 4>  mUnk675b41;
    ::ll::UntypedStorage<8, 8>  mUnk8cde0b;
    // NOLINTEND

public:
    // prevent constructor by default
    BakeStats& operator=(BakeStats const&);
    BakeStats(BakeStats const&);
    BakeStats();
};

} // namespace Bedrock::Resources
