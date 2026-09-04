#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RelayPortFactoryInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class Port; }
namespace webrtc { struct CreateRelayPortArgs; }
// clang-format on

namespace webrtc {

class TurnPortFactory : public ::webrtc::RelayPortFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TurnPortFactory() /*override*/;

    virtual ::std::unique_ptr<::webrtc::Port>
    Create(::webrtc::CreateRelayPortArgs const& args, int min_port, int max_port) /*override*/;

    virtual ::std::unique_ptr<::webrtc::Port> Create(
        ::webrtc::CreateRelayPortArgs const&           args,
        ::std::shared_ptr<::webrtc::AsyncPacketSocket> udp_socket
    ) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::Port>
    $Create(::webrtc::CreateRelayPortArgs const& args, int min_port, int max_port);

    MCNAPI ::std::unique_ptr<::webrtc::Port>
    $Create(::webrtc::CreateRelayPortArgs const& args, ::std::shared_ptr<::webrtc::AsyncPacketSocket> udp_socket);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
