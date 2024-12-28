#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESendType.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/SignalingChannelId.h"
#include "mc/deps/nether_net/utils/ErrorOr.h"
#include "mc/platform/threading/UniqueLock.h"

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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk5dafa5;
        // NOLINTEND

    public:
        // prevent constructor by default
        NetworkSessionRecord& operator=(NetworkSessionRecord const&);
        NetworkSessionRecord(NetworkSessionRecord const&);
        NetworkSessionRecord();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk928996;
    ::ll::UntypedStorage<8, 80> mUnk2acdd6;
    ::ll::UntypedStorage<8, 80> mUnk27e415;
    ::ll::UntypedStorage<8, 16> mUnk98d923;
    ::ll::UntypedStorage<8, 8>  mUnk97086a;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSessionManager& operator=(NetworkSessionManager const&);
    NetworkSessionManager(NetworkSessionManager const&);
    NetworkSessionManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void ClearPacketData(::NetherNet::NetworkID remoteId, uint64 connectionId);

    MCAPI void CloseInactiveSessionsOnSignalThread(
        ::NetherNet::NetworkID remoteID,
        ::std::tuple<
            ::std::vector<::std::unique_ptr<::NetherNet::NetworkSession>>&,
            ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const&> const& list
    );

    MCAPI bool CloseSessionWithReason(
        ::NetherNet::NetworkID     networkIDRemote,
        uint64                     connectionId,
        ::NetherNet::ESessionError reason
    );

    MCAPI bool CloseSessionWithUser(::NetherNet::NetworkID networkIDRemote, uint64 connectionId);

    MCAPI void FilterDeadSessions(
        ::NetherNet::NetworkID remoteID,
        ::std::tuple<
            ::std::vector<::std::unique_ptr<::NetherNet::NetworkSession>>&,
            ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const&> const& list
    );

    MCAPI ::NetherNet::NetworkSession* FindOrCreateSpecificSession(
        ::NetherNet::NetworkID                                          remoteId,
        uint64                                                          connectionId,
        ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const& sessionsLock
    );

    MCAPI ::std::vector<::std::unique_ptr<::NetherNet::NetworkSession>>& GetCurrentSessions(
        ::NetherNet::NetworkID                                          remoteID,
        ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const& sessionsLock
    );

    MCAPI bool
    GetSessionState(::NetherNet::NetworkID peerId, uint64 connectionId, ::NetherNet::SessionState* pConnectionState);

    MCAPI bool HasKnownConnection(::NetherNet::NetworkID peerId);

    MCAPI ::NetherNet::NetworkSession* InitiateOutgoingSession(
        ::NetherNet::NetworkID                                          remoteID,
        ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const& sessionsLock
    );

    MCAPI bool IsPacketAvailable(::NetherNet::NetworkID remoteId, uint64 connectionId, uint* pcbMessageSize);

    MCAPI explicit NetworkSessionManager(::NetherNet::SimpleNetworkInterfaceImpl* pNetworkInterface);

    MCAPI void NotifyOnSessionOpen(::NetherNet::NetworkID networkIDRemote, uint64 connectionId);

    MCAPI bool NotifyOnSessionRequested(::NetherNet::NetworkID networkIDRemote, uint64 connectionId);

    MCAPI void
    OnRemoteMessageReceived(::NetherNet::NetworkID remoteID, uint64 connectionId, void const* pvData, uint64 cbSize);

    MCAPI bool OpenSessionWithUser(::NetherNet::NetworkID networkIDRemote);

    MCAPI void PeriodicDeadSessionCleanupOnSignalThread();

    MCAPI void ProcessError(::NetherNet::NetworkID remoteID, uint64 connectionId, ::NetherNet::ESessionError error);

    MCAPI void ProcessSignal(
        ::NetherNet::NetworkID           remoteID,
        ::NetherNet::ConnectError const& signal,
        ::NetherNet::SignalingChannelId
    ) const;

    MCAPI void ProcessSignal(
        ::NetherNet::NetworkID              remoteID,
        ::NetherNet::ConnectResponse const& signal,
        ::NetherNet::SignalingChannelId
    ) const;

    MCAPI void ProcessSignal(
        ::NetherNet::NetworkID           remoteID,
        ::NetherNet::CandidateAdd const& signal,
        ::NetherNet::SignalingChannelId
    );

    MCAPI void ProcessSignal(
        ::NetherNet::NetworkID             remoteID,
        ::NetherNet::ConnectRequest const& signal,
        ::NetherNet::SignalingChannelId    sourceChannel
    );

    MCAPI bool
    ReadPacket(::NetherNet::NetworkID remoteId, uint64 connectionId, void* pubDest, uint cbDest, uint* pcbMessageSize);

    MCAPI void
    RemoteMessageReceived(::NetherNet::NetworkID remoteID, uint64 connectionId, void const* pvData, uint64 cbSize);

    MCAPI ::std::vector<::std::unique_ptr<::NetherNet::NetworkSession>>
    RemoveSession(::NetherNet::NetworkID remoteID, uint64 connectionId);

    MCAPI bool SendPacket(
        ::NetherNet::NetworkID networkIDRemote,
        uint64                 connectionId,
        char const*            pbData,
        uint                   cbData,
        ::NetherNet::ESendType eSendType
    );

    MCAPI ::NetherNet::ErrorOr<void, ::NetherNet::ESessionError> SendToSignalingChannel(
        ::NetherNet::NetworkID networkIDTo,
        ::std::variant<
            ::NetherNet::ConnectRequest,
            ::NetherNet::ConnectResponse,
            ::NetherNet::ConnectError,
            ::NetherNet::CandidateAdd> const&            signal,
        ::std::optional<::NetherNet::SignalingChannelId> preference
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetherNet::SimpleNetworkInterfaceImpl* pNetworkInterface);
    // NOLINTEND
};

} // namespace NetherNet
