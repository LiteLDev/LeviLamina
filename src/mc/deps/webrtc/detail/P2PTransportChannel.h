#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/IceCandidatePairConfigType.h"
#include "mc/deps/webrtc/IceTransportState.h"
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/IceControllerInterface.h"
#include "mc/deps/webrtc/detail/IceGatheringState.h"
#include "mc/deps/webrtc/detail/IceMode.h"
#include "mc/deps/webrtc/detail/IceRole.h"
#include "mc/deps/webrtc/detail/IceSwitchReason.h"
#include "mc/deps/webrtc/detail/IceTransportState.h"
#include "mc/deps/webrtc/detail/NominationMode.h"
#include "mc/deps/webrtc/detail/ProtocolType.h"
#include "mc/deps/webrtc/detail/Socket.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class ActiveIceControllerFactoryInterface; }
namespace cricket { class Candidate; }
namespace cricket { class Connection; }
namespace cricket { class IceControllerFactoryInterface; }
namespace cricket { class IceMessage; }
namespace cricket { class Port; }
namespace cricket { class PortAllocator; }
namespace cricket { class PortAllocatorSession; }
namespace cricket { class PortInterface; }
namespace cricket { struct CandidatePair; }
namespace cricket { struct IceCandidateErrorEvent; }
namespace cricket { struct IceConfig; }
namespace cricket { struct IceControllerFactoryArgs; }
namespace cricket { struct IceParameters; }
namespace cricket { struct IceTransportStats; }
namespace rtc { class SocketAddress; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
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
    class IceControllerAdapter;
    // clang-format on

    // P2PTransportChannel inner types define
    struct CandidateAndResolver {
    public:
        // prevent constructor by default
        CandidateAndResolver& operator=(CandidateAndResolver const&);
        CandidateAndResolver(CandidateAndResolver const&);
        CandidateAndResolver();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0CandidateAndResolver@P2PTransportChannel@cricket@@QEAA@AEBVCandidate@2@$$QEAV?$unique_ptr@VAsyncDnsResolverInterface@webrtc@@U?$default_delete@VAsyncDnsResolverInterface@webrtc@@@std@@@std@@@Z
        MCAPI
        CandidateAndResolver(class cricket::Candidate const&, std::unique_ptr<class webrtc::AsyncDnsResolverInterface>&&);

        // symbol: ??1CandidateAndResolver@P2PTransportChannel@cricket@@QEAA@XZ
        MCAPI ~CandidateAndResolver();

        // NOLINTEND
    };

    class IceControllerAdapter {
    public:
        // prevent constructor by default
        IceControllerAdapter& operator=(IceControllerAdapter const&);
        IceControllerAdapter(IceControllerAdapter const&);
        IceControllerAdapter();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1IceControllerAdapter@P2PTransportChannel@cricket@@UEAA@XZ
        virtual ~IceControllerAdapter();

        // vIndex: 1, symbol: ?SetIceConfig@IceControllerAdapter@P2PTransportChannel@cricket@@UEAAXAEBUIceConfig@3@@Z
        virtual void SetIceConfig(struct cricket::IceConfig const&);

        // vIndex: 2, symbol:
        // ?OnConnectionAdded@IceControllerAdapter@P2PTransportChannel@cricket@@UEAAXPEBVConnection@3@@Z
        virtual void OnConnectionAdded(class cricket::Connection const*);

        // vIndex: 3, symbol:
        // ?OnConnectionSwitched@IceControllerAdapter@P2PTransportChannel@cricket@@UEAAXPEBVConnection@3@@Z
        virtual void OnConnectionSwitched(class cricket::Connection const*);

        // vIndex: 4, symbol:
        // ?OnConnectionDestroyed@IceControllerAdapter@P2PTransportChannel@cricket@@UEAAXPEBVConnection@3@@Z
        virtual void OnConnectionDestroyed(class cricket::Connection const*);

        // vIndex: 5, symbol:
        // ?OnConnectionPinged@IceControllerAdapter@P2PTransportChannel@cricket@@UEAAXPEBVConnection@3@@Z
        virtual void OnConnectionPinged(class cricket::Connection const*);

