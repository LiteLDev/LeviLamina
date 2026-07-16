#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncDnsResolverResult; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class AsyncDnsResolverInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncDnsResolverInterface() = default;

    virtual void Start(::webrtc::SocketAddress const& addr, ::absl::AnyInvocable<void()> callback) = 0;

    virtual void Start(::webrtc::SocketAddress const& addr, int family, ::absl::AnyInvocable<void()> callback) = 0;

    virtual ::webrtc::AsyncDnsResolverResult const& result() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
