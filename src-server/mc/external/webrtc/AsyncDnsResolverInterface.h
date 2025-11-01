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
    // vIndex: 0
    virtual ~AsyncDnsResolverInterface() = default;

    // vIndex: 2
    virtual void Start(::rtc::SocketAddress const&, ::absl::AnyInvocable<void()>) = 0;

    // vIndex: 1
    virtual void Start(::rtc::SocketAddress const&, int, ::absl::AnyInvocable<void()>) = 0;

    // vIndex: 3
    virtual ::webrtc::AsyncDnsResolverResult const& result() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
