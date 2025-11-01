#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/nether_net/LogSeverity.h"
#include "mc/network/NetworkSystem.h"
#include "mc/network/PacketGroupDefinition.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IPacketSerializationController;
class NetherNetTransportFactory;
class NetworkDebugManager;
class NetworkIdentifier;
class NetworkSessionOwner;
class NetworkStatistics;
class Scheduler;
class SignalingService;
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
    virtual ~ServerNetworkSystem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerNetworkSystem(
        ::Scheduler&                                                 receiveThread,
        ::std::vector<::std::string> const&                          overrideBroadcastAddresses,
        ::NetworkSystemToggles const&                                networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager>            networkDebugManager,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>                 appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner>         networkSessionOwner,
        ::NetworkSettingOptions const&                               networkSettingOption,
        ::PortMappingInfo const&                                     portMappingInfo,
        ::NetherNet::LogSeverity                                     defaultLogSeverity,
        ::std::optional<::NetherNet::NetworkID>                      networkId,
        ::Bedrock::NonOwnerPointer<::SignalingService>               signalingService,
        ::std::optional<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder,
        ::std::unique_ptr<::IPacketSerializationController>          packetController
    );

    MCAPI ::std::unique_ptr<::NetworkStatistics> _createNetworkStatistics(
        ::NetworkSystemToggles const&                            networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager> const& networkDebugManager
    );

    MCAPI ::NetworkIdentifier getLocalNetworkId() const;

    MCAPI ::std::string getMultiplayerCorrelationId() const;

    MCAPI bool host(::ConnectionDefinition const& definition);

    MCAPI void reloadPacketLimitConfig(::PacketGroupDefinition::PacketGroupBuilder&& packetGroupBuilder);
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
        ::NetworkSettingOptions const&                       networkSettingOptions,
        ::std::optional<::NetherNet::NetworkID>              networkId,
        ::Bedrock::NonOwnerPointer<::SignalingService>       signalingService,
        ::std::unique_ptr<::IPacketSerializationController>  packetController
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scheduler&                                                 receiveThread,
        ::std::vector<::std::string> const&                          overrideBroadcastAddresses,
        ::NetworkSystemToggles const&                                networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager>            networkDebugManager,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>                 appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner>         networkSessionOwner,
        ::NetworkSettingOptions const&                               networkSettingOption,
        ::PortMappingInfo const&                                     portMappingInfo,
        ::NetherNet::LogSeverity                                     defaultLogSeverity,
        ::std::optional<::NetherNet::NetworkID>                      networkId,
        ::Bedrock::NonOwnerPointer<::SignalingService>               signalingService,
        ::std::optional<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder,
        ::std::unique_ptr<::IPacketSerializationController>          packetController
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
    MCNAPI static void** $vftableForNetworkEnableDisableListener();

    MCNAPI static void** $vftableForConnectionCallbacks();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForIPSupportInterface();
    // NOLINTEND
};
