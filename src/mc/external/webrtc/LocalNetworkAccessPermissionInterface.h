#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/LocalNetworkAccessPermissionStatus.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class LocalNetworkAccessPermissionInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalNetworkAccessPermissionInterface() = default;

    virtual bool ShouldRequestPermission(::webrtc::SocketAddress const&);

    virtual void RequestPermission(
        ::webrtc::SocketAddress const&,
        ::absl::AnyInvocable<void(::webrtc::LocalNetworkAccessPermissionStatus)>
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
