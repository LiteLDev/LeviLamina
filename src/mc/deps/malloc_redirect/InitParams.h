#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::MallocRedirect {

struct InitParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb084ca;
    ::ll::UntypedStorage<8, 8>  mUnkcdff56;
    ::ll::UntypedStorage<1, 1>  mUnk8f332c;
    // NOLINTEND

public:
    // prevent constructor by default
    InitParams& operator=(InitParams const&);
    InitParams(InitParams const&);
    InitParams();
};

} // namespace Bedrock::MallocRedirect
