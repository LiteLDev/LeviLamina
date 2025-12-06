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
struct AppPlatform;
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct RakNetStatistics; }
namespace RakNet { struct RakPeerConfiguration; }
namespace RakNet { struct SystemAddress; }
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
        // vIndex: 0
        virtual ~ConnectionCallbacks() /*override*/ = default;

        // vIndex: 4
        virtual void onAllConnectionsClosed(::Connection::DisconnectFailReason, ::std::string const&, bool) = 0;

        // vIndex: 5
        virtual void onAllRemoteConnectionsClosed(::Connection::DisconnectFailReason, ::std::string const&, bool) = 0;

        // vIndex: 6
        virtual void onOutgoingConnectionFailed(::Connection::DisconnectFailReason, ::std::string const&) = 0;

        // vIndex: 7
        virtual void onWebsocketRequest(::std::string const&, ::std::string const&, ::std::function<void()>) = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
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

        public:
            // member functions
            // NOLINTBEGIN
            MCAPI ~ReadBufferData();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCFOLD void $dtor();
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::RakPeerInterface&>                                          mRakPeer;
        ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                                                mId;
        ::ll::TypedStorage<8, 32, ::std::string>                                                       mSendBuffer;
        ::ll::TypedStorage<8, 24, ::std::vector<::RakNetConnector::RakNetNetworkPeer::ReadBufferData>> mReadBufferDatas;
        ::ll::TypedStorage<4, 4, int> mApproximateMaxBps;
        ::ll::TypedStorage<4, 4, int> mLastPing;
        ::ll::TypedStorage<4, 4, int> mAveragePing;
        // NOLINTEND

    public:
        // prevent constructor by default
        RakNetNetworkPeer& operator=(RakNetNetworkPeer const&);
        RakNetNetworkPeer(RakNetNetworkPeer const&);
        RakNetNetworkPeer();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual void
        sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility) /*override*/;

        // vIndex: 7
        virtual ::NetworkPeer::DataStatus _receivePacket(
            ::std::string&                                                    outData,
            ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
        ) /*override*/;

        // vIndex: 2
        virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

        // vIndex: 3
        virtual void update() /*override*/;

        // vIndex: 5
        virtual bool isLocal() const /*override*/;

        // vIndex: 6
        virtual bool isEncrypted() const /*override*/;

        // vIndex: 0
        virtual ~RakNetNetworkPeer() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI RakNetNetworkPeer(::RakNet::RakPeerInterface& rakPeer, ::NetworkIdentifier const& id);

        MCAPI void newData(::std::string data);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::RakNet::RakPeerInterface& rakPeer, ::NetworkIdentifier const& id);
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI void $sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility);

        MCAPI ::NetworkPeer::DataStatus $_receivePacket(
            ::std::string&                                                    outData,
            ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
        );

        MCAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

        MCAPI void $update();

        MCFOLD bool $isLocal() const;

        MCFOLD bool $isEncrypted() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct PingCallbackData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>               mAddress;
        ::ll::TypedStorage<8, 64, ::std::function<void(uint)>> mAction;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PingCallbackData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>          mNATPunchServerId;
    ::ll::TypedStorage<8, 472, ::Social::GameConnectionInfo> mBackupGameConnection;
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
    ::ll::TypedStorage<8, 472, ::Social::GameConnectionInfo>       mConnectedGameInfo;
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
    // vIndex: 0
    virtual ~RakNetConnector() /*override*/;

    // vIndex: 9
    virtual bool host(::ConnectionDefinition const& definition) /*override*/;

    // vIndex: 10
    virtual bool connect(
        ::Social::GameConnectionInfo const& gameConnection,
        ::Social::GameConnectionInfo const& backupConnection
    ) /*override*/;

    // vIndex: 11
    virtual void disconnect() /*override*/;

    // vIndex: 12
    virtual void tick() /*override*/;

    // vIndex: 13
    virtual void runEvents() /*override*/;

    // vIndex: 15
    virtual void closeNetworkConnection(::NetworkIdentifier const& id) /*override*/;

    // vIndex: 17
    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const& id) /*override*/;

    // vIndex: 14
    virtual bool isServer() const /*override*/;

    // vIndex: 1
    virtual ::std::string getLocalIp() /*override*/;

    // vIndex: 2
    virtual ushort getPort() const /*override*/;

    // vIndex: 3
    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const /*override*/;

    // vIndex: 4
    virtual bool isIPv4Supported() const /*override*/;

    // vIndex: 5
    virtual bool isIPv6Supported() const /*override*/;

    // vIndex: 6
    virtual ushort getIPv4Port() const /*override*/;

    // vIndex: 7
    virtual ushort getIPv6Port() const /*override*/;

    // vIndex: 16
    virtual ::NetworkIdentifier getNetworkIdentifier() const /*override*/;

    // vIndex: 20
    virtual ::RakNet::RakPeerInterface* getPeer();

    // vIndex: 19
    virtual ::RakNet::RakPeerInterface const* getPeer() const;

    // vIndex: 8
    virtual ::TransportLayer getNetworkType() const /*override*/;

    // vIndex: 18
    virtual void setDisableLanSignaling(bool) /*override*/;

    // vIndex: 1
    virtual void _onDisable() /*override*/;

    // vIndex: 2
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

    MCAPI ::std::shared_ptr<::RakNetConnector::RakNetNetworkPeer> _createPeer(::NetworkIdentifier const& id);

    MCAPI ::std::vector<::std::string> _getLocalIps() const;

    MCAPI ::std::vector<::RakNet::SystemAddress> _getRefinedLocalIps() const;

    MCAPI void _storeLocalIP();

    MCAPI void
    getPingTimeForConnection(::std::string const& address, int port, ::std::function<void(uint)> pingTimeCallback);

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $host(::ConnectionDefinition const& definition);

    MCAPI bool
    $connect(::Social::GameConnectionInfo const& gameConnection, ::Social::GameConnectionInfo const& backupConnection);

    MCAPI void $disconnect();

    MCAPI void $tick();

    MCAPI void $runEvents();

    MCAPI void $closeNetworkConnection(::NetworkIdentifier const& id);

    MCAPI bool $setApplicationHandshakeCompleted(::NetworkIdentifier const& id);

    MCAPI bool $isServer() const;

    MCAPI ::std::string $getLocalIp();

    MCAPI ushort $getPort() const;

    MCAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCAPI bool $isIPv4Supported() const;

    MCAPI bool $isIPv6Supported() const;

    MCAPI ushort $getIPv4Port() const;

    MCAPI ushort $getIPv6Port() const;

    MCAPI ::NetworkIdentifier $getNetworkIdentifier() const;

    MCFOLD ::RakNet::RakPeerInterface* $getPeer();

    MCFOLD ::RakNet::RakPeerInterface const* $getPeer() const;

    MCFOLD void $setDisableLanSignaling(bool);

    MCAPI void $_onDisable();

    MCAPI void $_onEnable();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForConnector();

    MCNAPI static void** $vftableForNetworkEnableDisableListener();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
