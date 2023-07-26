#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/Connector.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/RakPeerHelper.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct RakNetStatistics; }
namespace RakNet { struct SystemAddress; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class RakNetConnector {
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
        AtomicNatPunchInfo& operator=(AtomicNatPunchInfo const&) = delete;
        AtomicNatPunchInfo(AtomicNatPunchInfo const&)            = delete;
        AtomicNatPunchInfo()                                     = delete;

    public:
        /**
         * @symbol ?get\@AtomicNatPunchInfo\@RakNetConnector\@\@QEBA?AUNatPunchInfo\@Connector\@\@XZ
         */
        MCAPI struct Connector::NatPunchInfo get() const; // NOLINT
        /**
         * @symbol ?set\@AtomicNatPunchInfo\@RakNetConnector\@\@QEAAXUNatPunchInfo\@Connector\@\@\@Z
         */
        MCAPI void set(struct Connector::NatPunchInfo); // NOLINT
    };

    struct ConnectionCallbacks {

    public:
        // prevent constructor by default
        ConnectionCallbacks& operator=(ConnectionCallbacks const&) = delete;
        ConnectionCallbacks(ConnectionCallbacks const&)            = delete;
        ConnectionCallbacks()                                      = delete;
    };

    struct PingCallbackData {

    public:
        // prevent constructor by default
        PingCallbackData& operator=(PingCallbackData const&) = delete;
        PingCallbackData(PingCallbackData const&)            = delete;
        PingCallbackData()                                   = delete;

    public:
        /**
         * @symbol ??1PingCallbackData\@RakNetConnector\@\@QEAA\@XZ
         */
        MCAPI ~PingCallbackData(); // NOLINT
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
            ReadBufferData& operator=(ReadBufferData const&) = delete;
            ReadBufferData(ReadBufferData const&)            = delete;
            ReadBufferData()                                 = delete;

        public:
            /**
             * @symbol ??1ReadBufferData\@RakNetNetworkPeer\@RakNetConnector\@\@QEAA\@XZ
             */
            MCAPI ~ReadBufferData(); // NOLINT
        };

