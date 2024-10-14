#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/network/NetworkSystem.h"

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
        class Scheduler&                                                 receiveThread,
        std::vector<std::string> const&                                  overrideBroadcastAddresses,
        struct NetworkSystemToggles const&                               networkToggles,
        class Bedrock::NonOwnerPointer<class NetworkDebugManager> const& networkDebugManager,
        class ServiceReference<class ServicesManager>                    sharedServicesManager,
        Bedrock::NotNullNonOwnerPtr<class NetworkSessionOwner>           networkSessionOwner,
        struct NetworkSettingOptions                                     networkSettingOption
    );

    MCAPI class NetworkIdentifier getLocalNetworkId() const;

    MCAPI std::string getMultiplayerCorrelationId() const;

    MCAPI class NetworkIdentifier getPrimaryNetworkId() const;

    MCAPI bool host(struct ConnectionDefinition const& definition);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _createNetworkStatistics(
        struct NetworkSystemToggles const&                               networkToggles,
        class Bedrock::NonOwnerPointer<class NetworkDebugManager> const& networkDebugManager
    );

    MCAPI static struct NetworkSystem::Dependencies _createConstructionDependencies(
        class ServerNetworkSystem*                               pThis,
        class Scheduler&                                         receiveThread,
        std::vector<std::string> const&                          overrideBroadcastAddresses,
        struct NetworkSystemToggles const&                       networkToggles,
        class ServiceReference<class ServicesManager>            sharedServicesManager,
        class NetherNetTransportFactory const&                   transportFactory,
        class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform,
        Bedrock::NotNullNonOwnerPtr<class NetworkSessionOwner>   networkSessionOwner,
        struct NetworkSettingOptions                             networkSettingOptions
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI static void** $vftableForNetworkEnableDisableListener();

    MCAPI static void** $vftableForRakNetConnectorConnectionCallbacks();

    MCAPI static void** $vftableForRakPeerHelperIPSupportInterface();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
