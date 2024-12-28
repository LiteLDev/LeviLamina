#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/Compressibility.h"
#include "mc/network/Connector.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class NetworkIdentifier;
class RakPeerHelper;
struct ConnectionDefinition;
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct RakNetStatistics; }
namespace RakNet { struct RakPeerConfiguration; }
namespace RakNet { struct SystemAddress; }
namespace Social { class GameConnectionInfo; }
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
        // prevent constructor by default
        ConnectionCallbacks& operator=(ConnectionCallbacks const&);
        ConnectionCallbacks(ConnectionCallbacks const&);
        ConnectionCallbacks();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ConnectionCallbacks() /*override*/;

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
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
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
            // prevent constructor by default
            ReadBufferData& operator=(ReadBufferData const&);
            ReadBufferData(ReadBufferData const&);
            ReadBufferData();

        public:
            // member functions
            // NOLINTBEGIN
            MCAPI ~ReadBufferData();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCAPI void $dtor();
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::RakPeerInterface&>                                          mRakPeer;
        ::ll::TypedStorage<8, 160, ::NetworkIdentifier>                                                mId;
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

        // vIndex: 2
        virtual ::NetworkPeer::DataStatus receivePacket(
            ::std::string&                                                    outData,
            ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
        ) /*override*/;

        // vIndex: 3
        virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

        // vIndex: 4
        virtual void update() /*override*/;

        // vIndex: 6
        virtual bool isLocal() const /*override*/;

        // vIndex: 7
        virtual bool isEncrypted() const /*override*/;

        // vIndex: 0
        virtual ~RakNetNetworkPeer() /*override*/;
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
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI void $sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility);

        MCAPI ::NetworkPeer::DataStatus $receivePacket(
            ::std::string&                                                    outData,
            ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
        );

        MCAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

        MCAPI void $update();

        MCAPI bool $isLocal() const;

        MCAPI bool $isEncrypted() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
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
        // prevent constructor by default
        PingCallbackData& operator=(PingCallbackData const&);
        PingCallbackData(PingCallbackData const&);
        PingCallbackData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::NetworkIdentifier>          mNATPunchServerId;
    ::ll::TypedStorage<8, 416, ::Social::GameConnectionInfo> mBackupGameConnection;
    ::ll::TypedStorage<1, 1, bool>                           mTryBackupConnection;
    ::ll::TypedStorage<8, 16, ::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)>>
                                                                   mRakPeer;
    ::ll::TypedStorage<8, 160, ::NetworkIdentifier>                mServerId;
    ::ll::TypedStorage<8, 24, ::RakPeerHelper>                     mPeerHelper;
    ::ll::TypedStorage<8, 8, ::RakPeerHelper::IPSupportInterface&> mIPSupportInterface;
    ::ll::TypedStorage<1, 1, bool>                                 mIsAwaitingNatClient;
    ::ll::TypedStorage<1, 1, bool>                                 mIsServer;
    ::ll::TypedStorage<1, 1, bool>                                 mIsDisconnecting;
    ::ll::TypedStorage<1, 1, bool>                                 mConnectingToClient;
    ::ll::TypedStorage<8, 416, ::Social::GameConnectionInfo>       mConnectedGameInfo;
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

    // vIndex: 11
    virtual bool host(::ConnectionDefinition const& definition) /*override*/;

    // vIndex: 12
    virtual bool connect(
        ::Social::GameConnectionInfo const& primaryConnection,
        ::Social::GameConnectionInfo const& backupConnection
    ) /*override*/;

    // vIndex: 13
    virtual void disconnect() /*override*/;

    // vIndex: 14
    virtual void tick() /*override*/;

    // vIndex: 15
    virtual void runEvents() /*override*/;

    // vIndex: 17
    virtual void closeNetworkConnection(::NetworkIdentifier const& id) /*override*/;

    // vIndex: 19
    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const& id) /*override*/;

    // vIndex: 16
    virtual bool isServer() const /*override*/;

    // vIndex: 1
    virtual ::std::vector<::std::string> getLocalIps() const /*override*/;

    // vIndex: 2
    virtual ::std::string getLocalIp() /*override*/;

    // vIndex: 3
    virtual ushort getPort() const /*override*/;

    // vIndex: 4
    virtual ::std::vector<::RakNet::SystemAddress> getRefinedLocalIps() const /*override*/;

    // vIndex: 5
    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const /*override*/;

    // vIndex: 6
    virtual bool isIPv4Supported() const /*override*/;

    // vIndex: 7
    virtual bool isIPv6Supported() const /*override*/;

    // vIndex: 8
    virtual ushort getIPv4Port() const /*override*/;

    // vIndex: 9
    virtual ushort getIPv6Port() const /*override*/;

    // vIndex: 18
    virtual ::NetworkIdentifier getNetworkIdentifier() const /*override*/;

    // vIndex: 21
    virtual ::RakNet::RakPeerInterface* getPeer();

    // vIndex: 20
    virtual ::RakNet::RakPeerInterface const* getPeer() const;

    // vIndex: 10
    virtual ::TransportLayer getNetworkType() const /*override*/;

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

    MCAPI void _storeLocalIP();

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

    MCAPI bool $connect(
        ::Social::GameConnectionInfo const& primaryConnection,
        ::Social::GameConnectionInfo const& backupConnection
    );

    MCAPI void $disconnect();

    MCAPI void $tick();

    MCAPI void $runEvents();

    MCAPI void $closeNetworkConnection(::NetworkIdentifier const& id);

    MCAPI bool $setApplicationHandshakeCompleted(::NetworkIdentifier const& id);

    MCAPI bool $isServer() const;

    MCAPI ::std::vector<::std::string> $getLocalIps() const;

    MCAPI ::std::string $getLocalIp();

    MCAPI ushort $getPort() const;

    MCAPI ::std::vector<::RakNet::SystemAddress> $getRefinedLocalIps() const;

    MCAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCAPI bool $isIPv4Supported() const;

    MCAPI bool $isIPv6Supported() const;

    MCAPI ushort $getIPv4Port() const;

    MCAPI ushort $getIPv6Port() const;

    MCAPI ::NetworkIdentifier $getNetworkIdentifier() const;

    MCAPI ::RakNet::RakPeerInterface* $getPeer();

    MCAPI ::RakNet::RakPeerInterface const* $getPeer() const;

    MCAPI ::TransportLayer $getNetworkType() const;

    MCAPI void $_onDisable();

    MCAPI void $_onEnable();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForConnector();

    MCAPI static void** $vftableForNetworkEnableDisableListener();

    MCAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
