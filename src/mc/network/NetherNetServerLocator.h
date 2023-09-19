#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/GameType.h"
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
        ServerData& operator=(ServerData const&);
        ServerData(ServerData const&);
        ServerData();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?read@ServerData@NetherNetServerLocator@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
        MCAPI class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);

        // symbol: ??1ServerData@NetherNetServerLocator@@QEAA@XZ
        MCAPI ~ServerData();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NetherNetServerLocator& operator=(NetherNetServerLocator const&);
    NetherNetServerLocator(NetherNetServerLocator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol:
    // ?startAnnouncingServer@NetherNetServerLocator@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$NonOwnerPointer@VAppPlatform@@@Bedrock@@W4GameType@@HH_N3@Z
    virtual void startAnnouncingServer(
        std::string const&,
        std::string const&,
        class Bedrock::NonOwnerPointer<class AppPlatform>,
        ::GameType,
        int,
        int,
        bool,
        bool
    );

    // vIndex: 4, symbol:
    // ?stopAnnouncingServer@NetherNetServerLocator@@UEAAXV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
    virtual void stopAnnouncingServer(class Bedrock::NonOwnerPointer<class AppPlatform>);

    // vIndex: 5, symbol: ?startServerDiscovery@NetherNetServerLocator@@UEAAXUPortPair@@@Z
    virtual void startServerDiscovery(struct PortPair);

    // vIndex: 6, symbol: ?stopServerDiscovery@NetherNetServerLocator@@UEAAXXZ
    virtual void stopServerDiscovery();

    // vIndex: 9, symbol:
    // ?getServerList@NetherNetServerLocator@@UEBA?AV?$vector@UPingedCompatibleServer@@V?$allocator@UPingedCompatibleServer@@@std@@@std@@XZ
    virtual std::vector<struct PingedCompatibleServer> getServerList() const;

    // vIndex: 10, symbol: ?clearServerList@NetherNetServerLocator@@UEAAXXZ
    virtual void clearServerList();

    // vIndex: 11, symbol: ?update@NetherNetServerLocator@@UEAAXXZ
    virtual void update();

    // symbol: ??0NetherNetServerLocator@@QEAA@XZ
    MCAPI NetherNetServerLocator();

    // symbol:
    // ?setNetherNetConnector@NetherNetServerLocator@@QEAAX$$QEAV?$NonOwnerPointer@UNetherNetConnector@@@Bedrock@@@Z
    MCAPI void setNetherNetConnector(class Bedrock::NonOwnerPointer<struct NetherNetConnector>&&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_cacheDiscoveryResponseData@NetherNetServerLocator@@AEAAXAEBUServerData@1@@Z
    MCAPI void _cacheDiscoveryResponseData(struct NetherNetServerLocator::ServerData const&);

    // symbol: ?_isNetherNetOverLANAllowed@NetherNetServerLocator@@AEBA_NXZ
    MCAPI bool _isNetherNetOverLANAllowed() const;

    // symbol: ?_onDiscoveryResponse@NetherNetServerLocator@@AEAAX_KV?$span@$$CBD$0?0@gsl@@@Z
    MCAPI void _onDiscoveryResponse(uint64, gsl::span<char const>);

    // symbol: ?_pruneStaleServers@NetherNetServerLocator@@AEAAXV?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@Z
    MCAPI void _pruneStaleServers(std::chrono::seconds);

    // symbol: ?_setIsAnnouncing@NetherNetServerLocator@@AEAAX_N@Z
    MCAPI void _setIsAnnouncing(bool);

    // symbol: ?_setIsDiscovering@NetherNetServerLocator@@AEAAX_N@Z
    MCAPI void _setIsDiscovering(bool);

    // symbol: ?_transformFrom@NetherNetServerLocator@@CA?AUPingedCompatibleServer@@_K$$QEAUServerData@1@@Z
    MCAPI static struct PingedCompatibleServer _transformFrom(uint64, struct NetherNetServerLocator::ServerData&&);

    // NOLINTEND
};