        // vIndex: 6, symbol:
        // ?OnConnectionUpdated@IceControllerAdapter@P2PTransportChannel@cricket@@UEAAXPEBVConnection@3@@Z
        virtual void OnConnectionUpdated(class cricket::Connection const*);

        // vIndex: 7, symbol:
        // ?GetUseCandidateAttribute@IceControllerAdapter@P2PTransportChannel@cricket@@UEBA_NPEBVConnection@3@W4NominationMode@3@W4IceMode@3@@Z
        virtual bool
        GetUseCandidateAttribute(class cricket::Connection const*, ::cricket::NominationMode, ::cricket::IceMode) const;

        // vIndex: 8, symbol:
        // ?OnSortAndSwitchRequest@IceControllerAdapter@P2PTransportChannel@cricket@@UEAAXW4IceSwitchReason@3@@Z
        virtual void OnSortAndSwitchRequest(::cricket::IceSwitchReason);

        // vIndex: 9, symbol:
        // ?OnImmediateSortAndSwitchRequest@IceControllerAdapter@P2PTransportChannel@cricket@@UEAAXW4IceSwitchReason@3@@Z
        virtual void OnImmediateSortAndSwitchRequest(::cricket::IceSwitchReason);

        // vIndex: 10, symbol:
        // ?OnImmediateSwitchRequest@IceControllerAdapter@P2PTransportChannel@cricket@@UEAA_NW4IceSwitchReason@3@PEBVConnection@3@@Z
        virtual bool OnImmediateSwitchRequest(::cricket::IceSwitchReason, class cricket::Connection const*);

        // vIndex: 11, symbol:
        // ?FindNextPingableConnection@IceControllerAdapter@P2PTransportChannel@cricket@@UEAAPEBVConnection@3@XZ
        virtual class cricket::Connection const* FindNextPingableConnection();

        // symbol:
        // ??0IceControllerAdapter@P2PTransportChannel@cricket@@QEAA@AEBUIceControllerFactoryArgs@2@PEAVIceControllerFactoryInterface@2@PEAVActiveIceControllerFactoryInterface@2@PEBVFieldTrialsView@webrtc@@PEAV12@@Z
        MCAPI
        IceControllerAdapter(struct cricket::IceControllerFactoryArgs const&, class cricket::IceControllerFactoryInterface*, class cricket::ActiveIceControllerFactoryInterface*, class webrtc::FieldTrialsView const*, class cricket::P2PTransportChannel*);

        // symbol:
        // ?LegacyConnections@IceControllerAdapter@P2PTransportChannel@cricket@@QEBA?AV?$ArrayView@PEAVConnection@cricket@@$0?BCGH@@rtc@@XZ
        MCAPI class rtc::ArrayView<class cricket::Connection*, -4711> LegacyConnections() const;

        // symbol: ?LegacyHasPingableConnection@IceControllerAdapter@P2PTransportChannel@cricket@@QEBA_NXZ
        MCAPI bool LegacyHasPingableConnection() const;

        // symbol:
        // ?LegacyPruneConnections@IceControllerAdapter@P2PTransportChannel@cricket@@QEAA?AV?$vector@PEBVConnection@cricket@@V?$allocator@PEBVConnection@cricket@@@std@@@std@@XZ
        MCAPI std::vector<class cricket::Connection const*> LegacyPruneConnections();

        // symbol:
        // ?LegacySelectConnectionToPing@IceControllerAdapter@P2PTransportChannel@cricket@@QEAA?AUPingResult@IceControllerInterface@3@_J@Z
        MCAPI struct cricket::IceControllerInterface::PingResult LegacySelectConnectionToPing(int64);

        // symbol:
        // ?LegacyShouldSwitchConnection@IceControllerAdapter@P2PTransportChannel@cricket@@QEAA?AUSwitchResult@IceControllerInterface@3@W4IceSwitchReason@3@PEBVConnection@3@@Z
        MCAPI struct cricket::IceControllerInterface::SwitchResult
        LegacyShouldSwitchConnection(::cricket::IceSwitchReason, class cricket::Connection const*);

