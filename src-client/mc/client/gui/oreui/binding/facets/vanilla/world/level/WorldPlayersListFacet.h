#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class IAppPlatform;
class LocalPlayer;
class MultiPlayerLevel;
class PlayerAbilitiesManager;
struct ActorUniqueID;
struct LocalPlayerChangedConnector;
struct TrialManager;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct SocialPlayer; }
namespace OreUI { struct WorldPlayerInfoBindings; }
namespace Parties { struct IPartyProvider; }
namespace Social { class IUserManager; }
namespace Social { struct FriendData; }
namespace Social { struct FriendList; }
namespace Social { struct MultiplayerServiceManager; }
namespace Social { struct PlayerProfile; }
namespace Social { struct ProfileSystem; }
namespace Social { struct User; }
namespace World { class WorldPlayerListTracker; }
namespace mce { class UUID; }
// clang-format on

namespace OreUI {

class WorldPlayersListFacet : public ::OreUI::FacetBase<::OreUI::WorldPlayersListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mLocalPlayerSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mCachedPlayerPermissionsLevelChangedPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mPlayerAbilitiesSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mWorldPlayerListChangedSubscription;
    ::ll::TypedStorage<8, 64, ::std::function<::LocalPlayer*()>>          mGetCurrentLocalPlayer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::User>>          mLocalUser;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ProfileSystem>> mProfileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IAppPlatform const>>           mAppPlatform;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>>      mUserManager;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                                    mIsInGame;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerAbilitiesManager>>       mPlayerAbilitiesManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>>
                                                                                     mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>                       mWorldPlayerListTracker;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::FriendList>>               mFriendList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mPartySubscription;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>> mPartyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::TrialManager>>         mTrialManager;
    ::ll::TypedStorage<8, 64, ::std::function<::MultiPlayerLevel*()>>                mGetCurrentLevel;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mLocalPlayerID;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::WorldPlayerInfoBindings>>       mPlayerList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::WorldPlayerInfoBindings>>       mPrevPlayerList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                  mPlayersInMyWorld;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                  mPrevPlayersInMyWorld;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsLocalPlayerHosting;
    ::ll::TypedStorage<1, 1, bool>                                                   mLocalPlayerLoaded;
    ::ll::TypedStorage<1, 1, bool>                                                   mPlayerListChanged;
    ::ll::TypedStorage<1, 1, bool>                                                   mPlayersInMyWorldChanged;
    ::ll::TypedStorage<1, 1, bool>                                                   mImagesChanged;
    ::ll::TypedStorage<1, 1, bool>                                                   mPartyChanged;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsInRealm;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPlayersListFacet& operator=(WorldPlayersListFacet const&);
    WorldPlayersListFacet(WorldPlayersListFacet const&);
    WorldPlayersListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldPlayersListFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldPlayersListFacet(
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                  appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>              userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>         resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> multiplayerServiceManager,
        ::LocalPlayerChangedConnector const&                               localPlayerChangedConnector,
        ::std::shared_ptr<::Social::User>                                  localUser,
        ::World::WorldPlayerListTracker&                                   worldPlayerListTracker,
        ::std::shared_ptr<::Social::ProfileSystem>                         profileSystem,
        ::std::function<::LocalPlayer*()>                                  getCurrentLocalPlayer,
        ::std::function<bool()>                                            isInGame,
        ::std::shared_ptr<::Social::FriendList>                            friendList,
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>              partyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::TrialManager>                      trialManager,
        ::std::function<::MultiPlayerLevel*()>                             getCurrentLevel
    );

    MCAPI void _addLocalPlayer();

    MCAPI void _addPlayer(::mce::UUID const& uuid);

    MCAPI void _clearResources();

    MCAPI ::std::optional<::Social::FriendData>
    _getFriendData(::std::string const& xuid, ::std::string const& platformId) const;

    MCAPI void _initResources();

    MCAPI bool _isPlatformInviteEnabled() const;

    MCAPI void _refreshPlayers();

    MCAPI bool _shouldShowThirdPartyDisconnected() const;

    MCAPI void _updatePlayerInfo(::Social::PlayerProfile const& playerProfile);

    MCAPI void _updatePlayerPermissionLevel(
        ::ActorUniqueID const&                   playerId,
        ::std::optional<::PlayerPermissionLevel> playerPermissionLevel
    );

    MCAPI bool getEnableInviteToPlayButton() const;

    MCFOLD ::std::string const& getLocalPlayerID() const;

    MCFOLD ::std::vector<::OreUI::WorldPlayerInfoBindings> const& getPlayerList() const;

    MCFOLD ::std::vector<::OreUI::SocialPlayer> const& getPlayersInMyWorld() const;

    MCAPI bool isInRealm() const;

    MCFOLD bool isLocalPlayerHosting() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                  appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>              userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>         resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> multiplayerServiceManager,
        ::LocalPlayerChangedConnector const&                               localPlayerChangedConnector,
        ::std::shared_ptr<::Social::User>                                  localUser,
        ::World::WorldPlayerListTracker&                                   worldPlayerListTracker,
        ::std::shared_ptr<::Social::ProfileSystem>                         profileSystem,
        ::std::function<::LocalPlayer*()>                                  getCurrentLocalPlayer,
        ::std::function<bool()>                                            isInGame,
        ::std::shared_ptr<::Social::FriendList>                            friendList,
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>              partyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::TrialManager>                      trialManager,
        ::std::function<::MultiPlayerLevel*()>                             getCurrentLevel
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
