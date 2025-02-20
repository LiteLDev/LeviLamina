#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/NetworkSystem.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class NetherNetTransportFactory;
class NetworkDebugManager;
class NetworkIdentifier;
class NetworkSessionOwner;
class Scheduler;
struct ConnectionDefinition;
struct NetworkSettingOptions;
struct NetworkSystemToggles;
// clang-format on

class ServerNetworkSystem : public ::Bedrock::EnableNonOwnerReferences, public ::NetworkSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerNetworkSystem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerNetworkSystem(
        ::Scheduler&                                         receiveThread,
        ::std::vector<::std::string> const&                  overrideBroadcastAddresses,
        ::NetworkSystemToggles const&                        networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager>    networkDebugManager,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>         appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner,
        ::NetworkSettingOptions const&                       networkSettingOption
    );

    MCAPI void _createNetworkStatistics(
        ::NetworkSystemToggles const&                            networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager> const& networkDebugManager
    );

    MCAPI ::NetworkIdentifier getLocalNetworkId() const;

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
        ::NetherNetTransportFactory const&                   transportFactory,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>         appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner,
        ::NetworkSettingOptions const&                       networkSettingOptions
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scheduler&                                         receiveThread,
        ::std::vector<::std::string> const&                  overrideBroadcastAddresses,
        ::NetworkSystemToggles const&                        networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager>    networkDebugManager,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>         appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner,
        ::NetworkSettingOptions const&                       networkSettingOption
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
