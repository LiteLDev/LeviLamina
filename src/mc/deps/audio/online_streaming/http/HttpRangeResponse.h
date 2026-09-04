#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct HttpRangeResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkf6bf3f;
    ::ll::UntypedStorage<8, 8>  mUnka8a99f;
    ::ll::UntypedStorage<8, 8>  mUnkfafd5f;
    ::ll::UntypedStorage<8, 8>  mUnke5c1e7;
    ::ll::UntypedStorage<8, 24> mUnkfbb589;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpRangeResponse& operator=(HttpRangeResponse const&);
    HttpRangeResponse(HttpRangeResponse const&);
    HttpRangeResponse();
};

} // namespace Audio
