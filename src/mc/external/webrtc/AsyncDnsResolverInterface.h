#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
namespace webrtc { class AsyncDnsResolverResult; }
// clang-format on

namespace webrtc {

class AsyncDnsResolverInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncDnsResolverInterface() = default;

    virtual void Start(::rtc::SocketAddress const&, ::absl::AnyInvocable<void()>) = 0;

    virtual void Start(::rtc::SocketAddress const&, int, ::absl::AnyInvocable<void()>) = 0;

    virtual ::webrtc::AsyncDnsResolverResult const& result() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
