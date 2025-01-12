#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/network/NetworkSystem.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class NetherNetTransportFactory;
class NetworkDebugManager;
class NetworkIdentifier;
class NetworkSessionOwner;
class Scheduler;
class ServicesManager;
struct ConnectionDefinition;
struct NetworkSettingOptions;
struct NetworkSystemToggles;
// clang-format on

class ServerNetworkSystem : public ::Bedrock::EnableNonOwnerReferences, public ::NetworkSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerNetworkSystem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerNetworkSystem(
        ::Scheduler&                                             receiveThread,
        ::std::vector<::std::string> const&                      overrideBroadcastAddresses,
        ::NetworkSystemToggles const&                            networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager> const& networkDebugManager,
        ::ServiceReference<::ServicesManager>                    sharedServicesManager,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner>     networkSessionOwner,
        ::NetworkSettingOptions                                  networkSettingOption
    );

    MCAPI void _createNetworkStatistics(
        ::NetworkSystemToggles const&                            networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager> const& networkDebugManager
    );

    MCAPI ::NetworkIdentifier getLocalNetworkId() const;

    MCAPI ::std::string getMultiplayerCorrelationId() const;

    MCAPI ::NetworkIdentifier getPrimaryNetworkId() const;

    MCAPI bool host(::ConnectionDefinition const& definition);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::NetworkSystem::Dependencies _createConstructionDependencies(
        ::ServerNetworkSystem*                               pThis,
        ::Scheduler&                                         receiveThread,
        ::std::vector<::std::string> const&                  overrideBroadcastAddresses,
        ::NetworkSystemToggles const&                        networkToggles,
        ::ServiceReference<::ServicesManager>                sharedServicesManager,
        ::NetherNetTransportFactory const&                   transportFactory,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&     appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner,
        ::NetworkSettingOptions                              networkSettingOptions
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scheduler&                                             receiveThread,
        ::std::vector<::std::string> const&                      overrideBroadcastAddresses,
        ::NetworkSystemToggles const&                            networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager> const& networkDebugManager,
        ::ServiceReference<::ServicesManager>                    sharedServicesManager,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner>     networkSessionOwner,
        ::NetworkSettingOptions                                  networkSettingOption
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForNetworkEnableDisableListener();

    MCAPI static void** $vftableForConnectionCallbacks();

    MCAPI static void** $vftable();

    MCAPI static void** $vftableForIPSupportInterface();
    // NOLINTEND
};
