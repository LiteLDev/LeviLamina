#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
namespace webrtc { class AsyncDnsResolverInterface; }
// clang-format on

namespace webrtc {

class AsyncDnsResolverFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncDnsResolverFactoryInterface() = default;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>
    CreateAndResolve(::rtc::SocketAddress const&, ::absl::AnyInvocable<void()>) = 0;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>
    CreateAndResolve(::rtc::SocketAddress const&, int, ::absl::AnyInvocable<void()>) = 0;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> Create() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
