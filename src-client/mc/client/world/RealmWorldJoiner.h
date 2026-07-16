#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/client/world/JoinRealmWorldResult.h"
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
class RealmsAPI;
struct IGameServerShutdown;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Parties { class IPartyProvider; }
namespace Realms { struct World; }
namespace Social { class IUserManager; }
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
    ::ll::TypedStorage<8, 64, ::std::function<bool(::Realms::World const&, ::Realms::PlayerRoleActions)>>
                                                                mCanUserDoRealmRoleAction;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AsyncTracker>> mAsyncTracker;
    ::ll::TypedStorage<1, 1, bool>                              mJoinRealmWorldInProgress;
    ::ll::TypedStorage<1, 1, bool>                              mIsEditorMode;
    ::ll::TypedStorage<8, 32, ::std::string>                    mRealmName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>     mRealmXuids;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldJoiner& operator=(RealmWorldJoiner const&);
    RealmWorldJoiner(RealmWorldJoiner const&);
    RealmWorldJoiner();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void joinRealmWorldV2(::std::string const& realmIdString, ::IMinecraftEventing::RealmConnectionFlow fromFlow);

    MCAPI void resetJoinRealmWarningModals();

    MCAPI ~RealmWorldJoiner();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
