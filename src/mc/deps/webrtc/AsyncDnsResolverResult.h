#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AsyncDnsResolverResult {
public:
    // prevent constructor by default
    AsyncDnsResolverResult& operator=(AsyncDnsResolverResult const&);
    AsyncDnsResolverResult(AsyncDnsResolverResult const&);
    AsyncDnsResolverResult();
};

}; // namespace webrtc
