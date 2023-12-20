#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/nethernet/ESendType.h"
#include "mc/network/nethernet/ESessionError.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectError; }
namespace NetherNet { class ConnectRequest; }
namespace NetherNet { class ConnectResponse; }
namespace NetherNet { class NetworkSession; }
namespace NetherNet { class SimpleNetworkInterfaceImpl; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace NetherNet {

class NetworkSessionManager {
public:
    // NetworkSessionManager inner types declare
    // clang-format off
    struct NetworkSessionRecord;
    // clang-format on

    // NetworkSessionManager inner types define
    struct NetworkSessionRecord {
    public:
        // prevent constructor by default
        NetworkSessionRecord& operator=(NetworkSessionRecord const&);
        NetworkSessionRecord(NetworkSessionRecord const&);
        NetworkSessionRecord();

    public:
        // NOLINTBEGIN
        // symbol: ??1NetworkSessionRecord@NetworkSessionManager@NetherNet@@QEAA@XZ
        MCAPI ~NetworkSessionRecord();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NetworkSessionManager& operator=(NetworkSessionManager const&);
    NetworkSessionManager(NetworkSessionManager const&);
    NetworkSessionManager();

public:
    // NOLINTBEGIN
    // symbol: ?AcceptSessionWithUser@NetworkSessionManager@NetherNet@@QEAA_NUNetworkID@2@@Z
    MCAPI bool AcceptSessionWithUser(struct NetherNet::NetworkID);

    // symbol: ?ClearPacketData@NetworkSessionManager@NetherNet@@QEAAXUNetworkID@2@@Z
    MCAPI void ClearPacketData(struct NetherNet::NetworkID);

    // symbol: ?CloseSessionWithUser@NetworkSessionManager@NetherNet@@QEAA_NUNetworkID@2@@Z
    MCAPI bool CloseSessionWithUser(struct NetherNet::NetworkID);

    // symbol: ?GetSessionState@NetworkSessionManager@NetherNet@@QEAA_NUNetworkID@2@PEAUSessionState@2@@Z
    MCAPI bool GetSessionState(struct NetherNet::NetworkID, struct NetherNet::SessionState*);

    // symbol: ?HasKnownConnection@NetworkSessionManager@NetherNet@@QEAA_NUNetworkID@2@@Z
    MCAPI bool HasKnownConnection(struct NetherNet::NetworkID);

    // symbol: ?IsPacketAvailable@NetworkSessionManager@NetherNet@@QEAA_NUNetworkID@2@PEAI@Z
    MCAPI bool IsPacketAvailable(struct NetherNet::NetworkID, uint*);

    // symbol: ??0NetworkSessionManager@NetherNet@@QEAA@PEAVSimpleNetworkInterfaceImpl@1@@Z
    MCAPI explicit NetworkSessionManager(class NetherNet::SimpleNetworkInterfaceImpl*);

    // symbol: ?OnRemoteMessageReceived@NetworkSessionManager@NetherNet@@QEAAXUNetworkID@2@PEBX_K@Z
    MCAPI void OnRemoteMessageReceived(struct NetherNet::NetworkID, void const*, uint64);

    // symbol: ?OpenSessionWithUser@NetworkSessionManager@NetherNet@@QEAA_NUNetworkID@2@@Z
    MCAPI bool OpenSessionWithUser(struct NetherNet::NetworkID);

    // symbol: ?PeriodicDeadSessionCleaup@NetworkSessionManager@NetherNet@@QEAAXXZ
    MCAPI void PeriodicDeadSessionCleaup();

    // symbol: ?ProcessConnectError@NetworkSessionManager@NetherNet@@QEAAXUNetworkID@2@W4ESessionError@2@@Z
    MCAPI void ProcessConnectError(struct NetherNet::NetworkID, ::NetherNet::ESessionError);

    // symbol: ?ProcessSignal@NetworkSessionManager@NetherNet@@QEAAXUNetworkID@2@AEBVCandidateAdd@2@@Z
    MCAPI void ProcessSignal(struct NetherNet::NetworkID, class NetherNet::CandidateAdd const&);

    // symbol: ?ProcessSignal@NetworkSessionManager@NetherNet@@QEAAXUNetworkID@2@AEBVConnectError@2@@Z
    MCAPI void ProcessSignal(struct NetherNet::NetworkID, class NetherNet::ConnectError const&);

    // symbol: ?ProcessSignal@NetworkSessionManager@NetherNet@@QEAAXUNetworkID@2@AEBVConnectRequest@2@@Z
    MCAPI void ProcessSignal(struct NetherNet::NetworkID, class NetherNet::ConnectRequest const&);

    // symbol: ?ProcessSignal@NetworkSessionManager@NetherNet@@QEAAXUNetworkID@2@AEBVConnectResponse@2@@Z
    MCAPI void ProcessSignal(struct NetherNet::NetworkID, class NetherNet::ConnectResponse const&);

    // symbol: ?ReadPacket@NetworkSessionManager@NetherNet@@QEAA_NUNetworkID@2@PEAXIPEAI@Z
    MCAPI bool ReadPacket(struct NetherNet::NetworkID, void*, uint, uint*);

    // symbol: ?RemoteMessageReceived@NetworkSessionManager@NetherNet@@QEAAXUNetworkID@2@PEBX_K@Z
    MCAPI void RemoteMessageReceived(struct NetherNet::NetworkID, void const*, uint64);

    // symbol: ?SendPacket@NetworkSessionManager@NetherNet@@QEAA_NUNetworkID@2@PEBDIW4ESendType@2@@Z
    MCAPI bool SendPacket(struct NetherNet::NetworkID, char const*, uint, ::NetherNet::ESendType);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?CloseSessionIfInactive@NetworkSessionManager@NetherNet@@AEAAXUNetworkID@2@AEAUNetworkSessionRecord@12@@Z
    MCAPI void
    CloseSessionIfInactive(struct NetherNet::NetworkID, struct NetherNet::NetworkSessionManager::NetworkSessionRecord&);

    // symbol: ?FilterDeadSession@NetworkSessionManager@NetherNet@@AEAAXUNetworkID@2@AEAUNetworkSessionRecord@12@@Z
    MCAPI void
    FilterDeadSession(struct NetherNet::NetworkID, struct NetherNet::NetworkSessionManager::NetworkSessionRecord&);

    // symbol: ?FindSpecificSession@NetworkSessionManager@NetherNet@@AEAAPEAVNetworkSession@2@UNetworkID@2@AEB_K@Z
    MCAPI class NetherNet::NetworkSession* FindSpecificSession(struct NetherNet::NetworkID, uint64 const&);

    // symbol: ?GetCurrentSession@NetworkSessionManager@NetherNet@@AEAAPEAVNetworkSession@2@UNetworkID@2@@Z
    MCAPI class NetherNet::NetworkSession* GetCurrentSession(struct NetherNet::NetworkID);

    // symbol:
    // ?InitiateIncomingSession@NetworkSessionManager@NetherNet@@AEAA_NUNetworkID@2@AEB_KV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@@Z
    MCAPI bool
    InitiateIncomingSession(struct NetherNet::NetworkID, uint64 const&, std::unique_ptr<class webrtc::SessionDescriptionInterface>);

    // symbol: ?InitiateOutgoingSession@NetworkSessionManager@NetherNet@@AEAAPEAVNetworkSession@2@UNetworkID@2@@Z
    MCAPI class NetherNet::NetworkSession* InitiateOutgoingSession(struct NetherNet::NetworkID);

    // NOLINTEND
};

}; // namespace NetherNet
