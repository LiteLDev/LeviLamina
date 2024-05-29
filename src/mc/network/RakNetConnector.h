#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkIdentifier.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/Compressibility.h"
#include "mc/enums/TransportLayer.h"
#include "mc/network/Connector.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/RemoteConnector.h"

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
        // symbol: ?get@AtomicNatPunchInfo@RakNetConnector@@QEBA?AUNatPunchInfo@Connector@@XZ
        MCAPI struct Connector::NatPunchInfo get() const;

        // symbol: ?set@AtomicNatPunchInfo@RakNetConnector@@QEAAXUNatPunchInfo@Connector@@@Z
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
        // vIndex: 0, symbol: __gen_??1ConnectionCallbacks@RakNetConnector@@UEAA@XZ
        virtual ~ConnectionCallbacks() = default;

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
        // symbol: ??1PingCallbackData@RakNetConnector@@QEAA@XZ
        MCAPI ~PingCallbackData();

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
            // symbol: ??1ReadBufferData@RakNetNetworkPeer@RakNetConnector@@QEAA@XZ
            MCAPI ~ReadBufferData();

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
        // vIndex: 0, symbol: __gen_??1RakNetNetworkPeer@RakNetConnector@@UEAA@XZ
        virtual ~RakNetNetworkPeer() = default;

        // vIndex: 1, symbol:
        // ?sendPacket@RakNetNetworkPeer@RakNetConnector@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Reliability@NetworkPeer@@W4Compressibility@@@Z
        virtual void sendPacket(std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility);

        // vIndex: 2, symbol:
        // ?receivePacket@RakNetNetworkPeer@RakNetConnector@@UEAA?AW4DataStatus@NetworkPeer@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@6@@Z
        virtual ::NetworkPeer::DataStatus
        receivePacket(std::string& outData, std::shared_ptr<std::chrono::steady_clock::time_point> const&);

        // vIndex: 3, symbol: ?getNetworkStatus@RakNetNetworkPeer@RakNetConnector@@UEBA?AUNetworkStatus@NetworkPeer@@XZ
        virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;

        // vIndex: 4, symbol: ?update@RakNetNetworkPeer@RakNetConnector@@UEAAXXZ
        virtual void update();

        // vIndex: 6, symbol: ?isLocal@RakNetNetworkPeer@RakNetConnector@@UEBA_NXZ
        virtual bool isLocal() const;

        // vIndex: 7, symbol: ?isEncrypted@RakNetNetworkPeer@RakNetConnector@@UEBA_NXZ
        virtual bool isEncrypted() const;

        // symbol:
        // ?newData@RakNetNetworkPeer@RakNetConnector@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI void newData(std::string data);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RakNetConnector& operator=(RakNetConnector const&);
    RakNetConnector(RakNetConnector const&);
    RakNetConnector();

