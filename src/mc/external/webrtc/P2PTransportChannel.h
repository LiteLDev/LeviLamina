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

    virtual void
    ForgetLearnedStateForConnections(::webrtc::ArrayView<::webrtc::Connection const* const> connections) /*override*/;

    virtual bool PruneConnections(::webrtc::ArrayView<::webrtc::Connection const* const> connections) /*override*/;

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
    MCAPI void AddAllocatorSession(::std::unique_ptr<::webrtc::PortAllocatorSession> session);

    MCAPI void AddConnection(::webrtc::Connection* connection);

    MCAPI void
    AddRemoteCandidateWithResult(::webrtc::Candidate candidate, ::webrtc::AsyncDnsResolverResult const& result);

    MCAPI void CheckLocalNetworkAccessPermission(::webrtc::Candidate const& candidate);

    MCAPI ::webrtc::IceTransportState ComputeIceTransportState() const;

    MCAPI ::webrtc::IceTransportStateInternal ComputeState() const;

    MCAPI ::webrtc::NetworkRoute ConfigureNetworkRoute(::webrtc::Connection const* conn);

    MCAPI bool CreateConnection(
        ::webrtc::PortInterface*   port,
        ::webrtc::Candidate const& remote_candidate,
        ::webrtc::PortInterface*   origin_port
    );

    MCAPI void FinishAddingRemoteCandidate(::webrtc::Candidate const& new_remote_candidate);

    MCAPI void HandleAllTimedOut();

    MCAPI bool IsDuplicateRemoteCandidate(::webrtc::Candidate const& candidate);

    MCAPI void OnCandidateError(::webrtc::PortAllocatorSession*, ::webrtc::IceCandidateErrorEvent const& event);

    MCAPI void OnCandidateFilterChanged(uint prev_filter, uint cur_filter);

    MCAPI void OnCandidateResolved(::webrtc::AsyncDnsResolverInterface* resolver);

    MCAPI void OnCandidatesAllocationDone(::webrtc::PortAllocatorSession*);

    MCAPI void OnCandidatesReady(::webrtc::PortAllocatorSession*, ::std::vector<::webrtc::Candidate> const& candidates);

    MCAPI void
    OnCandidatesRemoved(::webrtc::PortAllocatorSession* session, ::std::vector<::webrtc::Candidate> const& candidates);

    MCAPI void OnConnectionDestroyed(::webrtc::Connection* connection);

    MCAPI void OnConnectionStateChange(::webrtc::Connection* connection);

    MCAPI void OnLocalNetworkAccessResult(
        ::webrtc::LocalNetworkAccessPermissionInterface* permission_query,
        ::webrtc::LocalNetworkAccessPermissionStatus     status
    );

    MCAPI void OnNominated(::webrtc::Connection* conn);

    MCAPI void OnPortReady(::webrtc::PortAllocatorSession*, ::webrtc::PortInterface* port);

    MCAPI void OnPortsPruned(::webrtc::PortAllocatorSession*, ::std::vector<::webrtc::PortInterface*> const& ports);

    MCAPI void OnReadyToSend(::webrtc::Connection* connection);

    MCAPI void OnSelectedConnectionDestroyed();

    MCAPI void OnSentPacket(::webrtc::SentPacketInfo const& sent_packet);

    MCAPI void OnUnknownAddress(
        ::webrtc::PortInterface*       port,
        ::webrtc::SocketAddress const& address,
        ::webrtc::ProtocolType         proto,
        ::webrtc::IceMessage*          stun_msg,
        ::std::string const&           remote_username,
        bool                           port_muxed
    );

    MCAPI P2PTransportChannel(
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

    MCAPI void ParseFieldTrials(::webrtc::FieldTrialsView const& field_trials);

    MCAPI bool PresumedWritable(::webrtc::Connection const* conn) const;

    MCAPI void
    RememberRemoteCandidate(::webrtc::Candidate const& remote_candidate, ::webrtc::PortInterface* origin_port);

    MCAPI void RemoveConnection(::webrtc::Connection* connection);

    MCAPI void ResolveHostnameCandidate(::webrtc::Candidate const& candidate);

    MCAPI ::webrtc::Candidate SanitizeRemoteCandidate(::webrtc::Candidate const& c) const;

    MCAPI void SendPingRequestInternal(::webrtc::Connection* connection);

    MCAPI void SwitchSelectedConnectionInternal(::webrtc::Connection* conn, ::webrtc::IceSwitchReason reason);

    MCAPI ::std::string ToString() const;

    MCAPI void UpdateTransportState();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::webrtc::P2PTransportChannel>
    Create(::std::string_view transport_name, int component, ::webrtc::IceTransportInit init);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::webrtc::IceTransportStateInternal $GetState() const;

    MCAPI ::webrtc::IceTransportState $GetIceTransportState() const;

    MCAPI ::std::string const& $transport_name() const;

    MCAPI int $component() const;

    MCAPI bool $writable() const;

    MCAPI bool $receiving() const;

    MCAPI void $SetIceRole(::webrtc::IceRole ice_role);

    MCAPI ::webrtc::IceRole $GetIceRole() const;

    MCAPI void $SetIceParameters(::webrtc::IceParameters const& ice_params);

    MCAPI void $SetRemoteIceParameters(::webrtc::IceParameters const& ice_params);

    MCAPI void $SetRemoteIceMode(::webrtc::IceMode mode);

    MCAPI void $MaybeStartGathering();

    MCAPI ::webrtc::IceGatheringState $gathering_state() const;

    MCAPI void $AddRemoteCandidate(::webrtc::Candidate const& candidate);

    MCAPI void $RemoveRemoteCandidate(::webrtc::Candidate const& cand_to_remove);

    MCAPI void $RemoveAllRemoteCandidates();

    MCAPI void $SetIceConfig(::webrtc::IceConfig const& config);

    MCAPI ::webrtc::IceConfig const& $config() const;

    MCAPI int $SendPacket(char const* data, uint64 len, ::webrtc::AsyncSocketPacketOptions const& options, int flags);

    MCAPI int $SetOption(::webrtc::Socket::Option opt, int value);

    MCAPI bool $GetOption(::webrtc::Socket::Option opt, int* value);

    MCAPI int $GetError();

    MCAPI bool $GetStats(::webrtc::IceTransportStats* ice_transport_stats);

    MCAPI ::std::optional<int> $GetRttEstimate();

    MCAPI ::webrtc::Connection const* $selected_connection() const;

    MCAPI ::std::optional<::webrtc::CandidatePair const> $GetSelectedCandidatePair() const;

    MCAPI void $OnStartedPinging();

    MCAPI int64 $GetLastPingSentMs() const;

    MCAPI void $UpdateConnectionStates();

    MCAPI void $UpdateState();

    MCAPI void $SendPingRequest(::webrtc::Connection const* connection);

    MCAPI void $SwitchSelectedConnection(::webrtc::Connection const* new_connection, ::webrtc::IceSwitchReason reason);

    MCAPI void $ForgetLearnedStateForConnections(::webrtc::ArrayView<::webrtc::Connection const* const> connections);

    MCAPI bool $PruneConnections(::webrtc::ArrayView<::webrtc::Connection const* const> connections);

    MCAPI ::std::optional<::webrtc::NetworkRoute> $network_route() const;

    MCAPI ::std::optional<::std::reference_wrapper<::webrtc::StunDictionaryWriter>> $GetDictionaryWriter();

    MCAPI ::webrtc::FieldTrialsView const* $field_trials() const;

    MCAPI void $ResetDtlsStunPiggybackCallbacks();

    MCAPI void $SetDtlsStunPiggybackCallbacks(::webrtc::DtlsStunPiggybackCallbacks&& callbacks);

    MCAPI ::webrtc::IceParameters const* $local_ice_parameters() const;

    MCAPI ::webrtc::IceParameters const* $remote_ice_parameters() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIceTransportInternal();

    MCNAPI static void** $vftableForIceAgentInterface();
    // NOLINTEND
};

} // namespace webrtc
