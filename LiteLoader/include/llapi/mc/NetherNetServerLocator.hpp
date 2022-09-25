/**
 * @file  NetherNetServerLocator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"
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
     * @symbol __unk_destructor_0
     */
    virtual ~NetherNetServerLocator();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?startAnnouncingServer@NetherNetServerLocator@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4GameType@@HH_N2W4TransportLayer@@@Z
     */
    virtual void startAnnouncingServer(std::string const &, std::string const &, enum GameType, int, int, bool, bool, enum TransportLayer);
    /**
     * @hash   -1955933884
     * @vftbl  4
     * @symbol ?stopAnnouncingServer@NetherNetServerLocator@@UEAAXXZ
     */
    virtual void stopAnnouncingServer();
    /**
     * @hash   1508509505
     * @vftbl  5
     * @symbol ?startServerDiscovery@NetherNetServerLocator@@UEAAXUPortPair@@@Z
     */
    virtual void startServerDiscovery(struct PortPair);
    /**
     * @hash   549557540
     * @vftbl  6
     * @symbol ?stopServerDiscovery@NetherNetServerLocator@@UEAAXXZ
     */
    virtual void stopServerDiscovery();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @hash   -1402992640
     * @vftbl  9
     * @symbol ?getServerList@NetherNetServerLocator@@UEBA?AV?$vector@UPingedCompatibleServer@@V?$allocator@UPingedCompatibleServer@@@std@@@std@@XZ
     */
    virtual std::vector<struct PingedCompatibleServer> getServerList() const;
    /**
     * @hash   -441193193
     * @vftbl  10
     * @symbol ?clearServerList@NetherNetServerLocator@@UEAAXXZ
     */
    virtual void clearServerList();
    /**
     * @hash   -1737403038
     * @vftbl  11
     * @symbol ?update@NetherNetServerLocator@@UEAAXXZ
     */
    virtual void update();
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @hash   803441354
     * @symbol ??0NetherNetServerLocator@@QEAA@XZ
     */
    MCAPI NetherNetServerLocator();
    /**
     * @symbol ?setNetherNetInstance@NetherNetServerLocator@@QEAAXAEBV?$shared_ptr@UNetherNetInstance@@@std@@@Z
     */
    MCAPI void setNetherNetInstance(class std::shared_ptr<struct NetherNetInstance> const &);

//private:
    /**
     * @hash   -562637946
     * @symbol ?_isNetherNetOverLANAllowed@NetherNetServerLocator@@AEBA_NXZ
     */
    MCAPI bool _isNetherNetOverLANAllowed() const;
    /**
     * @hash   -198683525
     * @symbol ?_onBroadcastResponseCallback@NetherNetServerLocator@@AEAAX_KPEBXH@Z
     */
    MCAPI void _onBroadcastResponseCallback(unsigned __int64, void const *, int);
    /**
     * @hash   973211439
     * @symbol ?_pruneStaleServers@NetherNetServerLocator@@AEAAXV?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@Z
     */
    MCAPI void _pruneStaleServers(class std::chrono::duration<__int64, struct std::ratio<1, 1>>);
    /**
     * @hash   1787652650
     * @symbol ?_setBroadcastDiscoveryResponse@NetherNetServerLocator@@AEAAXAEBUServerData@1@@Z
     */
    MCAPI void _setBroadcastDiscoveryResponse(struct NetherNetServerLocator::ServerData const &);
    /**
     * @hash   -1772421565
     * @symbol ?_setIsAnnouncing@NetherNetServerLocator@@AEAAX_N@Z
     */
    MCAPI void _setIsAnnouncing(bool);
    /**
     * @hash   -445908934
     * @symbol ?_setIsDiscovering@NetherNetServerLocator@@AEAAX_N@Z
     */
    MCAPI void _setIsDiscovering(bool);
    /**
     * @hash   2091158434
     * @symbol ?_transformFrom@NetherNetServerLocator@@AEAA?AUPingedCompatibleServer@@_KAEBUServerData@1@@Z
     */
    MCAPI struct PingedCompatibleServer _transformFrom(unsigned __int64, struct NetherNetServerLocator::ServerData const &);

private:

};