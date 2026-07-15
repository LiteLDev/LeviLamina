#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/IceAgentInterface.h"
#include "mc/external/webrtc/IceGatheringState.h"
#include "mc/external/webrtc/IceMode.h"
#include "mc/external/webrtc/IceRole.h"
#include "mc/external/webrtc/IceSwitchReason.h"
#include "mc/external/webrtc/IceTransportInternal.h"
#include "mc/external/webrtc/IceTransportState.h"
#include "mc/external/webrtc/IceTransportStateInternal.h"
#include "mc/external/webrtc/LocalNetworkAccessPermissionStatus.h"
#include "mc/external/webrtc/ProtocolType.h"
#include "mc/external/webrtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ActiveIceControllerFactoryInterface; }
namespace webrtc { class AsyncDnsResolverFactoryInterface; }
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class AsyncDnsResolverResult; }
namespace webrtc { class Candidate; }
namespace webrtc { class Connection; }
namespace webrtc { class DtlsStunPiggybackCallbacks; }
namespace webrtc { class Environment; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class IceControllerFactoryInterface; }
namespace webrtc { class IceMessage; }
namespace webrtc { class IceTransportInit; }
namespace webrtc { class LocalNetworkAccessPermissionFactoryInterface; }
namespace webrtc { class LocalNetworkAccessPermissionInterface; }
namespace webrtc { class PortAllocator; }
namespace webrtc { class PortAllocatorSession; }
namespace webrtc { class PortInterface; }
namespace webrtc { class SocketAddress; }
namespace webrtc { class StunDictionaryWriter; }
namespace webrtc { struct AsyncSocketPacketOptions; }
namespace webrtc { struct CandidatePair; }
namespace webrtc { struct IceCandidateErrorEvent; }
namespace webrtc { struct IceConfig; }
namespace webrtc { struct IceParameters; }
namespace webrtc { struct IceTransportStats; }
namespace webrtc { struct NetworkRoute; }
namespace webrtc { struct SentPacketInfo; }
// clang-format on

namespace webrtc {

class P2PTransportChannel : public ::webrtc::IceTransportInternal, public ::webrtc::IceAgentInterface {
public:
    // P2PTransportChannel inner types declare
    // clang-format off
    struct CandidateAndPermission;
    struct CandidateAndResolver;
    // clang-format on

    // P2PTransportChannel inner types define
    struct CandidateAndPermission {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 528> mUnkdc9ac8;
        ::ll::UntypedStorage<8, 8>   mUnk801293;
        // NOLINTEND

    public:
        // prevent constructor by default
        CandidateAndPermission& operator=(CandidateAndPermission const&);
        CandidateAndPermission(CandidateAndPermission const&);
        CandidateAndPermission();
    };

    struct CandidateAndResolver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 528> mUnk175a53;
        ::ll::UntypedStorage<8, 8>   mUnk807731;
        // NOLINTEND

