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
        CandidateAndResolver();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI
        CandidateAndResolver(::cricket::Candidate const&, ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>&&);

        MCNAPI ~CandidateAndResolver();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::cricket::Candidate const&, ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    P2PTransportChannel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddAllocatorSession(::std::unique_ptr<::cricket::PortAllocatorSession>);

    MCNAPI void AddConnection(::cricket::Connection*);

    MCNAPI void AddRemoteCandidateWithResult(::cricket::Candidate, ::webrtc::AsyncDnsResolverResult const&);

    MCNAPI bool AllowedToPruneConnections() const;

    MCNAPI int64 ComputeEstimatedDisconnectedTimeMs(int64, ::cricket::Connection*);

    MCNAPI ::webrtc::IceTransportState ComputeIceTransportState() const;

    MCNAPI ::cricket::IceTransportState ComputeState() const;

    MCNAPI ::rtc::NetworkRoute ConfigureNetworkRoute(::cricket::Connection const*);

    MCNAPI bool CreateConnection(::cricket::PortInterface*, ::cricket::Candidate const&, ::cricket::PortInterface*);

    MCNAPI bool CreateConnections(::cricket::Candidate const&, ::cricket::PortInterface*);

    MCNAPI bool FindConnection(::cricket::Connection const*) const;

    MCNAPI ::cricket::IceParameters const* FindRemoteIceFromUfrag(::std::string_view, uint*);

    MCNAPI void FinishAddingRemoteCandidate(::cricket::Candidate const&);

    MCNAPI uint GetNominationAttr(::cricket::Connection*) const;

    MCNAPI uint GetRemoteCandidateGeneration(::cricket::Candidate const&);

    MCNAPI bool GetUseCandidateAttr(::cricket::Connection*) const;

    MCNAPI void GoogDeltaAckReceived(::webrtc::RTCErrorOr<::cricket::StunUInt64Attribute const*>);

    MCNAPI ::std::unique_ptr<::cricket::StunAttribute> GoogDeltaReceived(::cricket::StunByteStringAttribute const*);

    MCNAPI void HandleAllTimedOut();

    MCNAPI bool IsDuplicateRemoteCandidate(::cricket::Candidate const&);

    MCNAPI bool IsPortPruned(::cricket::PortInterface const*) const;

    MCNAPI bool IsRemoteCandidatePruned(::cricket::Candidate const&) const;

    MCNAPI void LogCandidatePairConfig(::cricket::Connection*, ::webrtc::IceCandidatePairConfigType);

    MCNAPI void MarkConnectionPinged(::cricket::Connection*);

    MCNAPI void MaybeStopPortAllocatorSessions();

    MCNAPI void OnCandidateError(::cricket::PortAllocatorSession*, ::cricket::IceCandidateErrorEvent const&);

    MCNAPI void OnCandidateFilterChanged(uint, uint);

    MCNAPI void OnCandidateResolved(::webrtc::AsyncDnsResolverInterface*);

    MCNAPI void OnCandidatesAllocationDone(::cricket::PortAllocatorSession*);

    MCNAPI void OnCandidatesReady(::cricket::PortAllocatorSession*, ::std::vector<::cricket::Candidate> const&);

    MCNAPI void OnCandidatesRemoved(::cricket::PortAllocatorSession*, ::std::vector<::cricket::Candidate> const&);

    MCNAPI void OnConnectionDestroyed(::cricket::Connection*);

    MCNAPI void OnConnectionStateChange(::cricket::Connection*);

    MCNAPI void OnNominated(::cricket::Connection*);

    MCNAPI void OnPortDestroyed(::cricket::PortInterface*);

    MCNAPI void OnPortReady(::cricket::PortAllocatorSession*, ::cricket::PortInterface*);

    MCNAPI void OnPortsPruned(::cricket::PortAllocatorSession*, ::std::vector<::cricket::PortInterface*> const&);

    MCNAPI void OnReadPacket(::cricket::Connection*, ::rtc::ReceivedPacket const&);

    MCNAPI void OnReadyToSend(::cricket::Connection*);

    MCNAPI void OnRoleConflict(::cricket::PortInterface*);

    MCNAPI void OnSelectedConnectionDestroyed();

    MCNAPI void OnSentPacket(::rtc::SentPacket const&);

    MCNAPI void OnUnknownAddress(
        ::cricket::PortInterface*,
        ::rtc::SocketAddress const&,
        ::cricket::ProtocolType,
        ::cricket::IceMessage*,
        ::std::string const&,
        bool
    );

    MCNAPI
    P2PTransportChannel(::std::string_view, int, ::cricket::PortAllocator*, ::webrtc::AsyncDnsResolverFactoryInterface*, ::std::unique_ptr<::webrtc::AsyncDnsResolverFactoryInterface>, ::webrtc::RtcEventLog*, ::cricket::IceControllerFactoryInterface*, ::cricket::ActiveIceControllerFactoryInterface*, ::webrtc::FieldTrialsView const*);

    MCNAPI void ParseFieldTrials(::webrtc::FieldTrialsView const*);

    MCNAPI void PingConnection(::cricket::Connection*);

    MCNAPI bool PresumedWritable(::cricket::Connection const*) const;

    MCNAPI void PruneAllPorts();

    MCNAPI bool PrunePort(::cricket::PortInterface*);

    MCNAPI bool ReadyToSend(::cricket::Connection const*) const;

    MCNAPI void RememberRemoteCandidate(::cricket::Candidate const&, ::cricket::PortInterface*);

    MCNAPI void RemoveConnection(::cricket::Connection*);

    MCNAPI void ResolveHostnameCandidate(::cricket::Candidate const&);

    MCNAPI ::cricket::Candidate SanitizeLocalCandidate(::cricket::Candidate const&) const;

    MCNAPI ::cricket::Candidate SanitizeRemoteCandidate(::cricket::Candidate const&) const;

    MCNAPI void SendPingRequestInternal(::cricket::Connection*);

    MCNAPI void SetReceiving(bool);

    MCNAPI void SetWritable(bool);

    MCNAPI void SwitchSelectedConnectionInternal(::cricket::Connection*, ::cricket::IceSwitchReason);

    MCNAPI ::std::string ToString() const;

    MCNAPI void UpdateTransportState();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::cricket::P2PTransportChannel>
    Create(::std::string_view, int, ::webrtc::IceTransportInit);

    MCNAPI static ::webrtc::RTCError ValidateIceConfig(::cricket::IceConfig const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::string_view, int, ::cricket::PortAllocator*, ::webrtc::AsyncDnsResolverFactoryInterface*, ::std::unique_ptr<::webrtc::AsyncDnsResolverFactoryInterface>, ::webrtc::RtcEventLog*, ::cricket::IceControllerFactoryInterface*, ::cricket::ActiveIceControllerFactoryInterface*, ::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIceTransportInternal();

    MCNAPI static void** $vftableForIceAgentInterface();
    // NOLINTEND
};

} // namespace cricket
