#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/PeerConnectionInterface.h"
#include "mc/deps/webrtc/PeerConnectionObserver.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"
#include "mc/network/nethernet/ESendType.h"
#include "mc/network/nethernet/ESessionError.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectResponse; }
namespace NetherNet { class NetworkSessionManager; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
namespace cricket { class Candidate; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class PeerConnectionObserver; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class StatsReport; }
namespace webrtc { struct DataBuffer; }
// clang-format on

namespace NetherNet {

class NetworkSession : public ::webrtc::PeerConnectionObserver {
public:
    // prevent constructor by default
    NetworkSession& operator=(NetworkSession const&);
    NetworkSession(NetworkSession const&);
    NetworkSession();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NetworkSession@NetherNet@@UEAA@XZ
    virtual ~NetworkSession();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol:
    // ?OnDataChannel@NetworkSession@NetherNet@@UEAAXV?$scoped_refptr@VDataChannelInterface@webrtc@@@rtc@@@Z
    virtual void OnDataChannel(class rtc::scoped_refptr<class webrtc::DataChannelInterface>);

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol:
    // ?OnIceConnectionChange@NetworkSession@NetherNet@@UEAAXW4IceConnectionState@PeerConnectionInterface@webrtc@@@Z
    virtual void OnIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState);

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol:
    // ?OnConnectionChange@NetworkSession@NetherNet@@UEAAXW4PeerConnectionState@PeerConnectionInterface@webrtc@@@Z
    virtual void OnConnectionChange(::webrtc::PeerConnectionInterface::PeerConnectionState);

    // vIndex: 10, symbol:
    // ?OnIceGatheringChange@NetworkSession@NetherNet@@UEAAXW4IceGatheringState@PeerConnectionInterface@webrtc@@@Z
    virtual void OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState);

    // vIndex: 11, symbol: ?OnIceCandidate@NetworkSession@NetherNet@@UEAAXPEBVIceCandidateInterface@webrtc@@@Z
    virtual void OnIceCandidate(class webrtc::IceCandidateInterface const*);

    // symbol:
    // ?OnIceCandidatesRemoved@NetworkSession@NetherNet@@UEAAXAEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
    MCVAPI void OnIceCandidatesRemoved(std::vector<class cricket::Candidate> const&);

    // symbol: ?OnIceConnectionReceivingChange@NetworkSession@NetherNet@@UEAAX_N@Z
    MCVAPI void OnIceConnectionReceivingChange(bool);

    // symbol: ?OnRenegotiationNeeded@NetworkSession@NetherNet@@UEAAXXZ
    MCVAPI void OnRenegotiationNeeded();

    // symbol: ?OnSignalingChange@NetworkSession@NetherNet@@UEAAXW4SignalingState@PeerConnectionInterface@webrtc@@@Z
    MCVAPI void OnSignalingChange(::webrtc::PeerConnectionInterface::SignalingState);

    // symbol: ?AcceptSession@NetworkSession@NetherNet@@QEAAXXZ
    MCAPI void AcceptSession();

    // symbol: ?Close@NetworkSession@NetherNet@@QEAAXXZ
    MCAPI void Close();

    // symbol: ?GetSessionState@NetworkSession@NetherNet@@QEAA_NPEAUSessionState@2@@Z
    MCAPI bool GetSessionState(struct NetherNet::SessionState*);

    // symbol:
    // ?InitializeIncoming@NetworkSession@NetherNet@@QEAAXUNetworkID@2@AEB_KV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@@Z
    MCAPI void
    InitializeIncoming(struct NetherNet::NetworkID, uint64 const&, std::unique_ptr<class webrtc::SessionDescriptionInterface>);

    // symbol: ?InitializeOutgoing@NetworkSession@NetherNet@@QEAAXUNetworkID@2@@Z
    MCAPI void InitializeOutgoing(struct NetherNet::NetworkID);

    // symbol: ?IsConnectionAlive@NetworkSession@NetherNet@@QEBA_NXZ
    MCAPI bool IsConnectionAlive() const;

    // symbol: ?IsDeadSession@NetworkSession@NetherNet@@QEAA_NV?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@Z
    MCAPI bool IsDeadSession(std::chrono::seconds);

    // symbol: ?IsInactiveSession@NetworkSession@NetherNet@@QEAA_NXZ
    MCAPI bool IsInactiveSession();

    // symbol: ??0NetworkSession@NetherNet@@QEAA@PEAVNetworkSessionManager@1@@Z
    MCAPI explicit NetworkSession(class NetherNet::NetworkSessionManager*);

    // symbol: ?OnDataChannelMessage@NetworkSession@NetherNet@@QEAAXPEAVDataChannelInterface@webrtc@@AEBUDataBuffer@4@@Z
    MCAPI void OnDataChannelMessage(class webrtc::DataChannelInterface*, struct webrtc::DataBuffer const&);

    // symbol: ?OnDataChannelStateChange@NetworkSession@NetherNet@@QEAAXPEAVDataChannelInterface@webrtc@@@Z
    MCAPI void OnDataChannelStateChange(class webrtc::DataChannelInterface*);

    // symbol:
    // ?OnStatsRequestComplete@NetworkSession@NetherNet@@QEAAXAEBV?$vector@PEBVStatsReport@webrtc@@V?$allocator@PEBVStatsReport@webrtc@@@std@@@std@@@Z
    MCAPI void OnStatsRequestComplete(std::vector<class webrtc::StatsReport const*> const&);

    // symbol: ?ProcessConnectError@NetworkSession@NetherNet@@QEAAXW4ESessionError@2@@Z
    MCAPI void ProcessConnectError(::NetherNet::ESessionError);

    // symbol: ?ProcessSignal@NetworkSession@NetherNet@@QEAAXAEBVCandidateAdd@2@@Z
    MCAPI void ProcessSignal(class NetherNet::CandidateAdd const&);

    // symbol: ?ProcessSignal@NetworkSession@NetherNet@@QEAAXAEBVConnectResponse@2@@Z
    MCAPI void ProcessSignal(class NetherNet::ConnectResponse const&);

    // symbol: ?SendPacket@NetworkSession@NetherNet@@QEAAXPEBDIW4ESendType@2@@Z
    MCAPI void SendPacket(char const*, uint, ::NetherNet::ESendType);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?ApplyConnectionFlags@NetworkSession@NetherNet@@AEAAXPEAURTCConfiguration@PeerConnectionInterface@webrtc@@I@Z
    MCAPI void ApplyConnectionFlags(struct webrtc::PeerConnectionInterface::RTCConfiguration*, uint);

    // symbol: ?CheckSendDeferredData@NetworkSession@NetherNet@@AEAAXXZ
    MCAPI void CheckSendDeferredData();

    // symbol: ?CheckUpdateStats@NetworkSession@NetherNet@@AEAAXXZ
    MCAPI void CheckUpdateStats();

    // symbol: ?ProcessIceCandidates@NetworkSession@NetherNet@@AEAAXXZ
    MCAPI void ProcessIceCandidates();

    // symbol: ?TrySendSessionResponse@NetworkSession@NetherNet@@AEAAXXZ
    MCAPI void TrySendSessionResponse();

    // symbol: ?UpdateDataChannelStates@NetworkSession@NetherNet@@AEAAXXZ
    MCAPI void UpdateDataChannelStates();

    // symbol: ?UpdateSessionActivity@NetworkSession@NetherNet@@AEAAXXZ
    MCAPI void UpdateSessionActivity();

    // NOLINTEND
};

}; // namespace NetherNet
