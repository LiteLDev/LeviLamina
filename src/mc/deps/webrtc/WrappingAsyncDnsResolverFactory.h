#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/AsyncDnsResolverFactoryInterface.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
namespace webrtc { class AsyncDnsResolverFactoryInterface; }
namespace webrtc { class AsyncDnsResolverInterface; }
// clang-format on

namespace webrtc {

class WrappingAsyncDnsResolverFactory : public ::webrtc::AsyncDnsResolverFactoryInterface {
public:
    // prevent constructor by default
    WrappingAsyncDnsResolverFactory& operator=(WrappingAsyncDnsResolverFactory const&);
    WrappingAsyncDnsResolverFactory(WrappingAsyncDnsResolverFactory const&);
    WrappingAsyncDnsResolverFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WrappingAsyncDnsResolverFactory@webrtc@@UEAA@XZ
    virtual ~WrappingAsyncDnsResolverFactory() = default;

    // vIndex: 1, symbol:
    // ?CreateAndResolve@WrappingAsyncDnsResolverFactory@webrtc@@UEAA?AV?$unique_ptr@VAsyncDnsResolverInterface@webrtc@@U?$default_delete@VAsyncDnsResolverInterface@webrtc@@@std@@@std@@AEBVSocketAddress@rtc@@V?$function@$$A6AXXZ@4@@Z
    virtual std::unique_ptr<class webrtc::AsyncDnsResolverInterface>
    CreateAndResolve(class rtc::SocketAddress const&, std::function<void(void)>);

    // vIndex: 2, symbol:
    // ?CreateAndResolve@WrappingAsyncDnsResolverFactory@webrtc@@UEAA?AV?$unique_ptr@VAsyncDnsResolverInterface@webrtc@@U?$default_delete@VAsyncDnsResolverInterface@webrtc@@@std@@@std@@AEBVSocketAddress@rtc@@HV?$function@$$A6AXXZ@4@@Z
    virtual std::unique_ptr<class webrtc::AsyncDnsResolverInterface>
    CreateAndResolve(class rtc::SocketAddress const&, int, std::function<void(void)>);

    // vIndex: 3, symbol:
    // ?Create@WrappingAsyncDnsResolverFactory@webrtc@@UEAA?AV?$unique_ptr@VAsyncDnsResolverInterface@webrtc@@U?$default_delete@VAsyncDnsResolverInterface@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::AsyncDnsResolverInterface> Create();

    // NOLINTEND
};

}; // namespace webrtc
