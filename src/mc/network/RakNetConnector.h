#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkIdentifier.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/Compressibility.h"
#include "mc/network/Connector.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"

// auto generated forward declare list
// clang-format off
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
    class AtomicNatPunchInfo;
    struct ConnectionCallbacks;
    struct PingCallbackData;
    class RakNetNetworkPeer;
    // clang-format on

    // RakNetConnector inner types define
    enum class NATState {};

    class AtomicNatPunchInfo {
    public:
        // prevent constructor by default
        AtomicNatPunchInfo& operator=(AtomicNatPunchInfo const&);
        AtomicNatPunchInfo(AtomicNatPunchInfo const&);
        AtomicNatPunchInfo();

    public:
        // NOLINTBEGIN
        MCAPI struct Connector::NatPunchInfo get() const;

        MCAPI void set(struct Connector::NatPunchInfo);

        // NOLINTEND
    };

    struct ConnectionCallbacks : public ::Connector::ConnectionCallbacks {
    public:
        // prevent constructor by default
        ConnectionCallbacks& operator=(ConnectionCallbacks const&);
        ConnectionCallbacks(ConnectionCallbacks const&);
        ConnectionCallbacks();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ConnectionCallbacks() = default;

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        // NOLINTEND
    };

    struct PingCallbackData {
    public:
        // prevent constructor by default
        PingCallbackData& operator=(PingCallbackData const&);
        PingCallbackData(PingCallbackData const&);
        PingCallbackData();

    public:
        // NOLINTBEGIN
        MCAPI ~PingCallbackData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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
            // prevent constructor by default
            ReadBufferData& operator=(ReadBufferData const&);
            ReadBufferData(ReadBufferData const&);
            ReadBufferData();

        public:
            // NOLINTBEGIN
            MCAPI ~ReadBufferData();

            // NOLINTEND

            // thunks
        public:
            // NOLINTBEGIN
            MCAPI void dtor$();

            // NOLINTEND
        };

    public:
        // prevent constructor by default
        RakNetNetworkPeer& operator=(RakNetNetworkPeer const&);
        RakNetNetworkPeer(RakNetNetworkPeer const&);
        RakNetNetworkPeer();

        RakNet::RakPeerInterface&   mRakPeer;           // this+0x18
        NetworkIdentifier           mId;                // this+0x20
        std::string                 mSendBuffer;        // this+0xC0
        std::vector<ReadBufferData> mReadBufferDatas;   // this+0xE0
        int                         mApproximateMaxBps; // this+0xF8
        int                         mLastPing;          // this+0xFC
        int                         mAveragePing;       // this+0x100

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~RakNetNetworkPeer() = default;

        // vIndex: 1
        virtual void sendPacket(std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility);

        // vIndex: 2
        virtual ::NetworkPeer::DataStatus
        receivePacket(std::string& outData, std::shared_ptr<std::chrono::steady_clock::time_point> const& timepointPtr);

        // vIndex: 3
        virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;

        // vIndex: 4
        virtual void update();

        // vIndex: 6
        virtual bool isLocal() const;

        // vIndex: 7
        virtual bool isEncrypted() const;

        MCAPI void newData(std::string);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI struct NetworkPeer::NetworkStatus getNetworkStatus$() const;

        MCAPI bool isEncrypted$() const;

        MCAPI bool isLocal$() const;

        MCAPI ::NetworkPeer::DataStatus receivePacket$(
            std::string&                                                  outData,
            std::shared_ptr<std::chrono::steady_clock::time_point> const& timepointPtr
        );

        MCAPI void sendPacket$(std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility);

        MCAPI void update$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RakNetConnector& operator=(RakNetConnector const&);
    RakNetConnector(RakNetConnector const&);
    RakNetConnector();

