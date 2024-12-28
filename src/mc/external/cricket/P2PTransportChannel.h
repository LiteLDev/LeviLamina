#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceSwitchReason.h"
#include "mc/external/cricket/IceTransportState.h"
#include "mc/external/cricket/ProtocolType.h"
#include "mc/external/webrtc/IceCandidatePairConfigType.h"
#include "mc/external/webrtc/IceTransportState.h"
#include "mc/external/webrtc/RTCErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class ActiveIceControllerFactoryInterface; }
namespace cricket { class Candidate; }
namespace cricket { class Connection; }
namespace cricket { class IceControllerFactoryInterface; }
namespace cricket { class IceMessage; }
namespace cricket { class PortAllocator; }
namespace cricket { class PortAllocatorSession; }
namespace cricket { class PortInterface; }
namespace cricket { class StunAttribute; }
namespace cricket { class StunByteStringAttribute; }
namespace cricket { class StunUInt64Attribute; }
namespace cricket { struct IceCandidateErrorEvent; }
namespace cricket { struct IceConfig; }
namespace cricket { struct IceParameters; }
namespace rtc { class ReceivedPacket; }
namespace rtc { class SocketAddress; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct SentPacket; }
namespace webrtc { class AsyncDnsResolverFactoryInterface; }
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class AsyncDnsResolverResult; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { struct IceTransportInit; }
// clang-format on

namespace cricket {

class P2PTransportChannel {
public:
    // P2PTransportChannel inner types declare
    // clang-format off
    struct CandidateAndResolver;
    // clang-format on

    // P2PTransportChannel inner types define
    struct CandidateAndResolver {
    public:
        // prevent constructor by default
        CandidateAndResolver& operator=(CandidateAndResolver const&);
        CandidateAndResolver(CandidateAndResolver const&);
        CandidateAndResolver();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI
        CandidateAndResolver(::cricket::Candidate const&, ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>&&);

        MCAPI ~CandidateAndResolver();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::cricket::Candidate const&, ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    P2PTransportChannel& operator=(P2PTransportChannel const&);
    P2PTransportChannel(P2PTransportChannel const&);
    P2PTransportChannel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddAllocatorSession(::std::unique_ptr<::cricket::PortAllocatorSession>);

    MCAPI void AddConnection(::cricket::Connection*);

    MCAPI void AddRemoteCandidateWithResult(::cricket::Candidate, ::webrtc::AsyncDnsResolverResult const&);

    MCAPI bool AllowedToPruneConnections() const;

    MCAPI int64 ComputeEstimatedDisconnectedTimeMs(int64, ::cricket::Connection*);

    MCAPI ::webrtc::IceTransportState ComputeIceTransportState() const;

    MCAPI ::cricket::IceTransportState ComputeState() const;

    MCAPI ::rtc::NetworkRoute ConfigureNetworkRoute(::cricket::Connection const*);

    MCAPI bool CreateConnection(::cricket::PortInterface*, ::cricket::Candidate const&, ::cricket::PortInterface*);

    MCAPI bool CreateConnections(::cricket::Candidate const&, ::cricket::PortInterface*);

    MCAPI bool FindConnection(::cricket::Connection const*) const;

    MCAPI ::cricket::IceParameters const* FindRemoteIceFromUfrag(::std::string_view, uint*);

    MCAPI void FinishAddingRemoteCandidate(::cricket::Candidate const&);

    MCAPI uint GetNominationAttr(::cricket::Connection*) const;

    MCAPI uint GetRemoteCandidateGeneration(::cricket::Candidate const&);

    MCAPI bool GetUseCandidateAttr(::cricket::Connection*) const;

    MCAPI void GoogDeltaAckReceived(::webrtc::RTCErrorOr<::cricket::StunUInt64Attribute const*>);

    MCAPI ::std::unique_ptr<::cricket::StunAttribute> GoogDeltaReceived(::cricket::StunByteStringAttribute const*);

    MCAPI void HandleAllTimedOut();

    MCAPI bool IsDuplicateRemoteCandidate(::cricket::Candidate const&);

    MCAPI bool IsPortPruned(::cricket::PortInterface const*) const;

    MCAPI bool IsRemoteCandidatePruned(::cricket::Candidate const&) const;

    MCAPI void LogCandidatePairConfig(::cricket::Connection*, ::webrtc::IceCandidatePairConfigType);

