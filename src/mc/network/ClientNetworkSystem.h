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
class AppPlatform;
class IPacketSerializationController;
class NetherNetTransportFactory;
class NetworkDebugManager;
class NetworkIdentifier;
class NetworkSessionOwner;
class NetworkStatistics;
class NetworkSummary;
class Scheduler;
class SignalingService;
class SignalingServiceSignInJob;
struct ClientNetworkSystemOptions;
struct NetworkSystemToggles;
namespace Json { class Value; }
namespace NetherNet { struct NetworkID; }
namespace PlayerMessaging { struct NetworkID; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class ClientNetworkSystem : public ::Social::IGameConnectionInfoProvider,
                            public ::Bedrock::EnableNonOwnerReferences,
                            public ::NetworkSystem {
public:
    // ClientNetworkSystem inner types define
    using DependencyFactory = ::brstd::function_ref<::NetworkSystem::Dependencies()>;

    using StatisticsFactory = ::brstd::function_ref<::std::unique_ptr<::NetworkStatistics>()>;

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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ClientNetworkSystem();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ClientNetworkSystem() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ClientNetworkSystem() /*override*/;
#endif

    virtual ::Social::GameConnectionInfo const& getConnectionInfo() const /*override*/;

    virtual ::std::optional<::std::string> getNetworkInfoString() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
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
        ::Bedrock::Threading::Async<::std::optional<::PlayerMessaging::NetworkID>>&& playerMessagingId
    );

    MCNAPI ::NetherNet::NetworkID getConnectorNetherNetId() const;

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
#endif

    MCNAPI ::std::optional<::NetworkIdentifier> tryGetLocalNetworkId() const;

    MCNAPI ::std::optional<::NetworkIdentifier> tryGetServerId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
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
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Scheduler&                                         receiveThread,
        ::std::vector<::std::string> const&                  overrideBroadcastAddresses,
        ::NetworkSystemToggles const&                        networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager>    networkDebugManager,
        ::Bedrock::NonOwnerPointer<::AppPlatform>            appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner,
        ::std::unique_ptr<::IPacketSerializationController>  packetController
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Social::GameConnectionInfo const& $getConnectionInfo() const;

    MCNAPI ::std::optional<::std::string> $getNetworkInfoString() const;
#endif


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
