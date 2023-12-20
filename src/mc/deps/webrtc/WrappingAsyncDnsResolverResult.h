#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/AsyncDnsResolverResult.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
namespace webrtc { class AsyncDnsResolverResult; }
// clang-format on

namespace webrtc {

class WrappingAsyncDnsResolverResult : public ::webrtc::AsyncDnsResolverResult {
public:
    // prevent constructor by default
    WrappingAsyncDnsResolverResult& operator=(WrappingAsyncDnsResolverResult const&);
    WrappingAsyncDnsResolverResult(WrappingAsyncDnsResolverResult const&);
    WrappingAsyncDnsResolverResult();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WrappingAsyncDnsResolverResult@webrtc@@UEAA@XZ
    virtual ~WrappingAsyncDnsResolverResult() = default;

    // vIndex: 1, symbol: ?GetResolvedAddress@WrappingAsyncDnsResolverResult@webrtc@@UEBA_NHPEAVSocketAddress@rtc@@@Z
    virtual bool GetResolvedAddress(int, class rtc::SocketAddress*) const;

    // vIndex: 2, symbol: ?GetError@WrappingAsyncDnsResolverResult@webrtc@@UEBAHXZ
    virtual int GetError() const;

    // NOLINTEND
};

}; // namespace webrtc