    MCAPI void MarkConnectionPinged(::cricket::Connection*);

    MCAPI void MaybeStopPortAllocatorSessions();

    MCAPI void OnCandidateError(::cricket::PortAllocatorSession*, ::cricket::IceCandidateErrorEvent const&);

    MCAPI void OnCandidateFilterChanged(uint, uint);

    MCAPI void OnCandidateResolved(::webrtc::AsyncDnsResolverInterface*);

    MCAPI void OnCandidatesAllocationDone(::cricket::PortAllocatorSession*);

    MCAPI void OnCandidatesReady(::cricket::PortAllocatorSession*, ::std::vector<::cricket::Candidate> const&);

    MCAPI void OnCandidatesRemoved(::cricket::PortAllocatorSession*, ::std::vector<::cricket::Candidate> const&);

    MCAPI void OnConnectionDestroyed(::cricket::Connection*);

    MCAPI void OnConnectionStateChange(::cricket::Connection*);

    MCAPI void OnNominated(::cricket::Connection*);

    MCAPI void OnPortDestroyed(::cricket::PortInterface*);

    MCAPI void OnPortReady(::cricket::PortAllocatorSession*, ::cricket::PortInterface*);

    MCAPI void OnPortsPruned(::cricket::PortAllocatorSession*, ::std::vector<::cricket::PortInterface*> const&);

    MCAPI void OnReadPacket(::cricket::Connection*, ::rtc::ReceivedPacket const&);

    MCAPI void OnReadyToSend(::cricket::Connection*);

    MCAPI void OnRoleConflict(::cricket::PortInterface*);

    MCAPI void OnSelectedConnectionDestroyed();

    MCAPI void OnSentPacket(::rtc::SentPacket const&);

    MCAPI void OnUnknownAddress(
        ::cricket::PortInterface*,
        ::rtc::SocketAddress const&,
        ::cricket::ProtocolType,
        ::cricket::IceMessage*,
        ::std::string const&,
        bool
    );

    MCAPI
    P2PTransportChannel(::std::string_view, int, ::cricket::PortAllocator*, ::webrtc::AsyncDnsResolverFactoryInterface*, ::std::unique_ptr<::webrtc::AsyncDnsResolverFactoryInterface>, ::webrtc::RtcEventLog*, ::cricket::IceControllerFactoryInterface*, ::cricket::ActiveIceControllerFactoryInterface*, ::webrtc::FieldTrialsView const*);

    MCAPI void ParseFieldTrials(::webrtc::FieldTrialsView const*);

    MCAPI void PingConnection(::cricket::Connection*);

    MCAPI bool PresumedWritable(::cricket::Connection const*) const;

    MCAPI void PruneAllPorts();

    MCAPI bool PrunePort(::cricket::PortInterface*);

    MCAPI bool ReadyToSend(::cricket::Connection const*) const;

    MCAPI void RememberRemoteCandidate(::cricket::Candidate const&, ::cricket::PortInterface*);

    MCAPI void RemoveConnection(::cricket::Connection*);

    MCAPI void ResolveHostnameCandidate(::cricket::Candidate const&);

    MCAPI ::cricket::Candidate SanitizeLocalCandidate(::cricket::Candidate const&) const;

    MCAPI ::cricket::Candidate SanitizeRemoteCandidate(::cricket::Candidate const&) const;

    MCAPI void SendPingRequestInternal(::cricket::Connection*);

    MCAPI void SetReceiving(bool);

    MCAPI void SetWritable(bool);

    MCAPI void SwitchSelectedConnectionInternal(::cricket::Connection*, ::cricket::IceSwitchReason);

    MCAPI ::std::string ToString() const;

    MCAPI void UpdateTransportState();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::cricket::P2PTransportChannel>
    Create(::std::string_view, int, ::webrtc::IceTransportInit);

    MCAPI static ::webrtc::RTCError ValidateIceConfig(::cricket::IceConfig const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string_view, int, ::cricket::PortAllocator*, ::webrtc::AsyncDnsResolverFactoryInterface*, ::std::unique_ptr<::webrtc::AsyncDnsResolverFactoryInterface>, ::webrtc::RtcEventLog*, ::cricket::IceControllerFactoryInterface*, ::cricket::ActiveIceControllerFactoryInterface*, ::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIceTransportInternal();

    MCAPI static void** $vftableForIceAgentInterface();
    // NOLINTEND
};

} // namespace cricket