        // symbol:
        // ?LegacySortAndSwitchConnection@IceControllerAdapter@P2PTransportChannel@cricket@@QEAA?AUSwitchResult@IceControllerInterface@3@W4IceSwitchReason@3@@Z
        MCAPI struct cricket::IceControllerInterface::SwitchResult
            LegacySortAndSwitchConnection(::cricket::IceSwitchReason);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    P2PTransportChannel& operator=(P2PTransportChannel const&);
    P2PTransportChannel(P2PTransportChannel const&);
    P2PTransportChannel();

public:
    // NOLINTBEGIN
    // symbol: ?AddRemoteCandidate@P2PTransportChannel@cricket@@UEAAXAEBVCandidate@2@@Z
    MCVAPI void AddRemoteCandidate(class cricket::Candidate const&);

    // symbol:
    // ?ForgetLearnedStateForConnections@P2PTransportChannel@cricket@@UEAAXV?$ArrayView@QEBVConnection@cricket@@$0?BCGH@@rtc@@@Z
    MCVAPI void ForgetLearnedStateForConnections(class rtc::ArrayView<class cricket::Connection const* const, -4711>);

    // symbol: ?GetError@P2PTransportChannel@cricket@@UEAAHXZ
    MCVAPI int GetError();

    // symbol: ?GetIceRole@P2PTransportChannel@cricket@@UEBA?AW4IceRole@2@XZ
    MCVAPI ::cricket::IceRole GetIceRole() const;

    // symbol: ?GetIceTransportState@P2PTransportChannel@cricket@@UEBA?AW4IceTransportState@webrtc@@XZ
    MCVAPI ::webrtc::IceTransportState GetIceTransportState() const;

    // symbol: ?GetLastPingSentMs@P2PTransportChannel@cricket@@UEBA_JXZ
    MCVAPI int64 GetLastPingSentMs() const;

    // symbol: ?GetOption@P2PTransportChannel@cricket@@UEAA_NW4Option@Socket@rtc@@PEAH@Z
    MCVAPI bool GetOption(::rtc::Socket::Option, int*);

    // symbol: ?GetRttEstimate@P2PTransportChannel@cricket@@UEAA?AV?$optional@H@std@@XZ
    MCVAPI std::optional<int> GetRttEstimate();

    // symbol:
    // ?GetSelectedCandidatePair@P2PTransportChannel@cricket@@UEBA?AV?$optional@$$CBUCandidatePair@cricket@@@std@@XZ
    MCVAPI std::optional<struct cricket::CandidatePair const> GetSelectedCandidatePair() const;

    // symbol: ?GetState@P2PTransportChannel@cricket@@UEBA?AW4IceTransportState@2@XZ
    MCVAPI ::cricket::IceTransportState GetState() const;

    // symbol: ?GetStats@P2PTransportChannel@cricket@@UEAA_NPEAUIceTransportStats@2@@Z
    MCVAPI bool GetStats(struct cricket::IceTransportStats*);

    // symbol: ?MaybeStartGathering@P2PTransportChannel@cricket@@UEAAXXZ
    MCVAPI void MaybeStartGathering();

    // symbol: ?OnStartedPinging@P2PTransportChannel@cricket@@UEAAXXZ
    MCVAPI void OnStartedPinging();

    // symbol:
    // ?PruneConnections@P2PTransportChannel@cricket@@UEAA_NV?$ArrayView@QEBVConnection@cricket@@$0?BCGH@@rtc@@@Z
    MCVAPI bool PruneConnections(class rtc::ArrayView<class cricket::Connection const* const, -4711>);

    // symbol: ?RemoveAllRemoteCandidates@P2PTransportChannel@cricket@@UEAAXXZ
    MCVAPI void RemoveAllRemoteCandidates();

    // symbol: ?RemoveRemoteCandidate@P2PTransportChannel@cricket@@UEAAXAEBVCandidate@2@@Z
    MCVAPI void RemoveRemoteCandidate(class cricket::Candidate const&);

    // symbol: ?SendPacket@P2PTransportChannel@cricket@@UEAAHPEBD_KAEBUPacketOptions@rtc@@H@Z
    MCVAPI int SendPacket(char const*, uint64, struct rtc::PacketOptions const&, int);

