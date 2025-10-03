#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct CloudQuery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk675314;
    ::ll::UntypedStorage<4, 4>  mUnk43fa99;
    ::ll::UntypedStorage<4, 4>  mUnk3b64db;
    ::ll::UntypedStorage<1, 1>  mUnk3dec7e;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudQuery& operator=(CloudQuery const&);
    CloudQuery(CloudQuery const&);
    CloudQuery();
};

} // namespace RakNet
