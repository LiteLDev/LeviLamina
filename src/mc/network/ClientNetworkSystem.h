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
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IPacketSerializationController;
class NetworkDebugManager;
class NetworkIdentifier;
class NetworkSessionOwner;
class NetworkStatistics;
class NetworkSummary;
class PrivateKeyManager;
class Scheduler;
class SignalingService;
class SignalingServiceSignInJob;
struct ClientNetworkSystemOptions;
struct NetworkSystemToggles;
struct RawGameServerToken;
namespace Json { class Value; }
namespace NetherNet { class IIdentityAssertionGenerator; }
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
    virtual ~ClientNetworkSystem() /*override*/ = default;

    virtual ::Social::GameConnectionInfo const& getConnectionInfo() const /*override*/;

    virtual ::std::optional<::std::string> getNetworkInfoString() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ClientNetworkSystem(
        ::Scheduler&                                         receiveThread,
        ::std::vector<::std::string> const&                  overrideBroadcastAddresses,
        ::NetworkSystemToggles const&                        networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager>    networkDebugManager,
        ::Bedrock::NonOwnerPointer<::AppPlatform>            appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner,
        ::std::unique_ptr<::IPacketSerializationController>  packetController
    );

    MCAPI bool _connectLan(::Social::GameConnectionInfo const& primary, ::Social::GameConnectionInfo const& backup);

    MCAPI bool _connectLocal();

    MCAPI bool _connectRemote(
        ::Social::GameConnectionInfo const&                         primary,
        ::Social::GameConnectionInfo const&                         backup,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator> identity
    );

    MCAPI bool connect(
        ::Social::GameConnectionInfo const& primary,
        ::Social::GameConnectionInfo const& backup,
        ::PrivateKeyManager const&          signingKey,
        ::RawGameServerToken                token
    );

    MCAPI ::std::shared_ptr<::SignalingServiceSignInJob> createSignalingServiceSigninJobIfNeeded(
        ::std::shared_ptr<::SignalingService>                                        signalingService,
        ::Bedrock::Threading::Async<::std::optional<::PlayerMessaging::NetworkID>>&& playerMessagingId
    );

    MCAPI ::std::pair<::Json::Value, ::Json::Value> getPacketTraces() const;

    MCAPI void getPingTimeForConnection(
        ::Social::GameConnectionInfo const& connection,
        ::std::function<void(uint)>         pingTimeCallback
    );

    MCAPI ::Bedrock::Threading::Async<::Bedrock::Result<::std::string>>
    probeTransportLayer(::std::string const& host, int port) const;

    MCAPI void registerForPrimaryUserOptionChanges(::ClientNetworkSystemOptions const& primaryUserOptions);

    MCAPI void setupNetworkSummary(
        ::std::function<bool()> isInGame,
        ::std::function<bool()> isSignedIntoSignalingService,
        ::std::function<bool()> isHostingLocalDedicatedServer
    );
#endif

    MCAPI ::std::optional<::NetworkIdentifier> tryGetLocalNetworkId() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
