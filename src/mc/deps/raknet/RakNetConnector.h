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
        // NOLINTBEGIN
        /**
         * @symbol ?get\@AtomicNatPunchInfo\@RakNetConnector\@\@QEBA?AUNatPunchInfo\@Connector\@\@XZ
         */
        MCAPI struct Connector::NatPunchInfo get() const;
        /**
         * @symbol ?set\@AtomicNatPunchInfo\@RakNetConnector\@\@QEAAXUNatPunchInfo\@Connector\@\@\@Z
         */
        MCAPI void set(struct Connector::NatPunchInfo);
        // NOLINTEND
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
        // NOLINTBEGIN
        /**
         * @symbol ??1PingCallbackData\@RakNetConnector\@\@QEAA\@XZ
         */
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
            ReadBufferData& operator=(ReadBufferData const&) = delete;
            ReadBufferData(ReadBufferData const&)            = delete;
            ReadBufferData()                                 = delete;

        public:
            // NOLINTBEGIN
            /**
             * @symbol ??1ReadBufferData\@RakNetNetworkPeer\@RakNetConnector\@\@QEAA\@XZ
             */
            MCAPI ~ReadBufferData();
            // NOLINTEND
        };

    public:
        // prevent constructor by default
        RakNetNetworkPeer& operator=(RakNetNetworkPeer const&) = delete;
        RakNetNetworkPeer(RakNetNetworkPeer const&)            = delete;
        RakNetNetworkPeer()                                    = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 1
         * @symbol
         * ?sendPacket\@RakNetNetworkPeer\@RakNetConnector\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Reliability\@NetworkPeer\@\@W4Compressibility\@\@\@Z
         */
        virtual void sendPacket(std::string const&, enum class NetworkPeer::Reliability, enum class Compressibility);
        /**
         * @vftbl 2
         * @symbol
         * ?receivePacket\@RakNetNetworkPeer\@RakNetConnector\@\@UEAA?AW4DataStatus\@NetworkPeer\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$shared_ptr\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@6\@\@Z
         */
        virtual enum class NetworkPeer::DataStatus
        receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock>> const&);
        /**
         * @vftbl 3
         * @symbol ?getNetworkStatus\@RakNetNetworkPeer\@RakNetConnector\@\@UEBA?AUNetworkStatus\@NetworkPeer\@\@XZ
         */
        virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;
        /**
         * @vftbl 4
         * @symbol ?update\@RakNetNetworkPeer\@RakNetConnector\@\@UEAAXXZ
         */
        virtual void update();
        /**
         * @vftbl 6
         * @symbol ?isLocal\@RakNetNetworkPeer\@RakNetConnector\@\@UEBA_NXZ
         */
        virtual bool isLocal() const;
        /**
         * @vftbl 7
         * @symbol ?isEncrypted\@RakNetNetworkPeer\@RakNetConnector\@\@UEBA_NXZ
         */
        virtual bool isEncrypted() const;
        /**
         * @symbol
         * ?newData\@RakNetNetworkPeer\@RakNetConnector\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI void newData(std::string);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    RakNetConnector& operator=(RakNetConnector const&) = delete;
    RakNetConnector(RakNetConnector const&)            = delete;
    RakNetConnector()                                  = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNETCONNECTOR
    /**
     * @symbol ?_onDisable\@RakNetConnector\@\@EEAAXXZ
     */
    MCVAPI void _onDisable();
    /**
     * @symbol ?_onEnable\@RakNetConnector\@\@EEAAXXZ
     */
    MCVAPI void _onEnable();
    /**
     * @symbol ?addConnectionStateListener\@RakNetConnector\@\@UEAAXPEAVConnectionStateListener\@Connector\@\@\@Z
     */
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener*);
    /**
     * @symbol ?closeNetworkConnection\@RakNetConnector\@\@UEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI void closeNetworkConnection(class NetworkIdentifier const&);
    /**
     * @symbol ?connect\@RakNetConnector\@\@UEAA_NAEBVGameConnectionInfo\@Social\@\@0\@Z
     */
    MCVAPI bool connect(class Social::GameConnectionInfo const&, class Social::GameConnectionInfo const&);
    /**
     * @symbol ?disconnect\@RakNetConnector\@\@UEAAXXZ
     */
    MCVAPI void disconnect();
    /**
     * @symbol ?getConnectedGameInfo\@RakNetConnector\@\@UEBAAEBVGameConnectionInfo\@Social\@\@XZ
     */
    MCVAPI class Social::GameConnectionInfo const& getConnectedGameInfo() const;
    /**
     * @symbol ?getIPv4Port\@RakNetConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv4Port() const;
    /**
     * @symbol ?getIPv6Port\@RakNetConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv6Port() const;
    /**
     * @symbol
     * ?getLocalIp\@RakNetConnector\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getLocalIp();
    /**
     * @symbol
     * ?getLocalIps\@RakNetConnector\@\@UEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getLocalIps() const;
    /**
     * @symbol ?getNatPunchInfo\@RakNetConnector\@\@UEBA?AUNatPunchInfo\@Connector\@\@XZ
     */
    MCVAPI struct Connector::NatPunchInfo getNatPunchInfo() const;
    /**
     * @symbol ?getNetworkIdentifier\@RakNetConnector\@\@UEBA?AVNetworkIdentifier\@\@XZ
     */
    MCVAPI class NetworkIdentifier getNetworkIdentifier() const;
    /**
     * @symbol ?getPeer\@RakNetConnector\@\@UEAAPEAVRakPeerInterface\@RakNet\@\@XZ
     */
    MCVAPI class RakNet::RakPeerInterface* getPeer();
    /**
     * @symbol ?getPeer\@RakNetConnector\@\@UEBAPEBVRakPeerInterface\@RakNet\@\@XZ
     */
    MCVAPI class RakNet::RakPeerInterface const* getPeer() const;
    /**
     * @symbol ?getPort\@RakNetConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getPort() const;
    /**
     * @symbol
     * ?getRefinedLocalIps\@RakNetConnector\@\@UEBA?AV?$vector\@USystemAddress\@RakNet\@\@V?$allocator\@USystemAddress\@RakNet\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;
    /**
     * @symbol ?host\@RakNetConnector\@\@UEAA_NAEBUConnectionDefinition\@\@\@Z
     */
    MCVAPI bool host(struct ConnectionDefinition const&);
    /**
     * @symbol ?isConnected\@RakNetConnector\@\@UEBA_NAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI bool isConnected(class NetworkIdentifier const&) const;
    /**
     * @symbol ?isIPv4Supported\@RakNetConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv4Supported() const;
    /**
     * @symbol ?isIPv6Supported\@RakNetConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv6Supported() const;
    /**
     * @symbol ?isServer\@RakNetConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isServer() const;
    /**
     * @symbol ?removeConnectionStateListener\@RakNetConnector\@\@UEAAXPEAVConnectionStateListener\@Connector\@\@\@Z
     */
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener*);
    /**
     * @symbol ?runEvents\@RakNetConnector\@\@UEAAXXZ
     */
    MCVAPI void runEvents();
    /**
     * @symbol ?setupNatPunch\@RakNetConnector\@\@UEAAX_N\@Z
     */
    MCVAPI void setupNatPunch(bool);
    /**
     * @symbol
     * ?startNatPunchingClient\@RakNetConnector\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    MCVAPI void startNatPunchingClient(std::string const&, unsigned short);
    /**
     * @symbol ?tick\@RakNetConnector\@\@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RakNetConnector();
#endif
    /**
     * @symbol
     * ??0RakNetConnector\@\@QEAA\@AEAUConnectionCallbacks\@0\@AEAVIPSupportInterface\@RakPeerHelper\@\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI
    RakNetConnector(struct RakNetConnector::ConnectionCallbacks&, class RakPeerHelper::IPSupportInterface&, class Bedrock::NonOwnerPointer<class AppPlatform> const&);
    /**
     * @symbol ?getStatistics\@RakNetConnector\@\@QEAA_NAEAURakNetStatistics\@RakNet\@\@\@Z
     */
    MCAPI bool getStatistics(struct RakNet::RakNetStatistics&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_changeNatState\@RakNetConnector\@\@AEAAXW4NATState\@1\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _changeNatState(enum class RakNetConnector::NATState, int, std::string const&);
    /**
     * @symbol
     * ?_createPeer\@RakNetConnector\@\@AEAA?AV?$shared_ptr\@VRakNetNetworkPeer\@RakNetConnector\@\@\@std\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI std::shared_ptr<class RakNetConnector::RakNetNetworkPeer> _createPeer(class NetworkIdentifier const&);
    /**
     * @symbol ?_openNatConnection\@RakNetConnector\@\@AEAAXAEBUSystemAddress\@RakNet\@\@\@Z
     */
    MCAPI void _openNatConnection(struct RakNet::SystemAddress const&);
    /**
     * @symbol ?_pingNatService\@RakNetConnector\@\@AEAAX_N\@Z
     */
    MCAPI void _pingNatService(bool);
    /**
     * @symbol ?_storeLocalIP\@RakNetConnector\@\@AEAAXXZ
     */
    MCAPI void _storeLocalIP();
    // NOLINTEND
};