    // symbol: ?SendPingRequest@P2PTransportChannel@cricket@@UEAAXPEBVConnection@2@@Z
    MCVAPI void SendPingRequest(class cricket::Connection const*);

    // symbol: ?SetIceConfig@P2PTransportChannel@cricket@@UEAAXAEBUIceConfig@2@@Z
    MCVAPI void SetIceConfig(struct cricket::IceConfig const&);

    // symbol: ?SetIceParameters@P2PTransportChannel@cricket@@UEAAXAEBUIceParameters@2@@Z
    MCVAPI void SetIceParameters(struct cricket::IceParameters const&);

    // symbol: ?SetIceRole@P2PTransportChannel@cricket@@UEAAXW4IceRole@2@@Z
    MCVAPI void SetIceRole(::cricket::IceRole);

    // symbol: ?SetIceTiebreaker@P2PTransportChannel@cricket@@UEAAX_K@Z
    MCVAPI void SetIceTiebreaker(uint64);

    // symbol: ?SetOption@P2PTransportChannel@cricket@@UEAAHW4Option@Socket@rtc@@H@Z
    MCVAPI int SetOption(::rtc::Socket::Option, int);

    // symbol: ?SetRemoteIceMode@P2PTransportChannel@cricket@@UEAAXW4IceMode@2@@Z
    MCVAPI void SetRemoteIceMode(::cricket::IceMode);

    // symbol: ?SetRemoteIceParameters@P2PTransportChannel@cricket@@UEAAXAEBUIceParameters@2@@Z
    MCVAPI void SetRemoteIceParameters(struct cricket::IceParameters const&);

    // symbol: ?SwitchSelectedConnection@P2PTransportChannel@cricket@@UEAAXPEBVConnection@2@W4IceSwitchReason@2@@Z
    MCVAPI void SwitchSelectedConnection(class cricket::Connection const*, ::cricket::IceSwitchReason);

    // symbol: ?UpdateConnectionStates@P2PTransportChannel@cricket@@UEAAXXZ
    MCVAPI void UpdateConnectionStates();

    // symbol: ?UpdateState@P2PTransportChannel@cricket@@UEAAXXZ
    MCVAPI void UpdateState();

    // symbol: ?component@P2PTransportChannel@cricket@@UEBAHXZ
    MCVAPI int component() const;

    // symbol: ?gathering_state@P2PTransportChannel@cricket@@UEBA?AW4IceGatheringState@2@XZ
    MCVAPI ::cricket::IceGatheringState gathering_state() const;

    // symbol: ?network_route@P2PTransportChannel@cricket@@UEBA?AV?$optional@UNetworkRoute@rtc@@@std@@XZ
    MCVAPI std::optional<struct rtc::NetworkRoute> network_route() const;

    // symbol: ?receiving@P2PTransportChannel@cricket@@UEBA_NXZ
    MCVAPI bool receiving() const;

    // symbol: ?selected_connection@P2PTransportChannel@cricket@@UEBAPEBVConnection@2@XZ
    MCVAPI class cricket::Connection const* selected_connection() const;

    // symbol:
    // ?transport_name@P2PTransportChannel@cricket@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string const& transport_name() const;

    // symbol: ?writable@P2PTransportChannel@cricket@@UEBA_NXZ
    MCVAPI bool writable() const;

    // symbol: ??1P2PTransportChannel@cricket@@UEAA@XZ
    MCVAPI ~P2PTransportChannel();

    // symbol: ?MarkConnectionPinged@P2PTransportChannel@cricket@@QEAAXPEAVConnection@2@@Z
    MCAPI void MarkConnectionPinged(class cricket::Connection*);

    // symbol: ?PruneAllPorts@P2PTransportChannel@cricket@@QEAAXXZ
    MCAPI void PruneAllPorts();

    // symbol: ?RemoveConnection@P2PTransportChannel@cricket@@QEAAXPEBVConnection@2@@Z
    MCAPI void RemoveConnection(class cricket::Connection const*);

