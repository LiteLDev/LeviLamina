#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AsyncDnsResolverInterface {
public:
    // prevent constructor by default
    AsyncDnsResolverInterface& operator=(AsyncDnsResolverInterface const&);
    AsyncDnsResolverInterface(AsyncDnsResolverInterface const&);
    AsyncDnsResolverInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AsyncDnsResolverInterface@webrtc@@UEAA@XZ
    virtual ~AsyncDnsResolverInterface() = default;

    // NOLINTEND
};

}; // namespace webrtc
