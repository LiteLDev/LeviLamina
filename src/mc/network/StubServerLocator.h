#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class StubServerLocator {

public:
    // prevent constructor by default
    StubServerLocator& operator=(StubServerLocator const&) = delete;
    StubServerLocator(StubServerLocator const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
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
    ); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?stopAnnouncingServer\@StubServerLocator\@\@UEAAXV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    virtual void stopAnnouncingServer(class Bedrock::NonOwnerPointer<class AppPlatform>); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?startServerDiscovery\@StubServerLocator\@\@UEAAXUPortPair\@\@\@Z
     */
    virtual void startServerDiscovery(struct PortPair); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?stopServerDiscovery\@StubServerLocator\@\@UEAAXXZ
     */
    virtual void stopServerDiscovery(); // NOLINT
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7(); // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?getServerList\@StubServerLocator\@\@UEBA?AV?$vector\@UPingedCompatibleServer\@\@V?$allocator\@UPingedCompatibleServer\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<struct PingedCompatibleServer> getServerList() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?clearServerList\@StubServerLocator\@\@UEAAXXZ
     */
    virtual void clearServerList(); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?update\@StubServerLocator\@\@UEAAXXZ
     */
    virtual void update(); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13(); // NOLINT
    /**
     * @vftbl 14
     * @symbol
     * ?getPingTimeForGUID\@StubServerLocator\@\@UEAAMAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual float getPingTimeForGUID(std::string const&); // NOLINT
    /**
     * @vftbl 15
     * @symbol
     * ?checkCanConnectToCustomServerAsync\@StubServerLocator\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HV?$function\@$$A6AX_N\@Z\@3\@\@Z
     */
    virtual void checkCanConnectToCustomServerAsync(std::string, int, class std::function<void(bool)>); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STUBSERVERLOCATOR
    /**
     * @symbol ?addCustomServer\@StubServerLocator\@\@UEAAXAEBVAsynchronousIPResolver\@\@H\@Z
     */
    MCVAPI void addCustomServer(class AsynchronousIPResolver const&, int); // NOLINT
    /**
     * @symbol
     * ?addCustomServer\@StubServerLocator\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI void addCustomServer(std::string const&, int); // NOLINT
    /**
     * @symbol ?isIPv4Supported\@StubServerLocator\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv4Supported() const; // NOLINT
    /**
     * @symbol ?isIPv6Supported\@StubServerLocator\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv6Supported() const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StubServerLocator(); // NOLINT
#endif
    /**
     * @symbol ??0StubServerLocator\@\@QEAA\@XZ
     */
    MCAPI StubServerLocator(); // NOLINT
};