    // symbol: ?ResolveHostnameCandidate@P2PTransportChannel@cricket@@QEAAXAEBVCandidate@2@@Z
    MCAPI void ResolveHostnameCandidate(class cricket::Candidate const&);

    // symbol:
    // ?ToString@P2PTransportChannel@cricket@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ?connections@P2PTransportChannel@cricket@@QEBA?AV?$ArrayView@PEAVConnection@cricket@@$0?BCGH@@rtc@@XZ
    MCAPI class rtc::ArrayView<class cricket::Connection*, -4711> connections() const;

    // symbol:
    // ?Create@P2PTransportChannel@cricket@@SA?AV?$unique_ptr@VP2PTransportChannel@cricket@@U?$default_delete@VP2PTransportChannel@cricket@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@HUIceTransportInit@webrtc@@@Z
    MCAPI static std::unique_ptr<class cricket::P2PTransportChannel>
    Create(std::string_view, int, struct webrtc::IceTransportInit);

    // symbol: ?ValidateIceConfig@P2PTransportChannel@cricket@@SA?AVRTCError@webrtc@@AEBUIceConfig@2@@Z
    MCAPI static class webrtc::RTCError ValidateIceConfig(struct cricket::IceConfig const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?AddAllocatorSession@P2PTransportChannel@cricket@@AEAAXV?$unique_ptr@VPortAllocatorSession@cricket@@U?$default_delete@VPortAllocatorSession@cricket@@@std@@@std@@@Z
    MCAPI void AddAllocatorSession(std::unique_ptr<class cricket::PortAllocatorSession>);

    // symbol: ?AddConnection@P2PTransportChannel@cricket@@AEAAXPEAVConnection@2@@Z
    MCAPI void AddConnection(class cricket::Connection*);

    // symbol:
    // ?AddRemoteCandidateWithResult@P2PTransportChannel@cricket@@AEAAXVCandidate@2@AEBVAsyncDnsResolverResult@webrtc@@@Z
    MCAPI void AddRemoteCandidateWithResult(class cricket::Candidate, class webrtc::AsyncDnsResolverResult const&);

    // symbol: ?AllowedToPruneConnections@P2PTransportChannel@cricket@@AEBA_NXZ
    MCAPI bool AllowedToPruneConnections() const;

    // symbol: ?CheckAndPing@P2PTransportChannel@cricket@@AEAAXXZ
    MCAPI void CheckAndPing();

    // symbol: ?ComputeEstimatedDisconnectedTimeMs@P2PTransportChannel@cricket@@AEAA_J_JPEAVConnection@2@@Z
    MCAPI int64 ComputeEstimatedDisconnectedTimeMs(int64, class cricket::Connection*);

    // symbol: ?ComputeIceTransportState@P2PTransportChannel@cricket@@AEBA?AW4IceTransportState@webrtc@@XZ
    MCAPI ::webrtc::IceTransportState ComputeIceTransportState() const;

    // symbol: ?ComputeState@P2PTransportChannel@cricket@@AEBA?AW4IceTransportState@2@XZ
    MCAPI ::cricket::IceTransportState ComputeState() const;

    // symbol: ?ConfigureNetworkRoute@P2PTransportChannel@cricket@@AEAA?AUNetworkRoute@rtc@@PEBVConnection@2@@Z
    MCAPI struct rtc::NetworkRoute ConfigureNetworkRoute(class cricket::Connection const*);

    // symbol: ?CreateConnection@P2PTransportChannel@cricket@@AEAA_NPEAVPortInterface@2@AEBVCandidate@2@0@Z
    MCAPI bool
    CreateConnection(class cricket::PortInterface*, class cricket::Candidate const&, class cricket::PortInterface*);

    // symbol: ?CreateConnections@P2PTransportChannel@cricket@@AEAA_NAEBVCandidate@2@PEAVPortInterface@2@@Z
    MCAPI bool CreateConnections(class cricket::Candidate const&, class cricket::PortInterface*);

    // symbol: ?FindConnection@P2PTransportChannel@cricket@@AEBA_NPEBVConnection@2@@Z
    MCAPI bool FindConnection(class cricket::Connection const*) const;

    // symbol:
    // ?FindRemoteIceFromUfrag@P2PTransportChannel@cricket@@AEAAPEBUIceParameters@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAI@Z
    MCAPI struct cricket::IceParameters const* FindRemoteIceFromUfrag(std::string_view, uint*);

    // symbol: ?FinishAddingRemoteCandidate@P2PTransportChannel@cricket@@AEAAXAEBVCandidate@2@@Z
    MCAPI void FinishAddingRemoteCandidate(class cricket::Candidate const&);

    // symbol: ?GetNominationAttr@P2PTransportChannel@cricket@@AEBAIPEAVConnection@2@@Z
    MCAPI uint GetNominationAttr(class cricket::Connection*) const;

    // symbol: ?GetRemoteCandidateGeneration@P2PTransportChannel@cricket@@AEAAIAEBVCandidate@2@@Z
    MCAPI uint GetRemoteCandidateGeneration(class cricket::Candidate const&);

    // symbol: ?GetUseCandidateAttr@P2PTransportChannel@cricket@@AEBA_NPEAVConnection@2@@Z
    MCAPI bool GetUseCandidateAttr(class cricket::Connection*) const;

    // symbol: ?HandleAllTimedOut@P2PTransportChannel@cricket@@AEAAXXZ
    MCAPI void HandleAllTimedOut();

    // symbol: ?IsDuplicateRemoteCandidate@P2PTransportChannel@cricket@@AEAA_NAEBVCandidate@2@@Z
    MCAPI bool IsDuplicateRemoteCandidate(class cricket::Candidate const&);

    // symbol: ?IsPortPruned@P2PTransportChannel@cricket@@AEBA_NPEBVPort@2@@Z
    MCAPI bool IsPortPruned(class cricket::Port const*) const;

    // symbol: ?IsRemoteCandidatePruned@P2PTransportChannel@cricket@@AEBA_NAEBVCandidate@2@@Z
    MCAPI bool IsRemoteCandidatePruned(class cricket::Candidate const&) const;

    // symbol:
    // ?LogCandidatePairConfig@P2PTransportChannel@cricket@@AEAAXPEAVConnection@2@W4IceCandidatePairConfigType@webrtc@@@Z
    MCAPI void LogCandidatePairConfig(class cricket::Connection*, ::webrtc::IceCandidatePairConfigType);

    // symbol: ?MaybeStartPinging@P2PTransportChannel@cricket@@AEAAXXZ
    MCAPI void MaybeStartPinging();

    // symbol: ?MaybeStopPortAllocatorSessions@P2PTransportChannel@cricket@@AEAAXXZ
    MCAPI void MaybeStopPortAllocatorSessions();

    // symbol: ?MaybeSwitchSelectedConnection@P2PTransportChannel@cricket@@AEAA_NPEBVConnection@2@W4IceSwitchReason@2@@Z
    MCAPI bool MaybeSwitchSelectedConnection(class cricket::Connection const*, ::cricket::IceSwitchReason);

    // symbol:
    // ?MaybeSwitchSelectedConnection@P2PTransportChannel@cricket@@AEAA_NW4IceSwitchReason@2@USwitchResult@IceControllerInterface@2@@Z
    MCAPI bool
        MaybeSwitchSelectedConnection(::cricket::IceSwitchReason, struct cricket::IceControllerInterface::SwitchResult);

    // symbol:
    // ?OnCandidateError@P2PTransportChannel@cricket@@AEAAXPEAVPortAllocatorSession@2@AEBUIceCandidateErrorEvent@2@@Z
    MCAPI void OnCandidateError(class cricket::PortAllocatorSession*, struct cricket::IceCandidateErrorEvent const&);

    // symbol: ?OnCandidateFilterChanged@P2PTransportChannel@cricket@@AEAAXII@Z
    MCAPI void OnCandidateFilterChanged(uint, uint);

    // symbol: ?OnCandidateResolved@P2PTransportChannel@cricket@@AEAAXPEAVAsyncDnsResolverInterface@webrtc@@@Z
    MCAPI void OnCandidateResolved(class webrtc::AsyncDnsResolverInterface*);

    // symbol: ?OnCandidatesAllocationDone@P2PTransportChannel@cricket@@AEAAXPEAVPortAllocatorSession@2@@Z
    MCAPI void OnCandidatesAllocationDone(class cricket::PortAllocatorSession*);

    // symbol:
    // ?OnCandidatesReady@P2PTransportChannel@cricket@@AEAAXPEAVPortAllocatorSession@2@AEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
    MCAPI void OnCandidatesReady(class cricket::PortAllocatorSession*, std::vector<class cricket::Candidate> const&);

    // symbol:
    // ?OnCandidatesRemoved@P2PTransportChannel@cricket@@AEAAXPEAVPortAllocatorSession@2@AEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
    MCAPI void OnCandidatesRemoved(class cricket::PortAllocatorSession*, std::vector<class cricket::Candidate> const&);

    // symbol: ?OnConnectionDestroyed@P2PTransportChannel@cricket@@AEAAXPEAVConnection@2@@Z
    MCAPI void OnConnectionDestroyed(class cricket::Connection*);

    // symbol: ?OnConnectionStateChange@P2PTransportChannel@cricket@@AEAAXPEAVConnection@2@@Z
    MCAPI void OnConnectionStateChange(class cricket::Connection*);

    // symbol: ?OnNominated@P2PTransportChannel@cricket@@AEAAXPEAVConnection@2@@Z
    MCAPI void OnNominated(class cricket::Connection*);

    // symbol: ?OnPortDestroyed@P2PTransportChannel@cricket@@AEAAXPEAVPortInterface@2@@Z
    MCAPI void OnPortDestroyed(class cricket::PortInterface*);

    // symbol: ?OnPortReady@P2PTransportChannel@cricket@@AEAAXPEAVPortAllocatorSession@2@PEAVPortInterface@2@@Z
    MCAPI void OnPortReady(class cricket::PortAllocatorSession*, class cricket::PortInterface*);

    // symbol:
    // ?OnPortsPruned@P2PTransportChannel@cricket@@AEAAXPEAVPortAllocatorSession@2@AEBV?$vector@PEAVPortInterface@cricket@@V?$allocator@PEAVPortInterface@cricket@@@std@@@std@@@Z
    MCAPI void OnPortsPruned(class cricket::PortAllocatorSession*, std::vector<class cricket::PortInterface*> const&);

    // symbol: ?OnReadPacket@P2PTransportChannel@cricket@@AEAAXPEAVConnection@2@PEBD_K_J@Z
    MCAPI void OnReadPacket(class cricket::Connection*, char const*, uint64, int64);

    // symbol: ?OnReadyToSend@P2PTransportChannel@cricket@@AEAAXPEAVConnection@2@@Z
    MCAPI void OnReadyToSend(class cricket::Connection*);

    // symbol: ?OnRoleConflict@P2PTransportChannel@cricket@@AEAAXPEAVPortInterface@2@@Z
    MCAPI void OnRoleConflict(class cricket::PortInterface*);

    // symbol: ?OnSelectedConnectionDestroyed@P2PTransportChannel@cricket@@AEAAXXZ
    MCAPI void OnSelectedConnectionDestroyed();

    // symbol: ?OnSentPacket@P2PTransportChannel@cricket@@AEAAXAEBUSentPacket@rtc@@@Z
    MCAPI void OnSentPacket(struct rtc::SentPacket const&);

    // symbol:
    // ?OnUnknownAddress@P2PTransportChannel@cricket@@AEAAXPEAVPortInterface@2@AEBVSocketAddress@rtc@@W4ProtocolType@2@PEAVIceMessage@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void OnUnknownAddress(
        class cricket::PortInterface*,
        class rtc::SocketAddress const&,
        ::cricket::ProtocolType,
        class cricket::IceMessage*,
        std::string const&,
        bool
    );

