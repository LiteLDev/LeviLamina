/**
 * @file  NetherNetTransportStub.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class NetherNetTransportStub {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNETTRANSPORTSTUB
public:
    class NetherNetTransportStub& operator=(class NetherNetTransportStub const &) = delete;
    NetherNetTransportStub(class NetherNetTransportStub const &) = delete;
    NetherNetTransportStub() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERNETTRANSPORTSTUB
    /**
     * @symbol  ?AcceptSessionWithUser\@NetherNetTransportStub\@\@UEAA_NUNetworkID\@NetherNet\@\@\@Z
     */
    MCVAPI bool AcceptSessionWithUser(struct NetherNet::NetworkID);
    /**
     * @symbol  ?ClearPacketData\@NetherNetTransportStub\@\@UEAAXUNetworkID\@NetherNet\@\@\@Z
     */
    MCVAPI void ClearPacketData(struct NetherNet::NetworkID);
    /**
     * @symbol  ?CloseSessionWithUser\@NetherNetTransportStub\@\@UEAA_NUNetworkID\@NetherNet\@\@\@Z
     */
    MCVAPI bool CloseSessionWithUser(struct NetherNet::NetworkID);
    /**
     * @symbol  ?DisableBroadcastDiscovery\@NetherNetTransportStub\@\@UEAAXXZ
     */
    MCVAPI void DisableBroadcastDiscovery();
    /**
     * @symbol  ?DisableSignalingOverLAN\@NetherNetTransportStub\@\@UEAAXXZ
     */
    MCVAPI void DisableSignalingOverLAN();
    /**
     * @symbol  ?EnableBroadcastDiscovery\@NetherNetTransportStub\@\@UEAAXXZ
     */
    MCVAPI void EnableBroadcastDiscovery();
    /**
     * @symbol  ?EnableSignalingOverLAN\@NetherNetTransportStub\@\@UEAAXXZ
     */
    MCVAPI void EnableSignalingOverLAN();
    /**
     * @symbol  ?GetSessionState\@NetherNetTransportStub\@\@UEAA_NUNetworkID\@NetherNet\@\@PEAUSessionState\@3\@\@Z
     */
    MCVAPI bool GetSessionState(struct NetherNet::NetworkID, struct NetherNet::SessionState *);
    /**
     * @symbol  ?IsLANBroadcastModeAvailable\@NetherNetTransportStub\@\@UEBA_NXZ
     */
    MCVAPI bool IsLANBroadcastModeAvailable() const;
    /**
     * @symbol  ?IsPacketAvailable\@NetherNetTransportStub\@\@UEAA_NUNetworkID\@NetherNet\@\@PEAI\@Z
     */
    MCVAPI bool IsPacketAvailable(struct NetherNet::NetworkID, unsigned int *);
    /**
     * @symbol  ?IsSignedIntoSignalingService\@NetherNetTransportStub\@\@UEBA_NXZ
     */
    MCVAPI bool IsSignedIntoSignalingService() const;
    /**
     * @symbol  ?OpenSessionWithUser\@NetherNetTransportStub\@\@UEAA_NUNetworkID\@NetherNet\@\@\@Z
     */
    MCVAPI bool OpenSessionWithUser(struct NetherNet::NetworkID);
    /**
     * @symbol  ?ReadPacket\@NetherNetTransportStub\@\@UEAA_NUNetworkID\@NetherNet\@\@PEAXIPEAI\@Z
     */
    MCVAPI bool ReadPacket(struct NetherNet::NetworkID, void *, unsigned int, unsigned int *);
    /**
     * @symbol  ?RegisterRelayServerCredentialsReadyCallback\@NetherNetTransportStub\@\@UEAAXAEBV?$function\@$$A6AXW4ERelayServerConfigurationResult\@NetherNet\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void RegisterRelayServerCredentialsReadyCallback(class std::function<void (enum class NetherNet::ERelayServerConfigurationResult)> const &);
    /**
     * @symbol  ?SendPacket\@NetherNetTransportStub\@\@UEAA_NUNetworkID\@NetherNet\@\@PEBDIW4ESendType\@3\@\@Z
     */
    MCVAPI bool SendPacket(struct NetherNet::NetworkID, char const *, unsigned int, enum class NetherNet::ESendType);
    /**
     * @symbol  ?SetServerConfiguration\@NetherNetTransportStub\@\@UEAAXPEBUNetherNetTransportServerConfiguration\@NetherNet\@\@\@Z
     */
    MCVAPI void SetServerConfiguration(struct NetherNet::NetherNetTransportServerConfiguration const *);
    /**
     * @symbol  ?SetWebRTCSignalingInterface\@NetherNetTransportStub\@\@UEAAXAEBV?$shared_ptr\@VIWebRTCSignalingInterface\@NetherNet\@\@\@std\@\@\@Z
     */
    MCVAPI void SetWebRTCSignalingInterface(class std::shared_ptr<class NetherNet::IWebRTCSignalingInterface> const &);
    /**
     * @symbol  ?SignIntoSignalingService\@NetherNetTransportStub\@\@UEAAXAEBV?$function\@$$A6AXVerror_code\@std\@\@\@Z\@std\@\@AEBV?$function\@$$A6AXW4SignalingHostConnectionStatus\@NetherNet\@\@I\@Z\@3\@AEBUSignalingConfiguration\@IWebRTCSignalingInterface\@NetherNet\@\@\@Z
     */
    MCVAPI void SignIntoSignalingService(class std::function<void (class std::error_code)> const &, class std::function<void (enum class NetherNet::SignalingHostConnectionStatus, unsigned int)> const &, struct NetherNet::IWebRTCSignalingInterface::SignalingConfiguration const &);
    /**
     * @symbol  ?SignOutFromSignalingService\@NetherNetTransportStub\@\@UEAAXXZ
     */
    MCVAPI void SignOutFromSignalingService();
#endif

};