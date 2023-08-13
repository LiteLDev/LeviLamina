#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/ServerLocator.h"

class StubServerLocator : public ::ServerLocator {

public:
    // prevent constructor by default
    StubServerLocator& operator=(StubServerLocator const&) = delete;
    StubServerLocator(StubServerLocator const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol
     * ?startAnnouncingServer\@StubServerLocator\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@W4GameType\@\@HH_N3\@Z
     */
    virtual void startAnnouncingServer(
        std::string const&,
        std::string const&,
        class Bedrock::NonOwnerPointer<class AppPlatform>,
        enum class GameType,
        int,
        int,
        bool,
        bool
    );
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
    virtual void addCustomServer(class AsynchronousIPResolver const&, int);
    /**
     * @vftbl 8
     * @symbol
     * ?addCustomServer\@StubServerLocator\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual void addCustomServer(std::string const&, int);
    /**
     * @vftbl 9
     * @symbol
     * ?getServerList\@StubServerLocator\@\@UEBA?AV?$vector\@UPingedCompatibleServer\@\@V?$allocator\@UPingedCompatibleServer\@\@\@std\@\@\@std\@\@XZ
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
     * @symbol
     * ?getPingTimeForGUID\@StubServerLocator\@\@UEAAMAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual float getPingTimeForGUID(std::string const&);
    /**
     * @vftbl 15
     * @symbol
     * ?checkCanConnectToCustomServerAsync\@StubServerLocator\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HV?$function\@$$A6AX_N\@Z\@3\@\@Z
     */
    virtual void checkCanConnectToCustomServerAsync(std::string, int, std::function<void(bool)>);
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
    // NOLINTEND
};