    // symbol:
    // ??0P2PTransportChannel@cricket@@AEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@HPEAVPortAllocator@1@PEAVAsyncDnsResolverFactoryInterface@webrtc@@V?$unique_ptr@VAsyncDnsResolverFactoryInterface@webrtc@@U?$default_delete@VAsyncDnsResolverFactoryInterface@webrtc@@@std@@@3@PEAVRtcEventLog@6@PEAVIceControllerFactoryInterface@1@PEAVActiveIceControllerFactoryInterface@1@PEBVFieldTrialsView@6@@Z
    MCAPI P2PTransportChannel(std::string_view, int, class cricket::PortAllocator*, class webrtc::AsyncDnsResolverFactoryInterface*, std::unique_ptr<class webrtc::AsyncDnsResolverFactoryInterface>, class webrtc::RtcEventLog*, class cricket::IceControllerFactoryInterface*, class cricket::ActiveIceControllerFactoryInterface*, class webrtc::FieldTrialsView const*);

    // symbol: ?ParseFieldTrials@P2PTransportChannel@cricket@@AEAAXPEBVFieldTrialsView@webrtc@@@Z
    MCAPI void ParseFieldTrials(class webrtc::FieldTrialsView const*);

    // symbol: ?PingConnection@P2PTransportChannel@cricket@@AEAAXPEAVConnection@2@@Z
    MCAPI void PingConnection(class cricket::Connection*);

