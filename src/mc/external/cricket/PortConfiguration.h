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
    // prevent constructor by default
    PortConfiguration& operator=(PortConfiguration const&);
    PortConfiguration(PortConfiguration const&);
    PortConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddRelay(::cricket::RelayServerConfig const&);

    MCAPI ::std::set<::rtc::SocketAddress> GetRelayServerAddresses(::cricket::ProtocolType) const;

    MCAPI
    PortConfiguration(::std::set<::rtc::SocketAddress> const&, ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const&, ::std::string_view, ::std::string_view, ::webrtc::FieldTrialsView const*);

    MCAPI ::std::set<::rtc::SocketAddress> StunServers();

    MCAPI bool SupportsProtocol(::cricket::RelayServerConfig const&, ::cricket::ProtocolType) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::set<::rtc::SocketAddress> const&, ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const&, ::std::string_view, ::std::string_view, ::webrtc::FieldTrialsView const*);
    // NOLINTEND
};

} // namespace cricket
