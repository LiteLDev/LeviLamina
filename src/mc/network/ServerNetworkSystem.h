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
    MCVAPI ~ServerNetworkSystem();

    MCAPI ServerNetworkSystem(
        class Scheduler&,
        std::vector<std::string> const&,
        struct NetworkSystemToggles const&,
        class Bedrock::NonOwnerPointer<class NetworkDebugManager> const&,
        class ServiceReference<class ServicesManager>,
        Bedrock::NotNullNonOwnerPtr<class NetworkSessionOwner>,
        struct NetworkSettingOptions
    );

    MCAPI class NetworkIdentifier getLocalNetworkId() const;

    MCAPI std::string getMultiplayerCorrelationId() const;

    MCAPI class NetworkIdentifier getPrimaryNetworkId() const;

    MCAPI bool host(struct ConnectionDefinition const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _createNetworkStatistics(struct NetworkSystemToggles const&, class Bedrock::NonOwnerPointer<class NetworkDebugManager> const&);

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
