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
    MCNAPI ServerNetworkSystem(
        ::Scheduler&                                         receiveThread,
        ::std::vector<::std::string> const&                  overrideBroadcastAddresses,
        ::NetworkSystemToggles const&                        networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager>    networkDebugManager,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>         appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner,
        ::NetworkSettingOptions const&                       networkSettingOption
    );

    MCNAPI void _createNetworkStatistics(
        ::NetworkSystemToggles const&                            networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager> const& networkDebugManager
    );

    MCNAPI ::NetworkIdentifier getLocalNetworkId() const;

    MCNAPI bool host(::ConnectionDefinition const& definition);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::NetworkSystem::Dependencies _createConstructionDependencies(
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
    MCNAPI void* $ctor(
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForNetworkEnableDisableListener();

    MCNAPI static void** $vftableForConnectionCallbacks();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForIPSupportInterface();
    // NOLINTEND
};
