#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct http_retry_after_api_state {
public:
    // prevent constructor by default
    http_retry_after_api_state& operator=(http_retry_after_api_state const&);
    http_retry_after_api_state(http_retry_after_api_state const&);
    http_retry_after_api_state();
};

}; // namespace xbox::httpclient
