#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/Compressibility.h"
#include "mc/network/ConnectionDefinition.h"
#include "mc/network/Connector.h"
#include "mc/network/GameConnectionInfo.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct RakNetStatistics; }
namespace RakNet { struct RakPeerConfiguration; }
// clang-format on

class RakNetConnector : public ::RemoteConnector {
public:
    // RakNetConnector inner types declare
    // clang-format off
    struct ConnectionCallbacks;
    struct PingCallbackData;
    class RakNetNetworkPeer;
    // clang-format on

    // RakNetConnector inner types define
    struct ConnectionCallbacks : public ::Connector::ConnectionCallbacks {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ConnectionCallbacks() /*override*/ = default;

        virtual void
        onAllConnectionsClosed(::Connection::DisconnectFailReason discoReason, bool skipDisconnectMessage) = 0;

        virtual void
        onAllRemoteConnectionsClosed(::Connection::DisconnectFailReason discoReason, bool skipDisconnectMessage) = 0;

        virtual void onOutgoingConnectionFailed(::Connection::DisconnectFailReason discoReason) = 0;

        virtual void onWebsocketRequest(
            ::std::string const&    serverAddress,
            ::std::string const&    payload,
            ::std::function<void()> errorCallback
        ) = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    struct PingCallbackData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>               mAddress;
        ::ll::TypedStorage<8, 64, ::std::function<void(uint)>> mAction;
        // NOLINTEND
    };

    class RakNetNetworkPeer : public ::NetworkPeer {
    public:
        // RakNetNetworkPeer inner types declare
        // clang-format off
        struct ReadBufferData;
        // clang-format on

        // RakNetNetworkPeer inner types define
        struct ReadBufferData {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mTimepoint;
            ::ll::TypedStorage<8, 32, ::std::string>                          mReadBuffer;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::RakNet::RakPeerInterface&   mRakPeer;
        ::NetworkIdentifier           mId;
        ::std::string                 mSendBuffer;
        ::std::vector<ReadBufferData> mReadBufferDatas;
        int                           mApproximateMaxBps;
        int                           mLastPing;
        int                           mAveragePing;
        // NOLINTEND

    public:
        // prevent constructor by default
        RakNetNetworkPeer& operator=(RakNetNetworkPeer const&);
        RakNetNetworkPeer(RakNetNetworkPeer const&);
        RakNetNetworkPeer();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;

        virtual ::NetworkPeer::DataStatus
        _receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&) /*override*/;

        virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

        virtual void update() /*override*/;

        virtual bool isLocal() const /*override*/;

        virtual bool isEncrypted() const /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>          mNATPunchServerId;
    ::ll::TypedStorage<8, 520, ::Social::GameConnectionInfo> mBackupGameConnection;
    ::ll::TypedStorage<1, 1, bool>                           mTryBackupConnection;
    ::ll::TypedStorage<8, 16, ::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)>>
                                                                   mRakPeer;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                mServerId;
    ::ll::TypedStorage<8, 24, ::RakPeerHelper>                     mPeerHelper;
    ::ll::TypedStorage<8, 8, ::RakPeerHelper::IPSupportInterface&> mIPSupportInterface;
    ::ll::TypedStorage<1, 1, bool>                                 mIsAwaitingNatClient;
    ::ll::TypedStorage<1, 1, bool>                                 mIsServer;
    ::ll::TypedStorage<1, 1, bool>                                 mIsDisconnecting;
    ::ll::TypedStorage<1, 1, bool>                                 mConnectingToClient;
    ::ll::TypedStorage<8, 520, ::Social::GameConnectionInfo>       mConnectedGameInfo;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::NetworkIdentifier, ::std::weak_ptr<::RakNetConnector::RakNetNetworkPeer>>>
                                                                                      mPeers;
    ::ll::TypedStorage<1, 1, bool>                                                    mWasHostWhenSuspended;
    ::ll::TypedStorage<4, 20, ::ConnectionDefinition>                                 mPreviousConnectionDefinition;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mResolvedIP;
    ::ll::TypedStorage<8, 24, ::std::vector<::RakNetConnector::PingCallbackData>>     mPingTimeCallbacks;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MPMCQueue<::std::function<void()>>>> mOwnedThreadWork;
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetConnector& operator=(RakNetConnector const&);
    RakNetConnector(RakNetConnector const&);
    RakNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RakNetConnector() /*override*/ = default;

    virtual bool host(::ConnectionDefinition const&) /*override*/;

    virtual bool connect(
        ::Social::GameConnectionInfo const&,
        ::Social::GameConnectionInfo const&,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator>
    ) /*override*/;

    virtual void disconnect() /*override*/;

    virtual void tick() /*override*/;

    virtual void runEvents() /*override*/;

    virtual void closeNetworkConnection(::NetworkIdentifier const&) /*override*/;

    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&) /*override*/;

    virtual bool isServer() const /*override*/;

    virtual ::std::string getLocalIp() /*override*/;

    virtual ushort getPort() const /*override*/;

    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const /*override*/;

    virtual bool isIPv4Supported() const /*override*/;

    virtual bool isIPv6Supported() const /*override*/;

    virtual ushort getIPv4Port() const /*override*/;

    virtual ushort getIPv6Port() const /*override*/;

    virtual ::NetworkIdentifier getNetworkIdentifier() const /*override*/;

    virtual ::RakNet::RakPeerInterface* getPeer();

    virtual ::RakNet::RakPeerInterface const* getPeer() const;

    virtual ::TransportLayer getNetworkType() const /*override*/;

    virtual void setDisableLanSignaling(bool) /*override*/;

    virtual void _onDisable() /*override*/;

    virtual void _onEnable() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RakNetConnector(
        ::RakNetConnector::ConnectionCallbacks&          callbacks,
        ::RakPeerHelper::IPSupportInterface&             ipInterface,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform,
        ::RakNet::RakPeerConfiguration const&            rakPeerConfig
    );

#ifdef LL_PLAT_C
    MCAPI void
    getPingTimeForConnection(::std::string const& address, int port, ::std::function<void(uint)> pingTimeCallback);
#endif

    MCAPI bool getStatistics(::RakNet::RakNetStatistics& rns);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::RakNetConnector::ConnectionCallbacks&          callbacks,
        ::RakPeerHelper::IPSupportInterface&             ipInterface,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform,
        ::RakNet::RakPeerConfiguration const&            rakPeerConfig
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
