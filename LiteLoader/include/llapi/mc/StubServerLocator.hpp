/**
 * @file  StubServerLocator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "ServerLocator.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StubServerLocator.
 *
 */
class StubServerLocator : public ServerLocator {

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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?startAnnouncingServer\@StubServerLocator\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@W4GameType\@\@HH_N3\@Z
     */
    virtual void startAnnouncingServer(std::string const &, std::string const &, class Bedrock::NonOwnerPointer<class AppPlatform>, enum class GameType, int, int, bool, bool);
    /**
     * @vftbl 4
     * @symbol ?stopAnnouncingServer\@StubServerLocator\@\@UEAAXV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    virtual void stopAnnouncingServer(class Bedrock::NonOwnerPointer<class AppPlatform>);
    /**
     * @vftbl 5
     * @symbol ?startServerDiscovery\@StubServerLocator\@\@UEAAXUPortPair\@\@\@Z
     */
    virtual void startServerDiscovery(struct PortPair);
    /**
     * @vftbl 6
     * @symbol ?stopServerDiscovery\@StubServerLocator\@\@UEAAXXZ
     */
    virtual void stopServerDiscovery();
    /**
     * @vftbl 7
     * @symbol ?addCustomServer\@StubServerLocator\@\@UEAAXAEBVAsynchronousIPResolver\@\@H\@Z
     */
    virtual void addCustomServer(class AsynchronousIPResolver const &, int);
    /**
     * @vftbl 8
     * @symbol ?addCustomServer\@StubServerLocator\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual void addCustomServer(std::string const &, int);
    /**
     * @vftbl 9
     * @symbol ?getServerList\@StubServerLocator\@\@UEBA?AV?$vector\@UPingedCompatibleServer\@\@V?$allocator\@UPingedCompatibleServer\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<struct PingedCompatibleServer> getServerList() const;
    /**
     * @vftbl 10
     * @symbol ?clearServerList\@StubServerLocator\@\@UEAAXXZ
     */
    virtual void clearServerList();
    /**
     * @vftbl 11
     * @symbol ?update\@StubServerLocator\@\@UEAAXXZ
     */
    virtual void update();
    /**
     * @vftbl 12
     * @symbol ?isIPv4Supported\@StubServerLocator\@\@UEBA_NXZ
     */
    virtual bool isIPv4Supported() const;
    /**
     * @vftbl 13
     * @symbol ?isIPv6Supported\@StubServerLocator\@\@UEBA_NXZ
     */
    virtual bool isIPv6Supported() const;
    /**
     * @vftbl 14
     * @symbol ?getPingTimeForGUID\@StubServerLocator\@\@UEAAMAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual float getPingTimeForGUID(std::string const &);
    /**
     * @vftbl 15
     * @symbol ?checkCanConnectToCustomServerAsync\@StubServerLocator\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HV?$function\@$$A6AXW4ServerConnectivityTestResult\@\@\@Z\@3\@\@Z
     */
    virtual void checkCanConnectToCustomServerAsync(std::string, int, class std::function<void (enum class ServerConnectivityTestResult)>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STUBSERVERLOCATOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StubServerLocator();
#endif
    /**
     * @symbol ??0StubServerLocator\@\@QEAA\@XZ
     */
    MCAPI StubServerLocator();

};
