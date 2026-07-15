#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/external/webrtc/PortPrunePolicy.h"
#include "mc/external/webrtc/VpnPreference.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Candidate; }
namespace webrtc { class CandidateStats; }
namespace webrtc { class NetworkMask; }
namespace webrtc { class PortAllocatorSession; }
namespace webrtc { class SocketAddress; }
namespace webrtc { class StaticStunServer; }
namespace webrtc { class TurnCustomizer; }
namespace webrtc { struct IceParameters; }
namespace webrtc { struct RelayServerConfig; }
// clang-format on

namespace webrtc {

class PortAllocator : public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk8dbcde;
    ::ll::UntypedStorage<1, 1>  mUnk13b5df;
    ::ll::UntypedStorage<4, 4>  mUnk1e12a6;
    ::ll::UntypedStorage<4, 4>  mUnkf29197;
    ::ll::UntypedStorage<4, 4>  mUnka12a83;
    ::ll::UntypedStorage<4, 4>  mUnk811a61;
    ::ll::UntypedStorage<4, 4>  mUnk28b738;
    ::ll::UntypedStorage<1, 1>  mUnk9c4b4e;
    ::ll::UntypedStorage<4, 4>  mUnk176c1c;
    ::ll::UntypedStorage<8, 32> mUnkd7803e;
    ::ll::UntypedStorage<1, 1>  mUnk37bc4f;
    ::ll::UntypedStorage<4, 4>  mUnkf0ec78;
    ::ll::UntypedStorage<8, 16> mUnkf0a644;
    ::ll::UntypedStorage<8, 24> mUnkbe5aec;
    ::ll::UntypedStorage<8, 24> mUnk6c0d0f;
    ::ll::UntypedStorage<4, 4>  mUnkf945e5;
    ::ll::UntypedStorage<8, 24> mUnkf53c32;
    ::ll::UntypedStorage<4, 4>  mUnkcbfad7;
    ::ll::UntypedStorage<8, 8>  mUnk4be60e;
    ::ll::UntypedStorage<4, 8>  mUnkce1b6f;
    ::ll::UntypedStorage<1, 1>  mUnkcaf361;
    ::ll::UntypedStorage<8, 8>  mUnk14ead2;
    // NOLINTEND

public:
    // prevent constructor by default
    PortAllocator& operator=(PortAllocator const&);
    PortAllocator(PortAllocator const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PortAllocator() /*override*/;

    virtual void Initialize();

    virtual void set_restrict_ice_credentials_change(bool value);

    virtual void SetNetworkIgnoreMask(int network_ignore_mask) = 0;

    virtual void SetVpnPreference(::webrtc::VpnPreference preference);

    virtual void SetVpnList(::std::vector<::webrtc::NetworkMask> const& vpn_list);

    virtual void GetCandidateStatsFromPooledSessions(::std::vector<::webrtc::CandidateStats>* candidate_stats_list);

    virtual ::webrtc::PortAllocatorSession* CreateSessionInternal(
        ::std::string_view content_name,
        int                component,
        ::std::string_view ice_ufrag,
        ::std::string_view ice_pwd
    ) = 0;

    virtual bool MdnsObfuscationEnabled() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::PortAllocatorSession> CreateSession(
        ::std::string_view content_name,
        int                component,
        ::std::string_view ice_ufrag,
        ::std::string_view ice_pwd
    );

    MCNAPI void DiscardCandidatePool();

    MCNAPI ::std::_Vector_const_iterator<
        ::std::_Vector_val<::std::_Simple_types<::std::unique_ptr<::webrtc::PortAllocatorSession>>>>
    FindPooledSession(::webrtc::IceParameters const* ice_credentials) const;

    MCNAPI ::std::vector<::webrtc::IceParameters> GetPooledIceCredentials();

    MCNAPI PortAllocator();

    MCNAPI ::webrtc::Candidate SanitizeCandidate(::webrtc::Candidate const& c) const;

    MCNAPI void SetCandidateFilter(uint filter);

    MCNAPI bool SetConfiguration(
        ::std::set<::webrtc::SocketAddress> const&                                stun_servers,
        ::std::vector<::webrtc::RelayServerConfig> const&                         turn_servers,
        ::std::vector<::std::shared_ptr<::webrtc::StaticStunServer const>> const& static_stun_servers,
        int                                                                       candidate_pool_size,
        ::webrtc::PortPrunePolicy                                                 turn_port_prune_policy,
        ::webrtc::TurnCustomizer*                                                 turn_customizer,
        ::std::optional<int> const&                                               stun_candidate_keepalive_interval
    );

    MCNAPI ::std::unique_ptr<::webrtc::PortAllocatorSession> TakePooledSession(
        ::std::string_view content_name,
        int                component,
        ::std::string_view ice_ufrag,
        ::std::string_view ice_pwd
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Initialize();

    MCNAPI void $set_restrict_ice_credentials_change(bool value);

    MCNAPI void $SetVpnPreference(::webrtc::VpnPreference preference);

    MCNAPI void $SetVpnList(::std::vector<::webrtc::NetworkMask> const& vpn_list);

    MCNAPI void $GetCandidateStatsFromPooledSessions(::std::vector<::webrtc::CandidateStats>* candidate_stats_list);

    MCNAPI bool $MdnsObfuscationEnabled() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
