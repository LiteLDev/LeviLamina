#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
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
class NetworkDebugManager;
class NetworkIdentifier;
class NetworkSessionOwner;
class NetworkStatistics;
class Scheduler;
class SignalingService;
class SignalingServiceSignInJob;
struct ConnectionDefinition;
struct NetworkSettingOptions;
struct NetworkSystemToggles;
struct PortConfiguration;
namespace NetherNet { struct NetworkID; }
namespace PlayerMessaging { struct NetworkID; }
// clang-format on

class ServerNetworkSystem : public ::Bedrock::EnableNonOwnerReferences, public ::NetworkSystem {
public:
    // ServerNetworkSystem inner types define
    using DependencyFactory = ::brstd::function_ref<::NetworkSystem::Dependencies()>;

    using StatisticsFactory = ::brstd::function_ref<::std::unique_ptr<::NetworkStatistics>()>;

public:
    // prevent constructor by default
    ServerNetworkSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerNetworkSystem() /*override*/ = default;
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
        ::PortConfiguration const&                                   portConfig,
        ::NetherNet::LogSeverity                                     defaultLogSeverity,
        ::std::optional<::NetherNet::NetworkID>                      networkId,
        ::Bedrock::NonOwnerPointer<::SignalingService>               signalingService,
        ::std::optional<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder,
        ::std::unique_ptr<::IPacketSerializationController>          packetController
    );

#ifdef LL_PLAT_C
    MCAPI ::std::shared_ptr<::SignalingServiceSignInJob> createSignalingServiceSigninJobIfNeeded(
        ::std::shared_ptr<::SignalingService>                                        signalingService,
        ::Bedrock::Threading::Async<::std::optional<::PlayerMessaging::NetworkID>>&& playerMessagingId
    );
#endif

    MCAPI ::NetworkIdentifier getLocalNetworkId() const;

    MCAPI bool host(::ConnectionDefinition const& definition);

#ifdef LL_PLAT_S
    MCAPI void reloadPacketLimitConfig(::PacketGroupDefinition::PacketGroupBuilder&& packetGroupBuilder);
#endif
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
        ::PortConfiguration const&                                   portConfig,
        ::NetherNet::LogSeverity                                     defaultLogSeverity,
        ::std::optional<::NetherNet::NetworkID>                      networkId,
        ::Bedrock::NonOwnerPointer<::SignalingService>               signalingService,
        ::std::optional<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder,
        ::std::unique_ptr<::IPacketSerializationController>          packetController
    );
    // NOLINTEND
};
