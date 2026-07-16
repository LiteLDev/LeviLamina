#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/Port.h"
#include "mc/external/webrtc/UDPPort.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
namespace webrtc { class StaticStunServer; }
// clang-format on

namespace webrtc {

class StunPort : public ::webrtc::UDPPort {
public:
    // prevent constructor by default
    StunPort();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void PrepareAddress() /*override*/;

    virtual ~StunPort() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StunPort(
        ::webrtc::Port::PortParametersRef const&                                  args,
        ushort                                                                    min_port,
        ushort                                                                    max_port,
        ::std::set<::webrtc::SocketAddress> const&                                servers,
        ::std::vector<::std::shared_ptr<::webrtc::StaticStunServer const>> const& static_stun_servers
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::StunPort> Create(
        ::webrtc::Port::PortParametersRef const&                                  args,
        ushort                                                                    min_port,
        ushort                                                                    max_port,
        ::std::set<::webrtc::SocketAddress> const&                                servers,
        ::std::vector<::std::shared_ptr<::webrtc::StaticStunServer const>> const& static_stun_servers,
        ::std::optional<int>                                                      stun_keepalive_interval
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Port::PortParametersRef const&                                  args,
        ushort                                                                    min_port,
        ushort                                                                    max_port,
        ::std::set<::webrtc::SocketAddress> const&                                servers,
        ::std::vector<::std::shared_ptr<::webrtc::StaticStunServer const>> const& static_stun_servers
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $PrepareAddress();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPortInterface();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace webrtc
