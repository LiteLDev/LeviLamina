/**
 * @file  StubServerLocator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StubServerLocator.
 *
 */
class StubServerLocator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STUBSERVERLOCATOR
public:
    class StubServerLocator& operator=(class StubServerLocator const &) = delete;
    StubServerLocator(class StubServerLocator const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StubServerLocator();
    /**
     * @hash   -548244884
     * @vftbl  1
     * @symbol ?setGetHostGUIDFn@StubServerLocator@@UEAAXAEBV?$function@$$A6A?AURakNetGUID@RakNet@@XZ@std@@@Z
     */
    virtual void setGetHostGUIDFn(class std::function<struct RakNet::RakNetGUID (void)> const &);
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?startAnnouncingServer@StubServerLocator@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4GameType@@HH_N2W4TransportLayer@@@Z
     */
    virtual void startAnnouncingServer(std::string const &, std::string const &, enum class GameType, int, int, bool, bool, enum class TransportLayer);
    /**
     * @hash   160618653
     * @vftbl  4
     * @symbol ?stopAnnouncingServer@StubServerLocator@@UEAAXXZ
     */
    virtual void stopAnnouncingServer();
    /**
     * @hash   -714880600
     * @vftbl  5
     * @symbol ?startServerDiscovery@StubServerLocator@@UEAAXUPortPair@@@Z
     */
    virtual void startServerDiscovery(struct PortPair);
    /**
     * @hash   1598882749
     * @vftbl  6
     * @symbol ?stopServerDiscovery@StubServerLocator@@UEAAXXZ
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
     * @hash   -1101680071
     * @vftbl  9
     * @symbol ?getServerList@StubServerLocator@@UEBA?AV?$vector@UPingedCompatibleServer@@V?$allocator@UPingedCompatibleServer@@@std@@@std@@XZ
     */
    virtual std::vector<struct PingedCompatibleServer> getServerList() const;
    /**
     * @hash   -1054866128
     * @vftbl  10
     * @symbol ?clearServerList@StubServerLocator@@UEAAXXZ
     */
    virtual void clearServerList();
    /**
     * @hash   -1892152149
     * @vftbl  11
     * @symbol ?update@StubServerLocator@@UEAAXXZ
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
     * @hash   -2088580011
     * @vftbl  15
     * @symbol ?getPingTimeForGUID@StubServerLocator@@UEAAMAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual float getPingTimeForGUID(std::string const &);
    /**
     * @hash   143621977
     * @vftbl  16
     * @symbol ?checkCanConnectToCustomServerAsync@StubServerLocator@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$function@$$A6AX_N@Z@3@@Z
     */
    virtual void checkCanConnectToCustomServerAsync(std::string, int, class std::function<void (bool)>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STUBSERVERLOCATOR
    /**
     * @hash   -2117260422
     * @symbol ?addCustomServer@StubServerLocator@@UEAAXAEBVAsynchronousIPResolver@@H@Z
     */
    MCVAPI void addCustomServer(class AsynchronousIPResolver const &, int);
    /**
     * @hash   -613059798
     * @symbol ?addCustomServer@StubServerLocator@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCVAPI void addCustomServer(std::string const &, int);
    /**
     * @hash   -1472143278
     * @symbol ?isIPv4Supported@StubServerLocator@@UEBA_NXZ
     */
    MCVAPI bool isIPv4Supported() const;
    /**
     * @hash   -1063019696
     * @symbol ?isIPv6Supported@StubServerLocator@@UEBA_NXZ
     */
    MCVAPI bool isIPv6Supported() const;
#endif
    /**
     * @hash   -1795098239
     * @symbol ??0StubServerLocator@@QEAA@XZ
     */
    MCAPI StubServerLocator();

};