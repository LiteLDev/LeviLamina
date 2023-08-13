#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/NetworkEnableDisableListener.h"

class ServerLocator : public ::NetworkEnableDisableListener {

public:
    // prevent constructor by default
    ServerLocator& operator=(ServerLocator const&) = delete;
    ServerLocator(ServerLocator const&)            = delete;
    ServerLocator()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?_onDisable\@ServerLocator\@\@EEAAXXZ
     */
    virtual void _onDisable();
    /**
     * @vftbl 2
     * @symbol ?_onEnable\@ServerLocator\@\@EEAAXXZ
     */
    virtual void _onEnable();
    /**
     * @vftbl 3
     * @symbol
     * ?startAnnouncingServer\@NetherNetServerLocator\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@W4GameType\@\@HH_N3\@Z
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
    ) = 0;
    /**
     * @vftbl 4
     * @symbol
     * ?stopAnnouncingServer\@NetherNetServerLocator\@\@UEAAXV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    virtual void stopAnnouncingServer(class Bedrock::NonOwnerPointer<class AppPlatform>) = 0;
    /**
     * @vftbl 5
     * @symbol ?startServerDiscovery\@NetherNetServerLocator\@\@UEAAXUPortPair\@\@\@Z
     */
    virtual void startServerDiscovery(struct PortPair) = 0;
    /**
     * @vftbl 6
     * @symbol ?stopServerDiscovery\@NetherNetServerLocator\@\@UEAAXXZ
     */
    virtual void stopServerDiscovery() = 0;
    /**
     * @vftbl 7
     * @symbol ?addCustomServer\@StubServerLocator\@\@UEAAXAEBVAsynchronousIPResolver\@\@H\@Z
     */
    virtual void addCustomServer(class AsynchronousIPResolver const&, int) = 0;
    /**
     * @vftbl 8
     * @symbol
     * ?addCustomServer\@StubServerLocator\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual void addCustomServer(std::string const&, int) = 0;
    /**
     * @vftbl 9
     * @symbol
     * ?getServerList\@NetherNetServerLocator\@\@UEBA?AV?$vector\@UPingedCompatibleServer\@\@V?$allocator\@UPingedCompatibleServer\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<struct PingedCompatibleServer> getServerList() const = 0;
    /**
     * @vftbl 10
     * @symbol ?clearServerList\@NetherNetServerLocator\@\@UEAAXXZ
     */
    virtual void clearServerList() = 0;
    /**
     * @vftbl 11
     * @symbol ?update\@NetherNetServerLocator\@\@UEAAXXZ
     */
    virtual void update() = 0;
    /**
     * @vftbl 12
     * @symbol ?isIPv4Supported\@StubServerLocator\@\@UEBA_NXZ
     */
    virtual bool isIPv4Supported() const = 0;
    /**
     * @vftbl 13
     * @symbol ?isIPv6Supported\@StubServerLocator\@\@UEBA_NXZ
     */
    virtual bool isIPv6Supported() const = 0;
    /**
     * @vftbl 14
     * @symbol
     * ?getPingTimeForGUID\@StubServerLocator\@\@UEAAMAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual float getPingTimeForGUID(std::string const&) = 0;
    /**
     * @vftbl 15
     * @symbol
     * ?checkCanConnectToCustomServerAsync\@StubServerLocator\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HV?$function\@$$A6AX_N\@Z\@3\@\@Z
     */
    virtual void checkCanConnectToCustomServerAsync(std::string, int, std::function<void(bool)>) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERLOCATOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerLocator();
#endif
    // NOLINTEND
};
