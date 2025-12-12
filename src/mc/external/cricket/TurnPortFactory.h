#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/RelayPortFactoryInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Port; }
namespace cricket { struct CreateRelayPortArgs; }
namespace rtc { class AsyncPacketSocket; }
// clang-format on

namespace cricket {

class TurnPortFactory : public ::cricket::RelayPortFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TurnPortFactory() /*override*/;

    virtual ::std::unique_ptr<::cricket::Port> Create(
        ::cricket::CreateRelayPortArgs const&       args,
        ::std::shared_ptr<::rtc::AsyncPacketSocket> udp_socket
    ) /*override*/;

    virtual ::std::unique_ptr<::cricket::Port>
    Create(::cricket::CreateRelayPortArgs const& args, int min_port, int max_port) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::cricket::Port>
    $Create(::cricket::CreateRelayPortArgs const& args, ::std::shared_ptr<::rtc::AsyncPacketSocket> udp_socket);

    MCNAPI ::std::unique_ptr<::cricket::Port>
    $Create(::cricket::CreateRelayPortArgs const& args, int min_port, int max_port);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
