#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncResolverInterface; }
namespace rtc { class SocketAddress; }
namespace webrtc { class AsyncDnsResolverResult; }
// clang-format on

namespace webrtc {

class WrappingAsyncDnsResolver {
public:
    // prevent constructor by default
    WrappingAsyncDnsResolver& operator=(WrappingAsyncDnsResolver const&);
    WrappingAsyncDnsResolver(WrappingAsyncDnsResolver const&);
    WrappingAsyncDnsResolver();

public:
    // NOLINTBEGIN
    // symbol: ?Start@WrappingAsyncDnsResolver@webrtc@@UEAAXAEBVSocketAddress@rtc@@V?$function@$$A6AXXZ@std@@@Z
    MCVAPI void Start(class rtc::SocketAddress const&, std::function<void(void)>);

    // symbol: ?Start@WrappingAsyncDnsResolver@webrtc@@UEAAXAEBVSocketAddress@rtc@@HV?$function@$$A6AXXZ@std@@@Z
    MCVAPI void Start(class rtc::SocketAddress const&, int, std::function<void(void)>);

    // symbol: ?result@WrappingAsyncDnsResolver@webrtc@@UEBAAEBVAsyncDnsResolverResult@2@XZ
    MCVAPI class webrtc::AsyncDnsResolverResult const& result() const;

    // symbol: ??0WrappingAsyncDnsResolver@webrtc@@QEAA@PEAVAsyncResolverInterface@rtc@@@Z
    MCAPI explicit WrappingAsyncDnsResolver(class rtc::AsyncResolverInterface*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?OnResolveResult@WrappingAsyncDnsResolver@webrtc@@AEAAXPEAVAsyncResolverInterface@rtc@@@Z
    MCAPI void OnResolveResult(class rtc::AsyncResolverInterface*);

    // symbol: ?PrepareToResolve@WrappingAsyncDnsResolver@webrtc@@AEAAXV?$function@$$A6AXXZ@std@@@Z
    MCAPI void PrepareToResolve(std::function<void(void)>);

    // NOLINTEND
};

}; // namespace webrtc
