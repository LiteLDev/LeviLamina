#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/NetworkBindingResult.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IPAddress; }
// clang-format on

namespace webrtc {

class NetworkBinderInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::NetworkBindingResult BindSocketToNetwork(int socket_fd, ::webrtc::IPAddress const& address) = 0;

    virtual ~NetworkBinderInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
