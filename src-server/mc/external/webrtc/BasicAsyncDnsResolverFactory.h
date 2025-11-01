#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/AsyncDnsResolverFactoryInterface.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
namespace webrtc { class AsyncDnsResolverInterface; }
// clang-format on

namespace webrtc {

class BasicAsyncDnsResolverFactory : public ::webrtc::AsyncDnsResolverFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> CreateAndResolve(::rtc::SocketAddress const& addr, ::absl::AnyInvocable<void()> callback) /*override*/;

    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> CreateAndResolve(::rtc::SocketAddress const& addr, int family, ::absl::AnyInvocable<void()> callback) /*override*/;

    // vIndex: 3
    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> Create() /*override*/;

    // vIndex: 0
    virtual ~BasicAsyncDnsResolverFactory() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> $CreateAndResolve(::rtc::SocketAddress const& addr, ::absl::AnyInvocable<void()> callback);

    MCNAPI ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> $CreateAndResolve(::rtc::SocketAddress const& addr, int family, ::absl::AnyInvocable<void()> callback);

    MCNAPI ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> $Create();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