    public:
        // prevent constructor by default
        CandidateAndResolver& operator=(CandidateAndResolver const&);
        CandidateAndResolver(CandidateAndResolver const&);
        CandidateAndResolver();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>  mUnkc7c778;
    ::ll::UntypedStorage<8, 32>  mUnkde92b6;
    ::ll::UntypedStorage<4, 4>   mUnke0f315;
    ::ll::UntypedStorage<8, 8>   mUnk1319a2;
    ::ll::UntypedStorage<8, 8>   mUnka8eed9;
    ::ll::UntypedStorage<8, 8>   mUnka07ab3;
    ::ll::UntypedStorage<8, 8>   mUnkef0c93;
    ::ll::UntypedStorage<8, 8>   mUnk1d74be;
    ::ll::UntypedStorage<1, 1>   mUnk395f7d;
    ::ll::UntypedStorage<4, 4>   mUnkc48560;
    ::ll::UntypedStorage<8, 24>  mUnk2a5070;
    ::ll::UntypedStorage<8, 24>  mUnk577d3a;
    ::ll::UntypedStorage<8, 24>  mUnk8d628f;
    ::ll::UntypedStorage<8, 8>   mUnk4c1e5c;
    ::ll::UntypedStorage<8, 24>  mUnk1cd045;
    ::ll::UntypedStorage<8, 24>  mUnke24ff9;
    ::ll::UntypedStorage<1, 1>   mUnk6dbc24;
    ::ll::UntypedStorage<8, 16>  mUnkc3f5d7;
    ::ll::UntypedStorage<8, 72>  mUnkd3e9df;
    ::ll::UntypedStorage<8, 24>  mUnk94e314;
    ::ll::UntypedStorage<4, 4>   mUnkb1f848;
    ::ll::UntypedStorage<4, 4>   mUnkf50505;
    ::ll::UntypedStorage<4, 4>   mUnk8e4414;
    ::ll::UntypedStorage<8, 8>   mUnk9a15d4;
    ::ll::UntypedStorage<8, 8>   mUnk16867c;
    ::ll::UntypedStorage<4, 4>   mUnkf14066;
    ::ll::UntypedStorage<4, 4>   mUnkd04041;
    ::ll::UntypedStorage<4, 4>   mUnkb4c889;
    ::ll::UntypedStorage<4, 128> mUnk1cde3f;
    ::ll::UntypedStorage<4, 4>   mUnk639e58;
    ::ll::UntypedStorage<4, 4>   mUnk5e8551;
    ::ll::UntypedStorage<1, 1>   mUnk973d78;
    ::ll::UntypedStorage<1, 1>   mUnkf9a9c2;
    ::ll::UntypedStorage<1, 1>   mUnk35118b;
    ::ll::UntypedStorage<4, 40>  mUnkefe9e8;
    ::ll::UntypedStorage<8, 72>  mUnk91b932;
    ::ll::UntypedStorage<8, 8>   mUnkd629fc;
    ::ll::UntypedStorage<8, 24>  mUnka78b59;
    ::ll::UntypedStorage<8, 24>  mUnkcee33b;
    ::ll::UntypedStorage<8, 8>   mUnk3b742d;
    ::ll::UntypedStorage<8, 8>   mUnk15e299;
    ::ll::UntypedStorage<8, 8>   mUnk9f5816;
    ::ll::UntypedStorage<8, 8>   mUnka600bf;
    ::ll::UntypedStorage<4, 4>   mUnke026d1;
    ::ll::UntypedStorage<8, 8>   mUnk9e4e9b;
    ::ll::UntypedStorage<4, 60>  mUnk702fd5;
    ::ll::UntypedStorage<8, 64>  mUnk82a0c0;
    ::ll::UntypedStorage<8, 40>  mUnkd3cde6;
    ::ll::UntypedStorage<8, 64>  mUnka83f7a;
    // NOLINTEND

public:
    // prevent constructor by default
    P2PTransportChannel& operator=(P2PTransportChannel const&);
    P2PTransportChannel(P2PTransportChannel const&);
    P2PTransportChannel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~P2PTransportChannel() /*override*/;

    virtual ::webrtc::IceTransportStateInternal GetState() const /*override*/;

    virtual ::webrtc::IceTransportState GetIceTransportState() const /*override*/;

    virtual ::std::string const& transport_name() const /*override*/;

    virtual int component() const /*override*/;

    virtual bool writable() const /*override*/;

    virtual bool receiving() const /*override*/;

    virtual void SetIceRole(::webrtc::IceRole ice_role) /*override*/;

    virtual ::webrtc::IceRole GetIceRole() const /*override*/;

    virtual void SetIceParameters(::webrtc::IceParameters const& ice_params) /*override*/;

    virtual void SetRemoteIceParameters(::webrtc::IceParameters const& ice_params) /*override*/;

    virtual void SetRemoteIceMode(::webrtc::IceMode mode) /*override*/;

    virtual void MaybeStartGathering() /*override*/;

    virtual ::webrtc::IceGatheringState gathering_state() const /*override*/;

