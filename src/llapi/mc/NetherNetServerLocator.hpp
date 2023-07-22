/**
 * @file  NetherNetServerLocator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StubServerLocator.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetherNetServerLocator.
 *
 */
class NetherNetServerLocator : public StubServerLocator {

#define AFTER_EXTRA
// Add Member There
public:
struct ServerData {
    ServerData() = delete;
    ServerData(ServerData const&) = delete;
    ServerData(ServerData const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNETSERVERLOCATOR
public:
    class NetherNetServerLocator& operator=(class NetherNetServerLocator const &) = delete;
    NetherNetServerLocator(class NetherNetServerLocator const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NetherNetServerLocator();
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
     * @symbol  ?startAnnouncingServer\@NetherNetServerLocator\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0W4GameType\@\@HH_N2W4TransportLayer\@\@\@Z
     */
    virtual void startAnnouncingServer(std::string const &, std::string const &, enum class GameType, int, int, bool, bool, enum class TransportLayer);
    /**
     * @vftbl  4
     * @symbol  ?stopAnnouncingServer\@NetherNetServerLocator\@\@UEAAXXZ
     */
    virtual void stopAnnouncingServer();
    /**
     * @vftbl  5
     * @symbol  ?startServerDiscovery\@NetherNetServerLocator\@\@UEAAXUPortPair\@\@\@Z
     */
    virtual void startServerDiscovery(struct PortPair);
    /**
     * @vftbl  6
     * @symbol  ?stopServerDiscovery\@NetherNetServerLocator\@\@UEAAXXZ
     */
    virtual void stopServerDiscovery();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  ?getServerList\@NetherNetServerLocator\@\@UEBA?AV?$vector\@UPingedCompatibleServer\@\@V?$allocator\@UPingedCompatibleServer\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<struct PingedCompatibleServer> getServerList() const;
    /**
     * @vftbl  10
     * @symbol  ?clearServerList\@NetherNetServerLocator\@\@UEAAXXZ
     */
    virtual void clearServerList();
    /**
     * @vftbl  11
     * @symbol  ?update\@NetherNetServerLocator\@\@UEAAXXZ
     */
    virtual void update();
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol  __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @symbol  ??0NetherNetServerLocator\@\@QEAA\@XZ
     */
    MCAPI NetherNetServerLocator();
    /**
     * @symbol  ?setNetherNetConnector\@NetherNetServerLocator\@\@QEAAX$$QEAV?$shared_ptr\@UNetherNetConnector\@\@\@std\@\@\@Z
     */
    MCAPI void setNetherNetConnector(class std::shared_ptr<struct NetherNetConnector> &&);

//private:
    /**
     * @symbol  ?_cacheDiscoveryResponseData\@NetherNetServerLocator\@\@AEAAXAEBUServerData\@1\@\@Z
     */
    MCAPI void _cacheDiscoveryResponseData(struct NetherNetServerLocator::ServerData const &);
    /**
     * @symbol  ?_isNetherNetOverLANAllowed\@NetherNetServerLocator\@\@AEBA_NXZ
     */
    MCAPI bool _isNetherNetOverLANAllowed() const;
    /**
     * @symbol  ?_onDiscoveryResponse\@NetherNetServerLocator\@\@AEAAX_KV?$span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI void _onDiscoveryResponse(unsigned __int64, class gsl::span<char const, -1>);
    /**
     * @symbol  ?_pruneStaleServers\@NetherNetServerLocator\@\@AEAAXV?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void _pruneStaleServers(class std::chrono::duration<__int64, struct std::ratio<1, 1>>);
    /**
     * @symbol  ?_setIsAnnouncing\@NetherNetServerLocator\@\@AEAAX_N\@Z
     */
    MCAPI void _setIsAnnouncing(bool);

private:

};