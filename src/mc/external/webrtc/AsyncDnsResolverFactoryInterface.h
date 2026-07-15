#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class AsyncDnsResolverFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncDnsResolverFactoryInterface() = default;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>
    CreateAndResolve(::webrtc::SocketAddress const& addr, ::absl::AnyInvocable<void()> callback) = 0;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>
    CreateAndResolve(::webrtc::SocketAddress const& addr, int family, ::absl::AnyInvocable<void()> callback) = 0;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> Create() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