    virtual void AddRemoteCandidate(::webrtc::Candidate const& candidate) /*override*/;

    virtual void RemoveRemoteCandidate(::webrtc::Candidate const& cand_to_remove) /*override*/;

    virtual void RemoveAllRemoteCandidates() /*override*/;

    virtual void SetIceConfig(::webrtc::IceConfig const& config) /*override*/;

    virtual ::webrtc::IceConfig const& config() const /*override*/;

    virtual int
    SendPacket(char const* data, uint64 len, ::webrtc::AsyncSocketPacketOptions const& options, int flags) /*override*/;

    virtual int SetOption(::webrtc::Socket::Option opt, int value) /*override*/;

    virtual bool GetOption(::webrtc::Socket::Option opt, int* value) /*override*/;

    virtual int GetError() /*override*/;

    virtual bool GetStats(::webrtc::IceTransportStats* ice_transport_stats) /*override*/;

    virtual ::std::optional<int> GetRttEstimate() /*override*/;

    virtual ::webrtc::Connection const* selected_connection() const /*override*/;

    virtual ::std::optional<::webrtc::CandidatePair const> GetSelectedCandidatePair() const /*override*/;

    virtual void OnStartedPinging() /*override*/;

    virtual int64 GetLastPingSentMs() const /*override*/;

    virtual void UpdateConnectionStates() /*override*/;

    virtual void UpdateState() /*override*/;

    virtual void SendPingRequest(::webrtc::Connection const* connection) /*override*/;

    virtual void
    SwitchSelectedConnection(::webrtc::Connection const* new_connection, ::webrtc::IceSwitchReason reason) /*override*/;

    virtual void ForgetLearnedStateForConnections(
        ::webrtc::ArrayView<::webrtc::Connection const* const, 18446744073709546905> connections
    ) /*override*/;

    virtual bool PruneConnections(
        ::webrtc::ArrayView<::webrtc::Connection const* const, 18446744073709546905> connections
    ) /*override*/;

    virtual ::std::optional<::webrtc::NetworkRoute> network_route() const /*override*/;

    virtual ::std::optional<::std::reference_wrapper<::webrtc::StunDictionaryWriter>>
    GetDictionaryWriter() /*override*/;

    virtual ::webrtc::FieldTrialsView const* field_trials() const /*override*/;

    virtual void ResetDtlsStunPiggybackCallbacks() /*override*/;

    virtual void SetDtlsStunPiggybackCallbacks(::webrtc::DtlsStunPiggybackCallbacks&& callbacks) /*override*/;

    virtual ::webrtc::IceParameters const* local_ice_parameters() const /*override*/;

    virtual ::webrtc::IceParameters const* remote_ice_parameters() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddAllocatorSession(::std::unique_ptr<::webrtc::PortAllocatorSession> session);

    MCNAPI void AddConnection(::webrtc::Connection* connection);

    MCNAPI void
    AddRemoteCandidateWithResult(::webrtc::Candidate candidate, ::webrtc::AsyncDnsResolverResult const& result);

    MCNAPI void CheckLocalNetworkAccessPermission(::webrtc::Candidate const& candidate);

    MCNAPI ::webrtc::IceTransportState ComputeIceTransportState() const;

    MCNAPI ::webrtc::IceTransportStateInternal ComputeState() const;

    MCNAPI ::webrtc::NetworkRoute ConfigureNetworkRoute(::webrtc::Connection const* conn);

    MCNAPI bool CreateConnection(
        ::webrtc::PortInterface*   port,
        ::webrtc::Candidate const& remote_candidate,
        ::webrtc::PortInterface*   origin_port
    );

    MCNAPI void FinishAddingRemoteCandidate(::webrtc::Candidate const& new_remote_candidate);

    MCNAPI void HandleAllTimedOut();

    MCNAPI bool IsDuplicateRemoteCandidate(::webrtc::Candidate const& candidate);

    MCNAPI void OnCandidateError(::webrtc::PortAllocatorSession*, ::webrtc::IceCandidateErrorEvent const& event);

