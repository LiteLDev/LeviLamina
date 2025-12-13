#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/UDPPort.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Network; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class SocketAddress; }
namespace rtc { class Thread; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace cricket {

class StunPort : public ::cricket::UDPPort {
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
        ::rtc::Thread*                                                                thread,
        ::rtc::PacketSocketFactory*                                                   factory,
        ::rtc::Network const*                                                         network,
        ushort                                                                        min_port,
        ushort                                                                        max_port,
        ::std::string_view                                                            username,
        ::std::string_view                                                            password,
        ::std::set<::rtc::SocketAddress> const&                                       servers,
        ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const& mapped_ports,
        ::webrtc::FieldTrialsView const*                                              field_trials
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::cricket::StunPort> Create(
        ::rtc::Thread*                                                                thread,
        ::rtc::PacketSocketFactory*                                                   factory,
        ::rtc::Network const*                                                         network,
        ushort                                                                        min_port,
        ushort                                                                        max_port,
        ::std::string_view                                                            username,
        ::std::string_view                                                            password,
        ::std::set<::rtc::SocketAddress> const&                                       servers,
        ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const& mapped_ports,
        ::std::optional<int>                                                          stun_keepalive_interval,
        ::webrtc::FieldTrialsView const*                                              field_trials
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::Thread*                                                                thread,
        ::rtc::PacketSocketFactory*                                                   factory,
        ::rtc::Network const*                                                         network,
        ushort                                                                        min_port,
        ushort                                                                        max_port,
        ::std::string_view                                                            username,
        ::std::string_view                                                            password,
        ::std::set<::rtc::SocketAddress> const&                                       servers,
        ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const& mapped_ports,
        ::webrtc::FieldTrialsView const*                                              field_trials
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
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForPortInterface();
    // NOLINTEND
};

} // namespace cricket
