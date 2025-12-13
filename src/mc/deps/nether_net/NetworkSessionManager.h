#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
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
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
// clang-format on

namespace NetherNet {

class NetworkSessionManager : public ::NetherNet::ContextProxy {
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
    ::ll::UntypedStorage<8, 80> mUnk27e415;
    ::ll::UntypedStorage<8, 16> mUnk98d923;
    ::ll::UntypedStorage<8, 8>  mUnk829b85;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSessionManager& operator=(NetworkSessionManager const&);
    NetworkSessionManager(NetworkSessionManager const&);
    NetworkSessionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkSessionManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CloseInactiveSessionsOnSignalThread(
        ::NetherNet::NetworkID remoteID,
        ::std::tuple<
            ::std::vector<::std::unique_ptr<::NetherNet::NetworkSession>>&,
            ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const&> const& list
    );

    MCNAPI bool CloseSessionWithReason(
        ::NetherNet::NetworkID     networkIDRemote,
        uint64                     connectionId,
        ::NetherNet::ESessionError reason
    );

    MCNAPI ::gsl::not_null<::NetherNet::NetworkSession*> FindOrCreateSpecificSession(
        ::NetherNet::NetworkID                                          remoteId,
        uint64                                                          connectionId,
        ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const& sessionsLock
    );

    MCNAPI ::std::vector<::std::unique_ptr<::NetherNet::NetworkSession>>& GetCurrentSessions(
        ::NetherNet::NetworkID remoteID,
        ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const&
    );

    MCNAPI bool
    GetSessionState(::NetherNet::NetworkID peerId, uint64 connectionId, ::NetherNet::SessionState* pConnectionState);

    MCNAPI ::NetherNet::ESessionError InitiateIncomingSession(
        ::NetherNet::NetworkID                                          remoteID,
        ::NetherNet::ConnectRequest const&                              offer,
        ::NetherNet::SignalingChannelId                                 source,
        ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const& sessionsLock
    );

    MCNAPI ::NetherNet::NetworkSession* InitiateOutgoingSession(
        ::NetherNet::NetworkID                                          remoteID,
        ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const& sessionsLock
    );

    MCNAPI bool IsPacketAvailable(::NetherNet::NetworkID remoteId, uint64 connectionId, uint* pcbMessageSize) const;

    MCNAPI void NotifyOnSessionOpen(::NetherNet::NetworkID networkIDRemote, uint64 connectionId);

    MCNAPI void PeriodicDeadSessionCleanupOnSignalThread();

    MCNAPI void ProcessError(::NetherNet::NetworkID remoteID, uint64 connectionId, ::NetherNet::ESessionError error);

    MCNAPI void ProcessSignal(
        ::NetherNet::NetworkID           remoteID,
        ::NetherNet::ConnectError const& error,
        ::NetherNet::SignalingChannelId
    ) const;

    MCNAPI void ProcessSignal(
        ::NetherNet::NetworkID           remoteID,
        ::NetherNet::CandidateAdd const& signal,
        ::NetherNet::SignalingChannelId
    );

    MCNAPI void ProcessSignal(
        ::NetherNet::NetworkID              remoteID,
        ::NetherNet::ConnectResponse const& signal,
        ::NetherNet::SignalingChannelId
    ) const;

    MCNAPI bool
    ReadPacket(::NetherNet::NetworkID remoteId, uint64 connectionId, void* pubDest, uint cbDest, uint* pcbMessageSize);

    MCNAPI ::std::vector<::std::unique_ptr<::NetherNet::NetworkSession>>
    RemoveSession(::NetherNet::NetworkID remoteID, uint64 connectionId);

    MCNAPI bool SendPacket(
        ::NetherNet::NetworkID networkIDRemote,
        uint64                 connectionId,
        uchar const*           data,
        uint64                 size,
        ::NetherNet::ESendType type
    );

    MCNAPI ::NetherNet::ErrorOr<void, ::NetherNet::ESessionError> SendToSignalingChannel(
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
