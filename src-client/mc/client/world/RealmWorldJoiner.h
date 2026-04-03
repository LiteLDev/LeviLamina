#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/world/JoinRealmWorldResult.h"
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/events/IMinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class AsyncTracker;
class IAppPlatform;
class IClientInstance;
class IMinecraftEventing;
class INetworkGameConnector;
class ProgressHandler;
struct IGameServerShutdown;
struct RealmsAPI;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Parties { struct IPartyProvider; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace World { struct RealmsJoinData; }
// clang-format on

namespace World {

class RealmWorldJoiner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                  mClient;
    ::ll::TypedStorage<8, 8, ::INetworkGameConnector&>                            mNetworkGameConnector;
    ::ll::TypedStorage<8, 8, ::IGameServerShutdown&>                              mGameServerShutdown;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                               mMinecraftEventing;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RealmsAPI>>                       mRealmsAPI;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IAppPlatform>>         mAppPlatform;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::World::JoinRealmWorldResult), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mJoinRealmWorldResultPublisher;
    ::ll::TypedStorage<8, 104, ::ui::ProgressScreenNavigation> mProgressScreenNavigation;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>()>>
                                                                        mGetPartyProvider;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::Realms::RealmId)>> mIsRealmJoinable;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AsyncTracker>>         mAsyncTracker;
    ::ll::TypedStorage<1, 1, bool>                                      mJoinRealmWorldInProgress;
    ::ll::TypedStorage<1, 1, bool>                                      mIsEditorMode;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldJoiner& operator=(RealmWorldJoiner const&);
    RealmWorldJoiner(RealmWorldJoiner const&);
    RealmWorldJoiner();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmWorldJoiner(
        ::IClientInstance&                                                       client,
        ::INetworkGameConnector&                                                 networkGameConnector,
        ::IGameServerShutdown&                                                   gameServerShutdown,
        ::IMinecraftEventing&                                                    minecraftEventing,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&             userManager,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                        appPlatform,
        ::std::weak_ptr<::RealmsAPI>                                             realmsAPI,
        ::ui::ProgressScreenNavigation                                           progressScreenNavigation,
        ::std::function<::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>()> getPartyProvider,
        ::std::function<bool(::Realms::RealmId)>&&                               isRealmJoinable
    );

    MCAPI ::World::JoinRealmWorldResult _fetchWorldByRealmId(
        ::Realms::RealmId                         realmId,
        ::IMinecraftEventing::RealmConnectionFlow fromFlow,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>, ::std::unique_ptr<::ProgressHandler>)>
            onRealmFetched,
        ::std::function<void(
            ::IMinecraftEventing::RealmConnectionResult,
            ::std::optional<::Realms::FailureReason>,
            ::std::optional<::World::RealmsJoinData>
        )>  onRealmJoined
    );

    MCAPI ::std::optional<::std::string> _getPartyId();

    MCAPI void _handleFetchedWorldResult(
        ::Realms::GenericStatus                   status,
        ::Realms::World                           world,
        ::IMinecraftEventing::RealmConnectionFlow fromFlow,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>, ::std::unique_ptr<::ProgressHandler>)>
            onRealmFetched,
        ::std::function<void(
            ::IMinecraftEventing::RealmConnectionResult,
            ::std::optional<::Realms::FailureReason>,
            ::std::optional<::World::RealmsJoinData>
        )>  onRealmJoined
    );

    MCAPI void _handleFetchedWorldResultV2(
        ::std::string const&                      realmId,
        ::Realms::GenericStatus                   status,
        ::Realms::World                           world,
        ::IMinecraftEventing::RealmConnectionFlow fromFlow
    );

    MCAPI bool _isUserWorldOwner(::Realms::World const& world) const;

    MCAPI void _joinRealm(
        ::IMinecraftEventing::RealmConnectionFlow fromFlow,
        ::Realms::World&                          world,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>, ::std::unique_ptr<::ProgressHandler>)>
            onRealmFetchedCallback,
        ::std::function<void(
            ::IMinecraftEventing::RealmConnectionResult,
            ::std::optional<::Realms::FailureReason>,
            ::std::optional<::World::RealmsJoinData>
        )>  onRealmJoinedCallback
    );

    MCAPI void _joinRealmConnectionHandler(
        ::IMinecraftEventing::RealmConnectionResult result,
        ::std::optional<::Realms::FailureReason>    failureReason,
        ::std::optional<::World::RealmsJoinData>    realmsJoinData,
        ::std::optional<::std::string>              realmId
    );

    MCAPI void _joinRealmsWorld(
        ::Realms::World                                                  world,
        ::std::function<void(::Social::GameConnectionInfo const&, bool)> successCallback,
        ::std::function<void(::Realms::GenericStatus, ::RealmsAPI::JoinStatus, ::Realms::FailureReason)> failCallback,
        ::std::function<void(int)>                                                                       retryCallback,
        ::IMinecraftEventing::RealmConnectionFlow                        realmConnectionFlow,
        ::std::function<void(::IMinecraftEventing::RealmConnectionFlow)> broadcastConnectionEventRealmsRequestFunction,
        ::std::function<void(::IMinecraftEventing::RealmConnectionFlow, ::Bedrock::Http::StatusCode)>
            broadcastConnectionEventRealmsResponseFunction
    );

    MCAPI bool _shouldShowHardcoreWarning() const;

    MCAPI void joinRealmWorld(
        ::Realms::RealmId                                    realmId,
        ::IMinecraftEventing::RealmConnectionFlow            fromFlow,
        ::std::function<void(::World::JoinRealmWorldResult)> onRealmResult,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>, ::std::unique_ptr<::ProgressHandler>)>
            onRealmFetched,
        ::std::function<void(
            ::IMinecraftEventing::RealmConnectionResult,
            ::std::optional<::Realms::FailureReason>,
            ::std::optional<::World::RealmsJoinData>
        )>  onRealmJoined
    );

    MCAPI void joinRealmWorldV2(::std::string const& realmIdString, ::IMinecraftEventing::RealmConnectionFlow fromFlow);

    MCAPI ~RealmWorldJoiner();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IClientInstance&                                                       client,
        ::INetworkGameConnector&                                                 networkGameConnector,
        ::IGameServerShutdown&                                                   gameServerShutdown,
        ::IMinecraftEventing&                                                    minecraftEventing,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&             userManager,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                        appPlatform,
        ::std::weak_ptr<::RealmsAPI>                                             realmsAPI,
        ::ui::ProgressScreenNavigation                                           progressScreenNavigation,
        ::std::function<::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>()> getPartyProvider,
        ::std::function<bool(::Realms::RealmId)>&&                               isRealmJoinable
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