public:
    // NOLINTBEGIN
    // symbol: ?_onDisable@RakNetConnector@@EEAAXXZ
    MCVAPI void _onDisable();

    // symbol: ?_onEnable@RakNetConnector@@EEAAXXZ
    MCVAPI void _onEnable();

    // symbol: ?addConnectionStateListener@RakNetConnector@@UEAAXPEAVConnectionStateListener@Connector@@@Z
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener* listener);

    // symbol: ?closeNetworkConnection@RakNetConnector@@UEAAXAEBVNetworkIdentifier@@@Z
    MCVAPI void closeNetworkConnection(class NetworkIdentifier const& id);

    // symbol: ?connect@RakNetConnector@@UEAA_NAEBVGameConnectionInfo@Social@@0@Z
    MCVAPI bool connect(
        class Social::GameConnectionInfo const& primaryConnection,
        class Social::GameConnectionInfo const& backupConnection
    );

    // symbol: ?disconnect@RakNetConnector@@UEAAXXZ
    MCVAPI void disconnect();

    // symbol: ?getConnectedGameInfo@RakNetConnector@@UEBAAEBVGameConnectionInfo@Social@@XZ
    MCVAPI class Social::GameConnectionInfo const& getConnectedGameInfo() const;

    // symbol: ?getIPv4Port@RakNetConnector@@UEBAGXZ
    MCVAPI ushort getIPv4Port() const;

    // symbol: ?getIPv6Port@RakNetConnector@@UEBAGXZ
    MCVAPI ushort getIPv6Port() const;

    // symbol: ?getLocalIp@RakNetConnector@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getLocalIp();

    // symbol:
    // ?getLocalIps@RakNetConnector@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCVAPI std::vector<std::string> getLocalIps() const;

    // symbol: ?getNatPunchInfo@RakNetConnector@@UEBA?AUNatPunchInfo@Connector@@XZ
    MCVAPI struct Connector::NatPunchInfo getNatPunchInfo() const;

    // symbol: ?getNetworkIdentifier@RakNetConnector@@UEBA?AVNetworkIdentifier@@XZ
    MCVAPI class NetworkIdentifier getNetworkIdentifier() const;

    // symbol: ?getNetworkType@RakNetConnector@@UEBA?AW4TransportLayer@@XZ
    MCVAPI ::TransportLayer getNetworkType() const;

    // symbol: ?getPeer@RakNetConnector@@UEAAPEAVRakPeerInterface@RakNet@@XZ
    MCVAPI class RakNet::RakPeerInterface* getPeer();

    // symbol: ?getPeer@RakNetConnector@@UEBAPEBVRakPeerInterface@RakNet@@XZ
    MCVAPI class RakNet::RakPeerInterface const* getPeer() const;

    // symbol: ?getPort@RakNetConnector@@UEBAGXZ
    MCVAPI ushort getPort() const;

    // symbol:
    // ?getRefinedLocalIps@RakNetConnector@@UEBA?AV?$vector@USystemAddress@RakNet@@V?$allocator@USystemAddress@RakNet@@@std@@@std@@XZ
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;

    // symbol: ?host@RakNetConnector@@UEAA_NAEBUConnectionDefinition@@@Z
    MCVAPI bool host(struct ConnectionDefinition const& definition);

    // symbol: ?isConnected@RakNetConnector@@UEBA_NAEBVNetworkIdentifier@@@Z
    MCVAPI bool isConnected(class NetworkIdentifier const& id) const;

    // symbol: ?isIPv4Supported@RakNetConnector@@UEBA_NXZ
    MCVAPI bool isIPv4Supported() const;

    // symbol: ?isIPv6Supported@RakNetConnector@@UEBA_NXZ
    MCVAPI bool isIPv6Supported() const;

    // symbol: ?isServer@RakNetConnector@@UEBA_NXZ
    MCVAPI bool isServer() const;

    // symbol: ?removeConnectionStateListener@RakNetConnector@@UEAAXPEAVConnectionStateListener@Connector@@@Z
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener* listener);

    // symbol: ?runEvents@RakNetConnector@@UEAAXXZ
    MCVAPI void runEvents();

    // symbol: ?setApplicationHandshakeCompleted@RakNetConnector@@UEAA_NAEBVNetworkIdentifier@@@Z
    MCVAPI bool setApplicationHandshakeCompleted(class NetworkIdentifier const&);

    // symbol: ?setupNatPunch@RakNetConnector@@UEAAX_N@Z
    MCVAPI void setupNatPunch(bool connectToClient);

    // symbol:
    // ?startNatPunchingClient@RakNetConnector@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
    MCVAPI void startNatPunchingClient(std::string const& address, ushort port);

    // symbol: ?tick@RakNetConnector@@UEAAXXZ
    MCVAPI void tick();

    // symbol: ??1RakNetConnector@@UEAA@XZ
    MCVAPI ~RakNetConnector();

    // symbol:
    // ??0RakNetConnector@@QEAA@AEAUConnectionCallbacks@0@AEAVIPSupportInterface@RakPeerHelper@@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@AEBURakPeerConfiguration@RakNet@@@Z
    MCAPI
    RakNetConnector(struct RakNetConnector::ConnectionCallbacks&, class RakPeerHelper::IPSupportInterface&, class Bedrock::NonOwnerPointer<class AppPlatform> const&, struct RakNet::RakPeerConfiguration const&);

    // symbol: ?getStatistics@RakNetConnector@@QEAA_NAEAURakNetStatistics@RakNet@@@Z
    MCAPI bool getStatistics(struct RakNet::RakNetStatistics& rns);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_changeNatState@RakNetConnector@@AEAAXW4NATState@1@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _changeNatState(::RakNetConnector::NATState newState, int port, std::string const& statusDescription);

    // symbol:
    // ?_createPeer@RakNetConnector@@AEAA?AV?$shared_ptr@VRakNetNetworkPeer@RakNetConnector@@@std@@AEBVNetworkIdentifier@@@Z
    MCAPI std::shared_ptr<class RakNetConnector::RakNetNetworkPeer> _createPeer(class NetworkIdentifier const& id);

    // symbol: ?_openNatConnection@RakNetConnector@@AEAAXAEBUSystemAddress@RakNet@@@Z
    MCAPI void _openNatConnection(struct RakNet::SystemAddress const& remoteAddress);

    // symbol: ?_pingNatService@RakNetConnector@@AEAAX_N@Z
    MCAPI void _pingNatService(bool isInitialPing);

    // symbol: ?_storeLocalIP@RakNetConnector@@AEAAXXZ
    MCAPI void _storeLocalIP();

    // NOLINTEND
};
