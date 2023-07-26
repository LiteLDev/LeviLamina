#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/StubServerLocator.h"

class NetherNetServerLocator : public ::StubServerLocator {
public:
    // NetherNetServerLocator inner types declare
    // clang-format off
    struct ServerData;
    // clang-format on

    // NetherNetServerLocator inner types define
    struct ServerData {

    public:
        // prevent constructor by default
        ServerData& operator=(ServerData const&) = delete;
        ServerData(ServerData const&)            = delete;
        ServerData()                             = delete;

    public:
        /**
         * @symbol
         * ?read\@ServerData\@NetherNetServerLocator\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
         */
        MCAPI class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&); // NOLINT
        /**
         * @symbol ??1ServerData\@NetherNetServerLocator\@\@QEAA\@XZ
         */
        MCAPI ~ServerData(); // NOLINT
    };

public:
    // prevent constructor by default
    NetherNetServerLocator& operator=(NetherNetServerLocator const&) = delete;
    NetherNetServerLocator(NetherNetServerLocator const&)            = delete;

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
    ); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?stopAnnouncingServer\@NetherNetServerLocator\@\@UEAAXV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    virtual void stopAnnouncingServer(class Bedrock::NonOwnerPointer<class AppPlatform>); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?startServerDiscovery\@NetherNetServerLocator\@\@UEAAXUPortPair\@\@\@Z
     */
    virtual void startServerDiscovery(struct PortPair); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?stopServerDiscovery\@NetherNetServerLocator\@\@UEAAXXZ
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
     * ?getServerList\@NetherNetServerLocator\@\@UEBA?AV?$vector\@UPingedCompatibleServer\@\@V?$allocator\@UPingedCompatibleServer\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<struct PingedCompatibleServer> getServerList() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?clearServerList\@NetherNetServerLocator\@\@UEAAXXZ
     */
    virtual void clearServerList(); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?update\@NetherNetServerLocator\@\@UEAAXXZ
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
     * @symbol ??0NetherNetServerLocator\@\@QEAA\@XZ
     */
    MCAPI NetherNetServerLocator(); // NOLINT
    /**
     * @symbol
     * ?setNetherNetConnector\@NetherNetServerLocator\@\@QEAAX$$QEAV?$NonOwnerPointer\@UNetherNetConnector\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void setNetherNetConnector(class Bedrock::NonOwnerPointer<struct NetherNetConnector>&&); // NOLINT

    // private:
    /**
     * @symbol ?_cacheDiscoveryResponseData\@NetherNetServerLocator\@\@AEAAXAEBUServerData\@1\@\@Z
     */
    MCAPI void _cacheDiscoveryResponseData(struct NetherNetServerLocator::ServerData const&); // NOLINT
    /**
     * @symbol ?_isNetherNetOverLANAllowed\@NetherNetServerLocator\@\@AEBA_NXZ
     */
    MCAPI bool _isNetherNetOverLANAllowed() const; // NOLINT
    /**
     * @symbol ?_onDiscoveryResponse\@NetherNetServerLocator\@\@AEAAX_KV?$span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI void _onDiscoveryResponse(unsigned __int64, class gsl::span<char const, -1>); // NOLINT
    /**
     * @symbol
     * ?_pruneStaleServers\@NetherNetServerLocator\@\@AEAAXV?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void _pruneStaleServers(class std::chrono::duration<__int64, struct std::ratio<1, 1>>); // NOLINT
    /**
     * @symbol ?_setIsAnnouncing\@NetherNetServerLocator\@\@AEAAX_N\@Z
     */
    MCAPI void _setIsAnnouncing(bool); // NOLINT
    /**
     * @symbol ?_setIsDiscovering\@NetherNetServerLocator\@\@AEAAX_N\@Z
     */
    MCAPI void _setIsDiscovering(bool); // NOLINT
    /**
     * @symbol ?_transformFrom\@NetherNetServerLocator\@\@CA?AUPingedCompatibleServer\@\@_K$$QEAUServerData\@1\@\@Z
     */
    MCAPI static struct PingedCompatibleServer
    _transformFrom(unsigned __int64, struct NetherNetServerLocator::ServerData&&); // NOLINT

private:
};
