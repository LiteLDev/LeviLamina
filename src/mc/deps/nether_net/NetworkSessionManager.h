#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
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
        ::ll::UntypedStorage<8, 24> mUnkc9f574;
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
    virtual ~NetworkSessionManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool CloseSessionWithReason(
        ::NetherNet::NetworkID     networkIDRemote,
        uint64                     connectionId,
        ::NetherNet::ESessionError reason
    );

    MCNAPI ::gsl::not_null<::NetherNet::NetworkSession*> FindOrCreateSpecificSession(
        ::NetherNet::NetworkID                                          remoteId,
        uint64                                                          connectionId,
        ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const& sessionsLock,
        bool                                                            disableTrickleIce
    );

    MCNAPI void NotifyOnSessionOpen(::NetherNet::NetworkID networkIDRemote, uint64 connectionId);

    MCNAPI void PeriodicDeadSessionCleanupOnSignalThread();

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
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
