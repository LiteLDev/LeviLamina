#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/IGameConnectionInfoProvider.h"
#include "mc/network/NetworkSystem.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class NetworkStatistics;
class Scheduler;
struct AppPlatform;
struct ClientNetworkSystemOptions;
struct IPacketSerializationController;
struct NetherNetTransportFactory;
struct NetworkDebugManager;
struct NetworkSessionOwner;
struct NetworkSummary;
struct NetworkSystemToggles;
struct SignalingService;
struct SignalingServiceSignInJob;
namespace Json { class Value; }
namespace PlayerMessaging { struct NetworkID; }
namespace Social { struct GameConnectionInfo; }
// clang-format on

class ClientNetworkSystem : public ::Social::IGameConnectionInfoProvider,
                            public ::Bedrock::EnableNonOwnerReferences,
                            public ::NetworkSystem {
public:
    // ClientNetworkSystem inner types define
    using DependencyFactory = ::brstd::function_ref<::NetworkSystem::Dependencies()>;

    using StatisticsFactory =
        ::brstd::function_ref<::std::unique_ptr<::NetworkStatistics>(), ::std::unique_ptr<::NetworkStatistics>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                    mTaskGroup;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::SignalingService>>             mSignalingService;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mUserLoggingSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mUserConnectionQualitySub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mDisableLanSignalingSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::NetworkSummary>> mNetworkSummary;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientNetworkSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientNetworkSystem() /*override*/;

    // vIndex: 1
    virtual ::Social::GameConnectionInfo const& getConnectionInfo() const /*override*/;

    // vIndex: 2
    virtual ::std::optional<::std::string> getNetworkInfoString() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientNetworkSystem(
        ::Scheduler&                                         receiveThread,
        ::std::vector<::std::string> const&                  overrideBroadcastAddresses,
        ::NetworkSystemToggles const&                        networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager>    networkDebugManager,
        ::Bedrock::NonOwnerPointer<::AppPlatform>            appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner,
        ::std::unique_ptr<::IPacketSerializationController>  packetController
    );

    MCNAPI bool
    connect(::Social::GameConnectionInfo const& gameConnection, ::Social::GameConnectionInfo const& backupConnection);

    MCNAPI ::std::shared_ptr<::SignalingServiceSignInJob> createSignalingServiceSigninJobIfNeeded(
        ::std::shared_ptr<::SignalingService>                                        signalingService,
        bool                                                                         useJsonRpc,
        ::Bedrock::Threading::Async<::std::optional<::PlayerMessaging::NetworkID>>&& playerMessagingId
    );

    MCNAPI ::std::pair<::Json::Value, ::Json::Value> getPacketTraces() const;

    MCNAPI void getPingTimeForConnection(
        ::Social::GameConnectionInfo const& connection,
        ::std::function<void(uint)>         pingTimeCallback
    );

    MCNAPI void registerForPrimaryUserOptionChanges(::ClientNetworkSystemOptions const& primaryUserOptions);

    MCNAPI void setupNetworkSummary(
        ::std::function<bool()> isInGame,
        ::std::function<bool()> isSignedIntoSignalingService,
        ::std::function<bool()> isHostingLocalDedicatedServer
    );

    MCNAPI ::std::optional<::NetworkIdentifier> tryGetLocalNetworkId() const;

    MCNAPI ::std::optional<::NetworkIdentifier> tryGetServerId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::NetworkSystem::Dependencies _createConstructionDependencies(
        ::ClientNetworkSystem*                               pThis,
        ::Scheduler&                                         recieveThread,
        ::std::vector<::std::string> const&                  overrideBroadcastAddresses,
        ::NetworkSystemToggles const&                        networkToggles,
        ::NetherNetTransportFactory const&                   transportFactory,
        ::Bedrock::NonOwnerPointer<::AppPlatform>            appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner,
        ::std::unique_ptr<::IPacketSerializationController>  packetController
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
        ::Bedrock::NonOwnerPointer<::AppPlatform>            appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner,
        ::std::unique_ptr<::IPacketSerializationController>  packetController
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Social::GameConnectionInfo const& $getConnectionInfo() const;

    MCNAPI ::std::optional<::std::string> $getNetworkInfoString() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIPSupportInterface();

    MCNAPI static void** $vftableForIGameConnectionInfoProvider();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForConnectionCallbacks();

    MCNAPI static void** $vftableForNetworkEnableDisableListener();
    // NOLINTEND
};