    public:
        // prevent constructor by default
        RakNetNetworkPeer& operator=(RakNetNetworkPeer const&) = delete;
        RakNetNetworkPeer(RakNetNetworkPeer const&)            = delete;
        RakNetNetworkPeer()                                    = delete;

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0(); // NOLINT
        /**
         * @vftbl 1
         * @symbol
         * ?sendPacket\@RakNetNetworkPeer\@RakNetConnector\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Reliability\@NetworkPeer\@\@W4Compressibility\@\@\@Z
         */
        virtual void
        sendPacket(std::string const&, enum class NetworkPeer::Reliability, enum class Compressibility); // NOLINT
        /**
         * @vftbl 2
         * @symbol
         * ?receivePacket\@RakNetNetworkPeer\@RakNetConnector\@\@UEAA?AW4DataStatus\@NetworkPeer\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$shared_ptr\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@6\@\@Z
         */
        virtual enum class NetworkPeer::DataStatus
        receivePacket(std::string&, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const&); // NOLINT
        /**
         * @vftbl 3
         * @symbol ?getNetworkStatus\@RakNetNetworkPeer\@RakNetConnector\@\@UEBA?AUNetworkStatus\@NetworkPeer\@\@XZ
         */
        virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const; // NOLINT
        /**
         * @vftbl 4
         * @symbol ?update\@RakNetNetworkPeer\@RakNetConnector\@\@UEAAXXZ
         */
        virtual void update(); // NOLINT
        /**
         * @vftbl 6
         * @symbol ?isLocal\@RakNetNetworkPeer\@RakNetConnector\@\@UEBA_NXZ
         */
        virtual bool isLocal() const; // NOLINT
        /**
         * @vftbl 7
         * @symbol ?isEncrypted\@RakNetNetworkPeer\@RakNetConnector\@\@UEBA_NXZ
         */
        virtual bool isEncrypted() const; // NOLINT
        /**
         * @symbol
         * ?newData\@RakNetNetworkPeer\@RakNetConnector\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI void newData(std::string); // NOLINT
    };

public:
    // prevent constructor by default
    RakNetConnector& operator=(RakNetConnector const&) = delete;
    RakNetConnector(RakNetConnector const&)            = delete;
    RakNetConnector()                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNETCONNECTOR
    /**
     * @symbol ?_onDisable\@RakNetConnector\@\@EEAAXXZ
     */
    MCVAPI void _onDisable(); // NOLINT
    /**
     * @symbol ?_onEnable\@RakNetConnector\@\@EEAAXXZ
     */
    MCVAPI void _onEnable(); // NOLINT
    /**
     * @symbol ?addConnectionStateListener\@RakNetConnector\@\@UEAAXPEAVConnectionStateListener\@Connector\@\@\@Z
     */
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener*); // NOLINT
    /**
     * @symbol ?closeNetworkConnection\@RakNetConnector\@\@UEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI void closeNetworkConnection(class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol ?connect\@RakNetConnector\@\@UEAA_NAEBVGameConnectionInfo\@Social\@\@0\@Z
     */
    MCVAPI bool connect(class Social::GameConnectionInfo const&, class Social::GameConnectionInfo const&); // NOLINT
    /**
     * @symbol ?disconnect\@RakNetConnector\@\@UEAAXXZ
     */
    MCVAPI void disconnect(); // NOLINT
    /**
     * @symbol ?getConnectedGameInfo\@RakNetConnector\@\@UEBAAEBVGameConnectionInfo\@Social\@\@XZ
     */
    MCVAPI class Social::GameConnectionInfo const& getConnectedGameInfo() const; // NOLINT
    /**
     * @symbol ?getIPv4Port\@RakNetConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv4Port() const; // NOLINT
    /**
     * @symbol ?getIPv6Port\@RakNetConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv6Port() const; // NOLINT
    /**
     * @symbol
     * ?getLocalIp\@RakNetConnector\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getLocalIp(); // NOLINT
    /**
     * @symbol
     * ?getLocalIps\@RakNetConnector\@\@UEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getLocalIps() const; // NOLINT
    /**
     * @symbol ?getNatPunchInfo\@RakNetConnector\@\@UEBA?AUNatPunchInfo\@Connector\@\@XZ
     */
    MCVAPI struct Connector::NatPunchInfo getNatPunchInfo() const; // NOLINT
    /**
     * @symbol ?getNetworkIdentifier\@RakNetConnector\@\@UEBA?AVNetworkIdentifier\@\@XZ
     */
    MCVAPI class NetworkIdentifier getNetworkIdentifier() const; // NOLINT
    /**
     * @symbol ?getPeer\@RakNetConnector\@\@UEAAPEAVRakPeerInterface\@RakNet\@\@XZ
     */
    MCVAPI class RakNet::RakPeerInterface* getPeer(); // NOLINT
    /**
     * @symbol ?getPeer\@RakNetConnector\@\@UEBAPEBVRakPeerInterface\@RakNet\@\@XZ
     */
    MCVAPI class RakNet::RakPeerInterface const* getPeer() const; // NOLINT
    /**
     * @symbol ?getPort\@RakNetConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getPort() const; // NOLINT
    /**
     * @symbol
     * ?getRefinedLocalIps\@RakNetConnector\@\@UEBA?AV?$vector\@USystemAddress\@RakNet\@\@V?$allocator\@USystemAddress\@RakNet\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const; // NOLINT
    /**
     * @symbol ?host\@RakNetConnector\@\@UEAA_NAEBUConnectionDefinition\@\@\@Z
     */
    MCVAPI bool host(struct ConnectionDefinition const&); // NOLINT
    /**
     * @symbol ?isConnected\@RakNetConnector\@\@UEBA_NAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI bool isConnected(class NetworkIdentifier const&) const; // NOLINT
    /**
     * @symbol ?isIPv4Supported\@RakNetConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv4Supported() const; // NOLINT
    /**
     * @symbol ?isIPv6Supported\@RakNetConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv6Supported() const; // NOLINT
    /**
     * @symbol ?isServer\@RakNetConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isServer() const; // NOLINT
    /**
     * @symbol ?removeConnectionStateListener\@RakNetConnector\@\@UEAAXPEAVConnectionStateListener\@Connector\@\@\@Z
     */
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener*); // NOLINT
    /**
     * @symbol ?runEvents\@RakNetConnector\@\@UEAAXXZ
     */
    MCVAPI void runEvents(); // NOLINT
    /**
     * @symbol ?setupNatPunch\@RakNetConnector\@\@UEAAX_N\@Z
     */
    MCVAPI void setupNatPunch(bool); // NOLINT
    /**
     * @symbol
     * ?startNatPunchingClient\@RakNetConnector\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    MCVAPI void startNatPunchingClient(std::string const&, unsigned short); // NOLINT
    /**
     * @symbol ?tick\@RakNetConnector\@\@UEAAXXZ
     */
    MCVAPI void tick(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RakNetConnector(); // NOLINT
#endif
    /**
     * @symbol
     * ??0RakNetConnector\@\@QEAA\@AEAUConnectionCallbacks\@0\@AEAVIPSupportInterface\@RakPeerHelper\@\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI
    RakNetConnector(struct RakNetConnector::ConnectionCallbacks&, class RakPeerHelper::IPSupportInterface&, class Bedrock::NonOwnerPointer<class AppPlatform> const&); // NOLINT
    /**
     * @symbol ?getStatistics\@RakNetConnector\@\@QEAA_NAEAURakNetStatistics\@RakNet\@\@\@Z
     */
    MCAPI bool getStatistics(struct RakNet::RakNetStatistics&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_changeNatState\@RakNetConnector\@\@AEAAXW4NATState\@1\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _changeNatState(enum class RakNetConnector::NATState, int, std::string const&); // NOLINT
    /**
     * @symbol
     * ?_createPeer\@RakNetConnector\@\@AEAA?AV?$shared_ptr\@VRakNetNetworkPeer\@RakNetConnector\@\@\@std\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class std::shared_ptr<class RakNetConnector::RakNetNetworkPeer>
    _createPeer(class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol ?_openNatConnection\@RakNetConnector\@\@AEAAXAEBUSystemAddress\@RakNet\@\@\@Z
     */
    MCAPI void _openNatConnection(struct RakNet::SystemAddress const&); // NOLINT
    /**
     * @symbol ?_pingNatService\@RakNetConnector\@\@AEAAX_N\@Z
     */
    MCAPI void _pingNatService(bool); // NOLINT
    /**
     * @symbol ?_storeLocalIP\@RakNetConnector\@\@AEAAXXZ
     */
    MCAPI void _storeLocalIP(); // NOLINT

private:
};