    // symbol: ?PresumedWritable@P2PTransportChannel@cricket@@AEBA_NPEBVConnection@2@@Z
    MCAPI bool PresumedWritable(class cricket::Connection const*) const;

    // symbol: ?PruneConnections@P2PTransportChannel@cricket@@AEAAXXZ
    MCAPI void PruneConnections();

    // symbol: ?PrunePort@P2PTransportChannel@cricket@@AEAA_NPEAVPortInterface@2@@Z
    MCAPI bool PrunePort(class cricket::PortInterface*);

    // symbol: ?ReadyToSend@P2PTransportChannel@cricket@@AEBA_NPEBVConnection@2@@Z
    MCAPI bool ReadyToSend(class cricket::Connection const*) const;

    // symbol: ?RememberRemoteCandidate@P2PTransportChannel@cricket@@AEAAXAEBVCandidate@2@PEAVPortInterface@2@@Z
    MCAPI void RememberRemoteCandidate(class cricket::Candidate const&, class cricket::PortInterface*);

    // symbol: ?RequestSortAndStateUpdate@P2PTransportChannel@cricket@@AEAAXW4IceSwitchReason@2@@Z
    MCAPI void RequestSortAndStateUpdate(::cricket::IceSwitchReason);

    // symbol: ?SanitizeLocalCandidate@P2PTransportChannel@cricket@@AEBA?AVCandidate@2@AEBV32@@Z
    MCAPI class cricket::Candidate SanitizeLocalCandidate(class cricket::Candidate const&) const;