    MCNAPI void OnCandidateFilterChanged(uint prev_filter, uint cur_filter);

    MCNAPI void OnCandidateResolved(::webrtc::AsyncDnsResolverInterface* resolver);

    MCNAPI void OnCandidatesAllocationDone(::webrtc::PortAllocatorSession*);

    MCNAPI void
    OnCandidatesReady(::webrtc::PortAllocatorSession*, ::std::vector<::webrtc::Candidate> const& candidates);

    MCNAPI void
    OnCandidatesRemoved(::webrtc::PortAllocatorSession* session, ::std::vector<::webrtc::Candidate> const& candidates);

    MCNAPI void OnConnectionDestroyed(::webrtc::Connection* connection);

    MCNAPI void OnConnectionStateChange(::webrtc::Connection* connection);

    MCNAPI void OnLocalNetworkAccessResult(
        ::webrtc::LocalNetworkAccessPermissionInterface* permission_query,
        ::webrtc::LocalNetworkAccessPermissionStatus     status
    );

    MCNAPI void OnNominated(::webrtc::Connection* conn);

    MCNAPI void OnPortReady(::webrtc::PortAllocatorSession*, ::webrtc::PortInterface* port);

    MCNAPI void OnPortsPruned(::webrtc::PortAllocatorSession*, ::std::vector<::webrtc::PortInterface*> const& ports);

    MCNAPI void OnReadyToSend(::webrtc::Connection* connection);

    MCNAPI void OnSelectedConnectionDestroyed();

    MCNAPI void OnSentPacket(::webrtc::SentPacketInfo const& sent_packet);

    MCNAPI void OnUnknownAddress(
        ::webrtc::PortInterface*       port,
        ::webrtc::SocketAddress const& address,
        ::webrtc::ProtocolType         proto,
        ::webrtc::IceMessage*          stun_msg,
        ::std::string const&           remote_username,
        bool                           port_muxed
    );

    MCNAPI P2PTransportChannel(
        ::webrtc::Environment const&                                  env,
        ::std::string_view                                            transport_name,
        int                                                           component,
        ::webrtc::PortAllocator*                                      allocator,
        ::webrtc::AsyncDnsResolverFactoryInterface*                   async_dns_resolver_factory,
        ::std::unique_ptr<::webrtc::AsyncDnsResolverFactoryInterface> owned_dns_resolver_factory,
        ::webrtc::LocalNetworkAccessPermissionFactoryInterface*       lna_permission_factory,
        ::webrtc::IceControllerFactoryInterface*                      ice_controller_factory,
        ::webrtc::ActiveIceControllerFactoryInterface*                active_ice_controller_factory
    );

    MCNAPI void ParseFieldTrials(::webrtc::FieldTrialsView const& field_trials);

    MCNAPI bool PresumedWritable(::webrtc::Connection const* conn) const;

    MCNAPI void
    RememberRemoteCandidate(::webrtc::Candidate const& remote_candidate, ::webrtc::PortInterface* origin_port);

    MCNAPI void RemoveConnection(::webrtc::Connection* connection);

    MCNAPI void ResolveHostnameCandidate(::webrtc::Candidate const& candidate);

    MCNAPI ::webrtc::Candidate SanitizeRemoteCandidate(::webrtc::Candidate const& c) const;

    MCNAPI void SendPingRequestInternal(::webrtc::Connection* connection);

    MCNAPI void SwitchSelectedConnectionInternal(::webrtc::Connection* conn, ::webrtc::IceSwitchReason reason);

    MCNAPI ::std::string ToString() const;

