#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ProtocolType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class SocketAddress; }
namespace webrtc { class StaticStunServer; }
namespace webrtc { struct RelayServerConfig; }
// clang-format on

namespace webrtc {

struct PortConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkf40cb1;
    ::ll::UntypedStorage<8, 16> mUnk84e200;
    ::ll::UntypedStorage<8, 24> mUnk367ee9;
    ::ll::UntypedStorage<8, 32> mUnk2e381d;
    ::ll::UntypedStorage<8, 32> mUnk2c8428;
    ::ll::UntypedStorage<1, 1>  mUnk95606c;
    ::ll::UntypedStorage<8, 24> mUnka822db;
    // NOLINTEND

public:
    // prevent constructor by default
    PortConfiguration& operator=(PortConfiguration const&);
    PortConfiguration(PortConfiguration const&);
    PortConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::set<::webrtc::SocketAddress> GetRelayServerAddresses(::webrtc::ProtocolType type) const;

    MCNAPI PortConfiguration(
        ::std::set<::webrtc::SocketAddress> const&                                stun_servers,
        ::std::vector<::std::shared_ptr<::webrtc::StaticStunServer const>> const& static_stun_servers_,
        ::std::string_view                                                        username,
        ::std::string_view                                                        password,
        ::webrtc::FieldTrialsView const*                                          field_trials
    );

    MCNAPI ::std::set<::webrtc::SocketAddress> StunServers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::set<::webrtc::SocketAddress> const&                                stun_servers,
        ::std::vector<::std::shared_ptr<::webrtc::StaticStunServer const>> const& static_stun_servers_,
        ::std::string_view                                                        username,
        ::std::string_view                                                        password,
        ::webrtc::FieldTrialsView const*                                          field_trials
    );
    // NOLINTEND
};

} // namespace webrtc
