#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct http_retry_after_api_state {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk4a2155;
    ::ll::UntypedStorage<4, 4> mUnkac5eb6;
    ::ll::UntypedStorage<1, 1> mUnk75ea4f;
    // NOLINTEND

public:
    // prevent constructor by default
    http_retry_after_api_state& operator=(http_retry_after_api_state const&);
    http_retry_after_api_state(http_retry_after_api_state const&);
    http_retry_after_api_state();
};

} // namespace xbox::httpclient
