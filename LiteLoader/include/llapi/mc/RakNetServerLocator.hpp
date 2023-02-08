/**
 * @file  RakNetServerLocator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "RakPeerHelper.hpp"
#include "Bedrock.hpp"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RakNetServerLocator.
 *
 */
class RakNetServerLocator {

#define AFTER_EXTRA
// Add Member There
public:
struct AnnounceServerData {
    AnnounceServerData() = delete;
    AnnounceServerData(AnnounceServerData const&) = delete;
    AnnounceServerData(AnnounceServerData const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNETSERVERLOCATOR
public:
    class RakNetServerLocator& operator=(class RakNetServerLocator const &) = delete;
    RakNetServerLocator(class RakNetServerLocator const &) = delete;
    RakNetServerLocator() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RakNetServerLocator();
    /**
     * @hash   -1663498799
     * @vftbl  1
     * @symbol  ?_onDisable\@RakNetServerLocator\@\@EEAAXXZ
     */
    virtual void _onDisable();
    /**
     * @hash   565480216
     * @vftbl  2
     * @symbol  ?_onEnable\@RakNetServerLocator\@\@EEAAXXZ
     */
    virtual void _onEnable();
    /**
     * @hash   1454965820
     * @vftbl  3
     * @symbol  ?startAnnouncingServer\@RakNetServerLocator\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0W4GameType\@\@HH_N2W4TransportLayer\@\@\@Z
     */
    virtual void startAnnouncingServer(std::string const &, std::string const &, enum class GameType, int, int, bool, bool, enum class TransportLayer);
    /**
     * @hash   -230365088
     * @vftbl  4
     * @symbol  ?stopAnnouncingServer\@RakNetServerLocator\@\@UEAAXXZ
     */
    virtual void stopAnnouncingServer();
    /**
     * @hash   -2129264267
     * @vftbl  5
     * @symbol  ?startServerDiscovery\@RakNetServerLocator\@\@UEAAXUPortPair\@\@\@Z
     */
    virtual void startServerDiscovery(struct PortPair);
    /**
     * @hash   1891300416
     * @vftbl  6
     * @symbol  ?stopServerDiscovery\@RakNetServerLocator\@\@UEAAXXZ
     */
    virtual void stopServerDiscovery();
    /**
     * @hash   -210956675
     * @vftbl  7
     * @symbol  ?addCustomServer\@RakNetServerLocator\@\@UEAAXAEBVAsynchronousIPResolver\@\@H\@Z
     */
    virtual void addCustomServer(class AsynchronousIPResolver const &, int);
    /**
     * @hash   1347579437
     * @vftbl  8
     * @symbol  ?addCustomServer\@RakNetServerLocator\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual void addCustomServer(std::string const &, int);
    /**
     * @hash   -733792740
     * @vftbl  9
     * @symbol  ?getServerList\@RakNetServerLocator\@\@UEBA?AV?$vector\@UPingedCompatibleServer\@\@V?$allocator\@UPingedCompatibleServer\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<struct PingedCompatibleServer> getServerList() const;
    /**
     * @hash   -951267117
     * @vftbl  10
     * @symbol  ?clearServerList\@RakNetServerLocator\@\@UEAAXXZ
     */
    virtual void clearServerList();
    /**
     * @hash   -753697282
     * @vftbl  11
     * @symbol  ?update\@RakNetServerLocator\@\@UEAAXXZ
     */
    virtual void update();
    /**
     * @hash   -821138811
     * @vftbl  12
     * @symbol  ?isIPv4Supported\@RakNetServerLocator\@\@UEBA_NXZ
     */
    virtual bool isIPv4Supported() const;
    /**
     * @hash   1514642915
     * @vftbl  13
     * @symbol  ?isIPv6Supported\@RakNetServerLocator\@\@UEBA_NXZ
     */
    virtual bool isIPv6Supported() const;
    /**
     * @hash   1443544898
     * @vftbl  14
     * @symbol  ?getPingTimeForGUID\@RakNetServerLocator\@\@UEAAMAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual float getPingTimeForGUID(std::string const &);
    /**
     * @hash   -2131391754
     * @vftbl  15
     * @symbol  ?checkCanConnectToCustomServerAsync\@RakNetServerLocator\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HV?$function\@$$A6AX_N\@Z\@3\@\@Z
     */
    virtual void checkCanConnectToCustomServerAsync(std::string, int, class std::function<void (bool)>);
    /**
     * @symbol  ??0RakNetServerLocator\@\@QEAA\@AEAVRakNetConnector\@\@AEAVIPSupportInterface\@RakPeerHelper\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@_NW4RakNetServerLANVisibility\@\@W4PermissionLAN\@\@W4PermissionIPv6\@\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@V?$function\@$$A6A?AV?$unique_ptr\@VRakPeerInterface\@RakNet\@\@P6AXPEAV12\@\@Z\@std\@\@XZ\@5\@\@Z
     */
    MCAPI RakNetServerLocator(class RakNetConnector &, class RakPeerHelper::IPSupportInterface &, std::vector<std::string>, bool, enum class RakNetServerLANVisibility, enum class PermissionLAN, enum class PermissionIPv6, class Bedrock::NonOwnerPointer<class AppPlatform> const &, class std::function<class std::unique_ptr<class RakNet::RakPeerInterface, void ( *)(class RakNet::RakPeerInterface *)> (void)>);
    /**
     * @hash   -627226729
     * @symbol  ?parseUnconnectedPongPacketData\@RakNetServerLocator\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static bool parseUnconnectedPongPacketData(std::string const &, std::vector<std::string> &);

//private:
    /**
     * @hash   -121288676
     * @symbol  ?_activate\@RakNetServerLocator\@\@AEAAXXZ
     */
    MCAPI void _activate();
    /**
     * @hash   -771856350
     * @symbol  ?_addCustomServerFromIpResolver\@RakNetServerLocator\@\@AEAAXAEBVAsynchronousIPResolver\@\@H\@Z
     */
    MCAPI void _addCustomServerFromIpResolver(class AsynchronousIPResolver const &, int);
    /**
     * @hash   -936162237
     * @symbol  ?_addCustomServerV4\@RakNetServerLocator\@\@AEAA_NAEBVAsynchronousIPResolver\@\@H\@Z
     */
    MCAPI bool _addCustomServerV4(class AsynchronousIPResolver const &, int);
    /**
     * @hash   -1292216171
     * @symbol  ?_addCustomServerV6\@RakNetServerLocator\@\@AEAA_NAEBVAsynchronousIPResolver\@\@H\@Z
     */
    MCAPI bool _addCustomServerV6(class AsynchronousIPResolver const &, int);
    /**
     * @hash   -1342104753
     * @symbol  ?_announceServer\@RakNetServerLocator\@\@AEAAXAEBUAnnounceServerData\@1\@\@Z
     */
    MCAPI void _announceServer(struct RakNetServerLocator::AnnounceServerData const &);
    /**
     * @hash   -1529489796
     * @symbol  ?_enqueueStateChangeRequest\@RakNetServerLocator\@\@AEAAXW4LocatorStateChangeRequest\@\@UAnnounceServerData\@1\@UPortPair\@\@\@Z
     */
    MCAPI void _enqueueStateChangeRequest(enum class LocatorStateChangeRequest, struct RakNetServerLocator::AnnounceServerData, struct PortPair);
    /**
     * @hash   -2030433023
     * @symbol  ?_getHostGuid\@RakNetServerLocator\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@H\@Z
     */
    MCAPI std::string _getHostGuid(std::string const &, int);
    /**
     * @hash   -1962573728
     * @symbol  ?_getServerOriginalAddress\@RakNetServerLocator\@\@AEAAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI void _getServerOriginalAddress(std::string &, std::string const &);
    /**
     * @hash   -89553494
     * @symbol  ?_handleUnconnectedPong\@RakNetServerLocator\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBUPacket\@RakNet\@\@_N_K\@Z
     */
    MCAPI bool _handleUnconnectedPong(std::string const &, struct RakNet::Packet const *, bool, unsigned __int64);
    /**
     * @hash   -269792246
     * @symbol  ?_initializeBroadcastAddresses\@RakNetServerLocator\@\@AEAAXXZ
     */
    MCAPI void _initializeBroadcastAddresses();
    /**
     * @hash   1592233670
     * @symbol  ?_onPongReceive\@RakNetServerLocator\@\@AEAA_NAEAMAEBURakNetGUID\@RakNet\@\@AEBIH\@Z
     */
    MCAPI bool _onPongReceive(float &, struct RakNet::RakNetGUID const &, unsigned int const &, int);
    /**
     * @hash   -807610087
     * @symbol  ?_pingServerV4\@RakNetServerLocator\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI bool _pingServerV4(std::string const &, int);
    /**
     * @hash   662280379
     * @symbol  ?_pingServerV6\@RakNetServerLocator\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI bool _pingServerV6(std::string const &, int);
    /**
     * @hash   339920877
     * @symbol  ?_setPingResponder\@RakNetServerLocator\@\@AEAAXAEBUAnnounceServerData\@1\@\@Z
     */
    MCAPI void _setPingResponder(struct RakNetServerLocator::AnnounceServerData const &);
    /**
     * @hash   148614910
     * @symbol  ?_startAnnouncingServer\@RakNetServerLocator\@\@AEAAXAEBUAnnounceServerData\@1\@\@Z
     */
    MCAPI void _startAnnouncingServer(struct RakNetServerLocator::AnnounceServerData const &);
    /**
     * @hash   362223799
     * @symbol  ?_startServerDiscovery\@RakNetServerLocator\@\@AEAAXAEBUPortPair\@\@\@Z
     */
    MCAPI void _startServerDiscovery(struct PortPair const &);
    /**
     * @hash   -1926183884
     * @symbol  ?_stopAnnouncingServer\@RakNetServerLocator\@\@AEAAXXZ
     */
    MCAPI void _stopAnnouncingServer();
    /**
     * @hash   848276918
     * @symbol  ?_stopServerDiscovery\@RakNetServerLocator\@\@AEAAXXZ
     */
    MCAPI void _stopServerDiscovery();
    /**
     * @hash   1057889920
     * @symbol  ?_updateNetwork\@RakNetServerLocator\@\@AEAAXXZ
     */
    MCAPI void _updateNetwork();
    /**
     * @hash   -688816214
     * @symbol  ?_updateQueuedPings\@RakNetServerLocator\@\@AEAA_NXZ
     */
    MCAPI bool _updateQueuedPings();

private:

};