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
    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>
    CreateAndResolve(::rtc::SocketAddress const& addr, ::absl::AnyInvocable<void()> callback) /*override*/;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>
    CreateAndResolve(::rtc::SocketAddress const& addr, int family, ::absl::AnyInvocable<void()> callback) /*override*/;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> Create() /*override*/;

    virtual ~BasicAsyncDnsResolverFactory() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>
    $CreateAndResolve(::rtc::SocketAddress const& addr, ::absl::AnyInvocable<void()> callback);

    MCNAPI ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>
    $CreateAndResolve(::rtc::SocketAddress const& addr, int family, ::absl::AnyInvocable<void()> callback);

    MCNAPI ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> $Create();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
