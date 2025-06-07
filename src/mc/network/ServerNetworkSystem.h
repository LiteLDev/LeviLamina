#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/nether_net/LogSeverity.h"
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
struct PortMappingInfo;
namespace NetherNet { struct NetworkID; }
// clang-format on

class ServerNetworkSystem : public ::Bedrock::EnableNonOwnerReferences, public ::NetworkSystem {
public:
    // prevent constructor by default
    ServerNetworkSystem();

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
        ::NetworkSettingOptions const&                       networkSettingOption,
        ::PortMappingInfo const&                             portMappingInfo,
        ::NetherNet::LogSeverity                             defaultLogSeverity,
        ::std::optional<::NetherNet::NetworkID>              networkId
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
        ::NetworkSettingOptions const&                       networkSettingOptions,
        ::std::optional<::NetherNet::NetworkID>              networkId
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
        ::NetworkSettingOptions const&                       networkSettingOption,
        ::PortMappingInfo const&                             portMappingInfo,
        ::NetherNet::LogSeverity                             defaultLogSeverity,
        ::std::optional<::NetherNet::NetworkID>              networkId
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
