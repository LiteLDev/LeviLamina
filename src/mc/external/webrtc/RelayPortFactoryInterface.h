#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class Port; }
namespace webrtc { struct CreateRelayPortArgs; }
// clang-format on

namespace webrtc {

class RelayPortFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RelayPortFactoryInterface() = default;

    virtual ::std::unique_ptr<::webrtc::Port>
    Create(::webrtc::CreateRelayPortArgs const& args, ::std::shared_ptr<::webrtc::AsyncPacketSocket> udp_socket) = 0;

    virtual ::std::unique_ptr<::webrtc::Port>
    Create(::webrtc::CreateRelayPortArgs const& args, int min_port, int max_port) = 0;
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