    // symbol: ?SanitizeRemoteCandidate@P2PTransportChannel@cricket@@AEBA?AVCandidate@2@AEBV32@@Z
    MCAPI class cricket::Candidate SanitizeRemoteCandidate(class cricket::Candidate const&) const;

    // symbol: ?SendPingRequestInternal@P2PTransportChannel@cricket@@AEAAXPEAVConnection@2@@Z
    MCAPI void SendPingRequestInternal(class cricket::Connection*);

    // symbol: ?SetReceiving@P2PTransportChannel@cricket@@AEAAX_N@Z
    MCAPI void SetReceiving(bool);

    // symbol: ?SetWritable@P2PTransportChannel@cricket@@AEAAX_N@Z
    MCAPI void SetWritable(bool);

    // symbol: ?SortConnectionsAndUpdateState@P2PTransportChannel@cricket@@AEAAXW4IceSwitchReason@2@@Z
    MCAPI void SortConnectionsAndUpdateState(::cricket::IceSwitchReason);

    // symbol:
    // ?SwitchSelectedConnectionInternal@P2PTransportChannel@cricket@@AEAAXPEAVConnection@2@W4IceSwitchReason@2@@Z
    MCAPI void SwitchSelectedConnectionInternal(class cricket::Connection*, ::cricket::IceSwitchReason);

    // symbol: ?UpdateTransportState@P2PTransportChannel@cricket@@AEAAXXZ
    MCAPI void UpdateTransportState();

    // NOLINTEND
};

}; // namespace cricket
