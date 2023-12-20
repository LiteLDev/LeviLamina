#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AsyncDnsResolverFactoryInterface {
public:
    // prevent constructor by default
    AsyncDnsResolverFactoryInterface& operator=(AsyncDnsResolverFactoryInterface const&);
    AsyncDnsResolverFactoryInterface(AsyncDnsResolverFactoryInterface const&);
    AsyncDnsResolverFactoryInterface();
};

}; // namespace webrtc