    MCNAPI void UpdateTransportState();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::P2PTransportChannel>
    Create(::std::string_view transport_name, int component, ::webrtc::IceTransportInit init);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Environment const&                                  env,
        ::std::string_view                                            transport_name,
        int                                                           component,
        ::webrtc::PortAllocator*                                      allocator,
        ::webrtc::AsyncDnsResolverFactoryInterface*                   async_dns_resolver_factory,
        ::std::unique_ptr<::webrtc::AsyncDnsResolverFactoryInterface> owned_dns_resolver_factory,
        ::webrtc::LocalNetworkAccessPermissionFactoryInterface*       lna_permission_factory,
        ::webrtc::IceControllerFactoryInterface*                      ice_controller_factory,
        ::webrtc::ActiveIceControllerFactoryInterface*                active_ice_controller_factory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::IceTransportStateInternal $GetState() const;

    MCNAPI ::webrtc::IceTransportState $GetIceTransportState() const;

    MCNAPI ::std::string const& $transport_name() const;

    MCNAPI int $component() const;

    MCNAPI bool $writable() const;

    MCNAPI bool $receiving() const;

    MCNAPI void $SetIceRole(::webrtc::IceRole ice_role);

    MCNAPI ::webrtc::IceRole $GetIceRole() const;

    MCNAPI void $SetIceParameters(::webrtc::IceParameters const& ice_params);

    MCNAPI void $SetRemoteIceParameters(::webrtc::IceParameters const& ice_params);

    MCNAPI void $SetRemoteIceMode(::webrtc::IceMode mode);

    MCNAPI void $MaybeStartGathering();

    MCNAPI ::webrtc::IceGatheringState $gathering_state() const;

    MCNAPI void $AddRemoteCandidate(::webrtc::Candidate const& candidate);

    MCNAPI void $RemoveRemoteCandidate(::webrtc::Candidate const& cand_to_remove);

    MCNAPI void $RemoveAllRemoteCandidates();

    MCNAPI void $SetIceConfig(::webrtc::IceConfig const& config);

    MCNAPI ::webrtc::IceConfig const& $config() const;

    MCNAPI int $SendPacket(char const* data, uint64 len, ::webrtc::AsyncSocketPacketOptions const& options, int flags);

    MCNAPI int $SetOption(::webrtc::Socket::Option opt, int value);

    MCNAPI bool $GetOption(::webrtc::Socket::Option opt, int* value);

    MCNAPI int $GetError();

    MCNAPI bool $GetStats(::webrtc::IceTransportStats* ice_transport_stats);

    MCNAPI ::std::optional<int> $GetRttEstimate();

    MCNAPI ::webrtc::Connection const* $selected_connection() const;

    MCNAPI ::std::optional<::webrtc::CandidatePair const> $GetSelectedCandidatePair() const;

    MCNAPI void $OnStartedPinging();

    MCNAPI int64 $GetLastPingSentMs() const;

    MCNAPI void $UpdateConnectionStates();

    MCNAPI void $UpdateState();

    MCNAPI void $SendPingRequest(::webrtc::Connection const* connection);

    MCNAPI void $SwitchSelectedConnection(::webrtc::Connection const* new_connection, ::webrtc::IceSwitchReason reason);

    MCNAPI void $ForgetLearnedStateForConnections(
        ::webrtc::ArrayView<::webrtc::Connection const* const, 18446744073709546905> connections
    );

    MCNAPI bool
    $PruneConnections(::webrtc::ArrayView<::webrtc::Connection const* const, 18446744073709546905> connections);

    MCNAPI ::std::optional<::webrtc::NetworkRoute> $network_route() const;

    MCNAPI ::std::optional<::std::reference_wrapper<::webrtc::StunDictionaryWriter>> $GetDictionaryWriter();

    MCNAPI ::webrtc::FieldTrialsView const* $field_trials() const;

    MCNAPI void $ResetDtlsStunPiggybackCallbacks();

    MCNAPI void $SetDtlsStunPiggybackCallbacks(::webrtc::DtlsStunPiggybackCallbacks&& callbacks);

    MCNAPI ::webrtc::IceParameters const* $local_ice_parameters() const;

    MCNAPI ::webrtc::IceParameters const* $remote_ice_parameters() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIceTransportInternal();

    MCNAPI static void** $vftableForIceAgentInterface();
    // NOLINTEND
};

} // namespace webrtc