public:
    // NOLINTBEGIN
    MCVAPI void _onDisable();

    MCVAPI void _onEnable();

    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener* listener);

    MCVAPI void closeNetworkConnection(class NetworkIdentifier const& id);

    MCVAPI bool connect(
        class Social::GameConnectionInfo const& primaryConnection,
        class Social::GameConnectionInfo const& backupConnection
    );

    MCVAPI void disconnect();

    MCVAPI class Social::GameConnectionInfo const& getConnectedGameInfo() const;

    MCVAPI ushort getIPv4Port() const;

    MCVAPI ushort getIPv6Port() const;

    MCVAPI std::string getLocalIp();

    MCVAPI std::vector<std::string> getLocalIps() const;

    MCVAPI struct Connector::NatPunchInfo getNatPunchInfo() const;

    MCVAPI class NetworkIdentifier getNetworkIdentifier() const;

    MCVAPI ::TransportLayer getNetworkType() const;

    MCVAPI class RakNet::RakPeerInterface* getPeer();

    MCVAPI class RakNet::RakPeerInterface const* getPeer() const;

    MCVAPI ushort getPort() const;

    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;

    MCVAPI bool host(struct ConnectionDefinition const& definition);

    MCVAPI bool isConnected(class NetworkIdentifier const& id) const;

    MCVAPI bool isIPv4Supported() const;

    MCVAPI bool isIPv6Supported() const;

    MCVAPI bool isServer() const;

    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener* listener);

    MCVAPI void runEvents();

    MCVAPI bool setApplicationHandshakeCompleted(class NetworkIdentifier const& id);

    MCVAPI void setupNatPunch(bool connectToClient);

    MCVAPI void startNatPunchingClient(std::string const& address, ushort port);

    MCVAPI void tick();

    MCVAPI ~RakNetConnector();

    MCAPI RakNetConnector(
        struct RakNetConnector::ConnectionCallbacks&             callbacks,
        class RakPeerHelper::IPSupportInterface&                 ipInterface,
        class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform,
        struct RakNet::RakPeerConfiguration const&               rakPeerConfig
    );

    MCAPI bool getStatistics(struct RakNet::RakNetStatistics& rns);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _changeNatState(::RakNetConnector::NATState newState, int port, std::string const& statusDescription);

    MCAPI std::shared_ptr<class RakNetConnector::RakNetNetworkPeer> _createPeer(class NetworkIdentifier const& id);

    MCAPI void _openNatConnection(struct RakNet::SystemAddress const& remoteAddress);

    MCAPI void _pingNatService(bool isInitialPing);

    MCAPI void _storeLocalIP();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForConnector();

    MCAPI static void** $vftableForNetworkEnableDisableListener();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void _onDisable$();

    MCAPI void _onEnable$();

    MCAPI void addConnectionStateListener$(class Connector::ConnectionStateListener* listener);

    MCAPI void closeNetworkConnection$(class NetworkIdentifier const& id);

    MCAPI bool connect$(
        class Social::GameConnectionInfo const& primaryConnection,
        class Social::GameConnectionInfo const& backupConnection
    );

    MCAPI void disconnect$();

    MCAPI class Social::GameConnectionInfo const& getConnectedGameInfo$() const;

    MCAPI ushort getIPv4Port$() const;

    MCAPI ushort getIPv6Port$() const;

    MCAPI std::string getLocalIp$();

    MCAPI std::vector<std::string> getLocalIps$() const;

    MCAPI struct Connector::NatPunchInfo getNatPunchInfo$() const;

    MCAPI class NetworkIdentifier getNetworkIdentifier$() const;

    MCAPI ::TransportLayer getNetworkType$() const;

    MCAPI class RakNet::RakPeerInterface* getPeer$();

    MCAPI class RakNet::RakPeerInterface const* getPeer$() const;

    MCAPI ushort getPort$() const;

    MCAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps$() const;

    MCAPI bool host$(struct ConnectionDefinition const& definition);

    MCAPI bool isConnected$(class NetworkIdentifier const& id) const;

    MCAPI bool isIPv4Supported$() const;

    MCAPI bool isIPv6Supported$() const;

    MCAPI bool isServer$() const;

    MCAPI void removeConnectionStateListener$(class Connector::ConnectionStateListener* listener);

    MCAPI void runEvents$();

    MCAPI bool setApplicationHandshakeCompleted$(class NetworkIdentifier const& id);

    MCAPI void setupNatPunch$(bool connectToClient);

    MCAPI void startNatPunchingClient$(std::string const& address, ushort port);

    MCAPI void tick$();

    // NOLINTEND
};
