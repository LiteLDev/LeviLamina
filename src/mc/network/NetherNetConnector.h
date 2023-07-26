#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Connector.h"
#include "mc/network/IWebRTCSignalingInterface.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { enum class ERelayServerConfigurationResult; }
namespace NetherNet { enum class ESendType; }
namespace NetherNet { enum class ESessionError; }
namespace NetherNet { enum class SignalingHostConnectionStatus; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
namespace Social { class GameConnectionInfo; }
// clang-format on

struct NetherNetConnector {

public:
    // prevent constructor by default
    NetherNetConnector& operator=(NetherNetConnector const&) = delete;
    NetherNetConnector(NetherNetConnector const&)            = delete;
    NetherNetConnector()                                     = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERNETCONNECTOR
    /**
     * @symbol ?OnBroadcastDiscoveryRequestReceivedGetResponse\@NetherNetConnector\@\@EEAA_NPEAXPEAH\@Z
     */
    MCVAPI bool OnBroadcastDiscoveryRequestReceivedGetResponse(void*, int*); // NOLINT
    /**
     * @symbol ?OnBroadcastResponseReceived\@NetherNetConnector\@\@EEAAXUNetworkID\@NetherNet\@\@PEBXH\@Z
     */
    MCVAPI void OnBroadcastResponseReceived(struct NetherNet::NetworkID, void const*, int); // NOLINT
    /**
     * @symbol ?OnSessionConnectFailure\@NetherNetConnector\@\@EEAAXUNetworkID\@NetherNet\@\@W4ESessionError\@3\@\@Z
     */
    MCVAPI void OnSessionConnectFailure(struct NetherNet::NetworkID, enum class NetherNet::ESessionError); // NOLINT
    /**
     * @symbol ?OnSessionGetConnectionFlags\@NetherNetConnector\@\@EEAAXUNetworkID\@NetherNet\@\@PEAI\@Z
     */
    MCVAPI void OnSessionGetConnectionFlags(struct NetherNet::NetworkID, unsigned int*); // NOLINT
    /**
     * @symbol ?OnSessionRequested\@NetherNetConnector\@\@EEAAXUNetworkID\@NetherNet\@\@\@Z
     */
    MCVAPI void OnSessionRequested(struct NetherNet::NetworkID); // NOLINT
    /**
     * @symbol ?OnSpopViolation\@NetherNetConnector\@\@EEAAXXZ
     */
    MCVAPI void OnSpopViolation(); // NOLINT
    /**
     * @symbol ?_onDisable\@NetherNetConnector\@\@EEAAXXZ
     */
    MCVAPI void _onDisable(); // NOLINT
    /**
     * @symbol ?_onEnable\@NetherNetConnector\@\@EEAAXXZ
     */
    MCVAPI void _onEnable(); // NOLINT
    /**
     * @symbol ?closeNetworkConnection\@NetherNetConnector\@\@UEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI void closeNetworkConnection(class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol ?connect\@NetherNetConnector\@\@UEAA_NAEBVGameConnectionInfo\@Social\@\@0\@Z
     */
    MCVAPI bool connect(class Social::GameConnectionInfo const&, class Social::GameConnectionInfo const&); // NOLINT
    /**
     * @symbol ?disconnect\@NetherNetConnector\@\@UEAAXXZ
     */
    MCVAPI void disconnect(); // NOLINT
    /**
     * @symbol ?getNetworkIdentifier\@NetherNetConnector\@\@UEBA?AVNetworkIdentifier\@\@XZ
     */
    MCVAPI class NetworkIdentifier getNetworkIdentifier() const; // NOLINT
    /**
     * @symbol ?host\@NetherNetConnector\@\@UEAA_NAEBUConnectionDefinition\@\@\@Z
     */
    MCVAPI bool host(struct ConnectionDefinition const&); // NOLINT
    /**
     * @symbol ?isConnected\@NetherNetConnector\@\@UEBA_NAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI bool isConnected(class NetworkIdentifier const&) const; // NOLINT
    /**
     * @symbol ?isServer\@NetherNetConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isServer() const; // NOLINT
    /**
     * @symbol ?runEvents\@NetherNetConnector\@\@UEAAXXZ
     */
    MCVAPI void runEvents(); // NOLINT
    /**
     * @symbol ?tick\@NetherNetConnector\@\@UEAAXXZ
     */
    MCVAPI void tick(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetherNetConnector(); // NOLINT
#endif
    /**
     * @symbol ??0NetherNetConnector\@\@QEAA\@AEBVNetherNetTransportFactory\@\@AEAUConnectionCallbacks\@Connector\@\@\@Z
     */
    MCAPI NetherNetConnector(class NetherNetTransportFactory const&, struct Connector::ConnectionCallbacks&); // NOLINT
    /**
     * @symbol ?clearPacketData\@NetherNetConnector\@\@QEBAXUNetworkID\@NetherNet\@\@\@Z
     */
    MCAPI void clearPacketData(struct NetherNet::NetworkID) const; // NOLINT
    /**
     * @symbol ?closeSessionWithUser\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@\@Z
     */
    MCAPI bool closeSessionWithUser(struct NetherNet::NetworkID) const; // NOLINT
    /**
     * @symbol ?disableBroadcastDiscovery\@NetherNetConnector\@\@QEBAXXZ
     */
    MCAPI void disableBroadcastDiscovery() const; // NOLINT
    /**
     * @symbol ?enableBroadcastDiscovery\@NetherNetConnector\@\@QEBAXXZ
     */
    MCAPI void enableBroadcastDiscovery() const; // NOLINT
    /**
     * @symbol ?getNetworkID\@NetherNetConnector\@\@QEBAAEBUNetworkID\@NetherNet\@\@XZ
     */
    MCAPI struct NetherNet::NetworkID const& getNetworkID() const; // NOLINT
    /**
     * @symbol ?getSessionState\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@PEAUSessionState\@3\@\@Z
     */
    MCAPI bool getSessionState(struct NetherNet::NetworkID, struct NetherNet::SessionState*) const; // NOLINT
    /**
     * @symbol ?isBroadcastDiscoveryEnabled\@NetherNetConnector\@\@QEBA_NXZ
     */
    MCAPI bool isBroadcastDiscoveryEnabled() const; // NOLINT
    /**
     * @symbol ?isPacketAvailable\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@PEAI\@Z
     */
    MCAPI bool isPacketAvailable(struct NetherNet::NetworkID, unsigned int*) const; // NOLINT
    /**
     * @symbol ?readPacket\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@PEAXIPEAI\@Z
     */
    MCAPI bool readPacket(struct NetherNet::NetworkID, void*, unsigned int, unsigned int*) const; // NOLINT
    /**
     * @symbol
     * ?registerRelayServerCredentialsReadyCallback\@NetherNetConnector\@\@QEBAX$$QEAV?$function\@$$A6AXW4ERelayServerConfigurationResult\@NetherNet\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    registerRelayServerCredentialsReadyCallback(class std::function<
                                                void(enum class NetherNet::ERelayServerConfigurationResult)>&&)
        const; // NOLINT
    /**
     * @symbol ?sendPacket\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@PEBDIW4ESendType\@3\@\@Z
     */
    MCAPI bool
    sendPacket(struct NetherNet::NetworkID, char const*, unsigned int, enum class NetherNet::ESendType) const; // NOLINT
    /**
     * @symbol ?setBroadcastRequestCallback\@NetherNetConnector\@\@QEAAX$$QEAV?$function\@$$A6A_NPEAXPEAH\@Z\@std\@\@\@Z
     */
    MCAPI void setBroadcastRequestCallback(class std::function<bool(void*, int*)>&&); // NOLINT
    /**
     * @symbol
     * ?setBroadcastResponseCallback\@NetherNetConnector\@\@QEAAX$$QEAV?$function\@$$A6AXAEBUNetworkID\@NetherNet\@\@PEBXH\@Z\@std\@\@\@Z
     */
    MCAPI void setBroadcastResponseCallback(class std::function<
                                            void(struct NetherNet::NetworkID const&, void const*, int)>&&); // NOLINT
    /**
     * @symbol
     * ?signIntoSignalingService\@NetherNetConnector\@\@QEBAX$$QEAV?$function\@$$A6AXVerror_code\@std\@\@\@Z\@std\@\@$$QEAV?$function\@$$A6AXW4SignalingHostConnectionStatus\@NetherNet\@\@I\@Z\@3\@$$QEAUSignalingConfiguration\@IWebRTCSignalingInterface\@NetherNet\@\@\@Z
     */
    MCAPI void
    signIntoSignalingService(class std::function<void(class std::error_code)>&&, class std::function<void(enum class NetherNet::SignalingHostConnectionStatus, unsigned int)>&&, struct NetherNet::IWebRTCSignalingInterface::SignalingConfiguration&&)
        const; // NOLINT
    /**
     * @symbol ?signOutFromSignalingService\@NetherNetConnector\@\@QEBAXXZ
     */
    MCAPI void signOutFromSignalingService() const; // NOLINT
};
