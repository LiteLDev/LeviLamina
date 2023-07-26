/**
 * @file  ServerLocatorComposite.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "RakPeerHelper.hpp"
#include "Bedrock.hpp"
#include "RakNet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerLocatorComposite.
 *
 */
class ServerLocatorComposite {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLOCATORCOMPOSITE
public:
    class ServerLocatorComposite& operator=(class ServerLocatorComposite const &) = delete;
    ServerLocatorComposite(class ServerLocatorComposite const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ServerLocatorComposite();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  ?startAnnouncingServer\@ServerLocatorComposite\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0W4GameType\@\@HH_N2W4TransportLayer\@\@\@Z
     */
    virtual void startAnnouncingServer(std::string const &, std::string const &, enum class GameType, int, int, bool, bool, enum class TransportLayer);
    /**
     * @vftbl  4
     * @symbol  ?stopAnnouncingServer\@ServerLocatorComposite\@\@UEAAXXZ
     */
    virtual void stopAnnouncingServer();
    /**
     * @vftbl  5
     * @symbol  ?startServerDiscovery\@ServerLocatorComposite\@\@UEAAXUPortPair\@\@\@Z
     */
    virtual void startServerDiscovery(struct PortPair);
    /**
     * @vftbl  6
     * @symbol  ?stopServerDiscovery\@ServerLocatorComposite\@\@UEAAXXZ
     */
    virtual void stopServerDiscovery();
    /**
     * @vftbl  7
     * @symbol  ?addCustomServer\@ServerLocatorComposite\@\@UEAAXAEBVAsynchronousIPResolver\@\@H\@Z
     */
    virtual void addCustomServer(class AsynchronousIPResolver const &, int);
    /**
     * @vftbl  8
     * @symbol  ?addCustomServer\@ServerLocatorComposite\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual void addCustomServer(std::string const &, int);
    /**
     * @vftbl  9
     * @symbol  ?getServerList\@ServerLocatorComposite\@\@UEBA?AV?$vector\@UPingedCompatibleServer\@\@V?$allocator\@UPingedCompatibleServer\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<struct PingedCompatibleServer> getServerList() const;
    /**
     * @vftbl  10
     * @symbol  ?clearServerList\@ServerLocatorComposite\@\@UEAAXXZ
     */
    virtual void clearServerList();
    /**
     * @vftbl  11
     * @symbol  ?update\@ServerLocatorComposite\@\@UEAAXXZ
     */
    virtual void update();
    /**
     * @vftbl  12
     * @symbol  ?isIPv4Supported\@ServerLocatorComposite\@\@UEBA_NXZ
     */
    virtual bool isIPv4Supported() const;
    /**
     * @vftbl  13
     * @symbol  ?isIPv6Supported\@ServerLocatorComposite\@\@UEBA_NXZ
     */
    virtual bool isIPv6Supported() const;
    /**
     * @vftbl  14
     * @symbol  ?getPingTimeForGUID\@ServerLocatorComposite\@\@UEAAMAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual float getPingTimeForGUID(std::string const &);
    /**
     * @vftbl  15
     * @symbol  ?checkCanConnectToCustomServerAsync\@ServerLocatorComposite\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HV?$function\@$$A6AX_N\@Z\@3\@\@Z
     */
    virtual void checkCanConnectToCustomServerAsync(std::string, int, class std::function<void (bool)>);
    /**
     * @symbol  ??0ServerLocatorComposite\@\@QEAA\@XZ
     */
    MCAPI ServerLocatorComposite();
    /**
     * @symbol  ?initializeRakNetServerLocator\@ServerLocatorComposite\@\@QEAAXAEAVRakNetConnector\@\@AEAVIPSupportInterface\@RakPeerHelper\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@_NW4RakNetServerLANVisibility\@\@W4PermissionLAN\@\@W4PermissionIPv6\@\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@AEBV?$function\@$$A6A?AV?$unique_ptr\@VRakPeerInterface\@RakNet\@\@P6AXPEAV12\@\@Z\@std\@\@XZ\@6\@\@Z
     */
    MCAPI void initializeRakNetServerLocator(class RakNetConnector &, class RakPeerHelper::IPSupportInterface &, std::vector<std::string>, bool, enum class RakNetServerLANVisibility, enum class PermissionLAN, enum class PermissionIPv6, class Bedrock::NonOwnerPointer<class AppPlatform> const &, class std::function<class std::unique_ptr<class RakNet::RakPeerInterface, void ( *)(class RakNet::RakPeerInterface *)> (void)> const &);
    /**
     * @symbol  ?setActiveTransportLayer\@ServerLocatorComposite\@\@QEAAXW4TransportLayer\@\@\@Z
     */
    MCAPI void setActiveTransportLayer(enum class TransportLayer);
    /**
     * @symbol  ?setNetherNetServerLocator\@ServerLocatorComposite\@\@QEAAX$$QEAV?$shared_ptr\@UNetherNetConnector\@\@\@std\@\@\@Z
     */
    MCAPI void setNetherNetServerLocator(class std::shared_ptr<struct NetherNetConnector> &&);

};