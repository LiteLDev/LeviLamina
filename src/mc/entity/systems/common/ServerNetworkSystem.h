#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/NetworkSystem.h"
#include "mc/services/ServiceReference.h"

class ServerNetworkSystem {
public:
    // prevent constructor by default
    ServerNetworkSystem& operator=(ServerNetworkSystem const&);
    ServerNetworkSystem(ServerNetworkSystem const&);
    ServerNetworkSystem();

public:
    // NOLINTBEGIN
    // symbol: ??1ServerNetworkSystem@@UEAA@XZ
    MCVAPI ~ServerNetworkSystem();

    // symbol:
    // ??0ServerNetworkSystem@@QEAA@AEAVScheduler@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBUNetworkSystemToggles@@AEBV?$NonOwnerPointer@VNetworkDebugManager@@@Bedrock@@V?$ServiceReference@VServicesManager@@@@V?$not_null@V?$NonOwnerPointer@VNetworkSessionOwner@@@Bedrock@@@gsl@@UNetworkSettingOptions@@@Z
    MCAPI ServerNetworkSystem(
        class Scheduler&,
        std::vector<std::string> const&,
        struct NetworkSystemToggles const&,
        class Bedrock::NonOwnerPointer<class NetworkDebugManager> const&,
        class ServiceReference<class ServicesManager>,
        Bedrock::NotNullNonOwnerPtr<class NetworkSessionOwner>,
        struct NetworkSettingOptions
    );

    // symbol: ?getLocalNetworkId@ServerNetworkSystem@@QEBA?AVNetworkIdentifier@@XZ
    MCAPI class NetworkIdentifier getLocalNetworkId() const;

    // symbol:
    // ?getMultiplayerCorrelationId@ServerNetworkSystem@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getMultiplayerCorrelationId() const;

    // symbol: ?getPrimaryNetworkId@ServerNetworkSystem@@QEBA?AVNetworkIdentifier@@XZ
    MCAPI class NetworkIdentifier getPrimaryNetworkId() const;

    // symbol: ?host@ServerNetworkSystem@@QEAA_NAEBUConnectionDefinition@@@Z
    MCAPI bool host(struct ConnectionDefinition const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_createNetworkStatistics@ServerNetworkSystem@@AEAAXAEBUNetworkSystemToggles@@AEBV?$NonOwnerPointer@VNetworkDebugManager@@@Bedrock@@@Z
    MCAPI void
    _createNetworkStatistics(struct NetworkSystemToggles const&, class Bedrock::NonOwnerPointer<class NetworkDebugManager> const&);

    // symbol:
    // ?_createConstructionDependencies@ServerNetworkSystem@@CA?AUDependencies@NetworkSystem@@PEAV1@AEAVScheduler@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBUNetworkSystemToggles@@V?$ServiceReference@VServicesManager@@@@AEBVNetherNetTransportFactory@@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@V?$not_null@V?$NonOwnerPointer@VNetworkSessionOwner@@@Bedrock@@@gsl@@UNetworkSettingOptions@@@Z
    MCAPI static struct NetworkSystem::Dependencies _createConstructionDependencies(
        class ServerNetworkSystem*,
        class Scheduler&,
        std::vector<std::string> const&,
        struct NetworkSystemToggles const&,
        class ServiceReference<class ServicesManager>,
        class NetherNetTransportFactory const&,
        class Bedrock::NonOwnerPointer<class AppPlatform> const&,
        Bedrock::NotNullNonOwnerPtr<class NetworkSessionOwner>,
        struct NetworkSettingOptions
    );

    // NOLINTEND
};
