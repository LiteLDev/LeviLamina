#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ProtocolType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct RelayServerConfig; }
namespace rtc { class SocketAddress; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace cricket {

struct PortConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk3c1af0;
    ::ll::UntypedStorage<8, 16> mUnk5a542f;
    ::ll::UntypedStorage<8, 24> mUnkd36a8d;
    ::ll::UntypedStorage<8, 32> mUnka4cebf;
    ::ll::UntypedStorage<8, 32> mUnk41bfd3;
    ::ll::UntypedStorage<1, 1> mUnk27d0d4;
    ::ll::UntypedStorage<8, 24> mUnk4698cb;
    // NOLINTEND

public:
    // prevent constructor by default
    PortConfiguration& operator=(PortConfiguration const&);
    PortConfiguration(PortConfiguration const&);
    PortConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddRelay(::cricket::RelayServerConfig const& config);

    MCNAPI ::std::set<::rtc::SocketAddress> GetRelayServerAddresses(::cricket::ProtocolType type) const;

    MCNAPI PortConfiguration(::std::set<::rtc::SocketAddress> const& stun_servers, ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const& mapped_ports_, ::std::string_view username, ::std::string_view password, ::webrtc::FieldTrialsView const* field_trials);

    MCNAPI ::std::set<::rtc::SocketAddress> StunServers();

    MCNAPI bool SupportsProtocol(::cricket::RelayServerConfig const& relay, ::cricket::ProtocolType type) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::set<::rtc::SocketAddress> const& stun_servers, ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const& mapped_ports_, ::std::string_view username, ::std::string_view password, ::webrtc::FieldTrialsView const* field_trials);
    // NOLINTEND

};

}
