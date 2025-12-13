#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/IUserManager.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/common/GameUserType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/identity/IdentityType.h"
#include "mc/platform/MultiplayerServiceObserver.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ILevelListCache;
class IMinecraftGame;
class Options;
struct ControllerIDtoClientMap;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class FileStorageArea; }
namespace Core { class SingleThreadedLock; }
namespace Social { class ProfileImageOptions; }
namespace Social { class User; }
namespace Social { class UserListObserver; }
namespace Social { struct UserCreationData; }
namespace mce { struct Image; }
namespace Social { struct XboxLiveUser; }
// clang-format on

namespace Social {

class UserManager : public ::Social::IUserManager,
                    public ::LevelListCacheObserver,
                    public ::Social::MultiplayerServiceObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkce5ddf;
    ::ll::UntypedStorage<8, 80>  mUnk4ead5c;
    ::ll::UntypedStorage<8, 104> mUnk108a1f;
    ::ll::UntypedStorage<8, 104> mUnk38ae75;
    ::ll::UntypedStorage<4, 4>   mUnk110a6f;
    ::ll::UntypedStorage<8, 56>  mUnkf7b698;
    ::ll::UntypedStorage<4, 4>   mUnk75ca2d;
    ::ll::UntypedStorage<4, 4>   mUnkfc95bd;
    ::ll::UntypedStorage<1, 1>   mUnk231524;
    ::ll::UntypedStorage<8, 64>  mUnkb91d4c;
    ::ll::UntypedStorage<8, 64>  mUnk8857ff;
    ::ll::UntypedStorage<4, 4>   mUnkcd597a;
    ::ll::UntypedStorage<8, 32>  mUnkbb4da2;
#ifdef LL_PLAT_C
    ::ll::UntypedStorage<4, 4> mUnkecd3a6;
#endif
    ::ll::UntypedStorage<8, 16>  mUnk89970d;
    ::ll::UntypedStorage<8, 8>   mUnk89c3de;
    ::ll::UntypedStorage<8, 8>   mUnk886a7a;
    ::ll::UntypedStorage<8, 8>   mUnk210f01;
    ::ll::UntypedStorage<8, 64>  mUnk63325d;
    ::ll::UntypedStorage<8, 64>  mUnk5805c3;
    ::ll::UntypedStorage<8, 128> mUnk18fdde;
    ::ll::UntypedStorage<8, 24>  mUnke2a1f9;
    ::ll::UntypedStorage<8, 24>  mUnk8ad5f5;
    ::ll::UntypedStorage<8, 24>  mUnkfea690;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~UserManager() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~UserManager() /*override*/;
#endif

    virtual void removeUser(int id, bool restartIfPrimary) /*override*/;

    virtual void removeClient(::std::shared_ptr<::IClientInstance> const& ci) /*override*/;

    virtual ::std::shared_ptr<::Social::User>
    setUserClient(int id, ::std::shared_ptr<::IClientInstance> const& clientPtr) /*override*/;

    virtual bool userHasClient(int id) /*override*/;

    virtual ::std::string_view getPlayFabTitleId() const /*override*/;

    virtual ::std::shared_ptr<::Social::User> getPrimaryUser() const /*override*/;

    virtual ::std::shared_ptr<::Social::User> getUserFromUserId(uint id) /*override*/;

    virtual ::std::shared_ptr<::Social::User const> const getUserFromUserId(uint id) const /*override*/;

    virtual ::std::shared_ptr<::Social::User> getUserFromControllerId(int id) const /*override*/;

    virtual ::std::shared_ptr<::Social::User> getUser(::IClientInstance const& client) const /*override*/;

    virtual ::std::shared_ptr<::Social::User> getUser(::Social::XboxLiveUser const& liveUser) /*override*/;

    virtual ::GameUserType getUserTypeFromUserId(uint id) const /*override*/;

    virtual bool isChatAllowedWhenBlockedByPlatform() const /*override*/;

    virtual ::std::vector<::std::shared_ptr<::Social::User>> const& getUsers() const /*override*/;

    virtual bool isUserSignedIn(uint id) /*override*/;

    virtual bool isPrimaryUserInitialSignInInProgress() const /*override*/;

    virtual ::Bedrock::Threading::Async<void> createPrimaryUserAsync(::std::shared_ptr<::Options> options) /*override*/;

    virtual void initPrimaryIdentity() /*override*/;

    virtual bool isSecondaryUserCreationAllowed(int id) const /*override*/;

    virtual void setSecondaryUserCreationAllowed(int id) /*override*/;

    virtual ::Bedrock::Threading::Async<void> addSecondaryUserAsync(
        int                                                           id,
        ::std::shared_ptr<::Options>                                  options,
        ::std::function<void(::Social::UserPlatformConnectionResult)> callback
    ) /*override*/;

    virtual void tick(::IMinecraftGame& minecraftGame) /*override*/;

    virtual void updateMapping(bool onScreenAcceptingAllControllerInput, bool inGame) /*override*/;

    virtual bool isPrimaryUserReady() const /*override*/;

    virtual bool canAccessPlayScreen() /*override*/;

    virtual bool needToShowPlatformStoreConnectConfirmationScreen() /*override*/;

    virtual bool canAccessSettingsScreen() /*override*/;

    virtual bool canAccessAchievementsScreen() /*override*/;

    virtual bool canAccessSkinScreen() /*override*/;

    virtual bool canAccessStoreScreen() const /*override*/;

    virtual bool canAccessRealmsPendingInvitesScreen() /*override*/;

    virtual bool canHandleInvites() /*override*/;

    virtual bool needPlatformConnectionBeforeXBLSignIn() /*override*/;

    virtual bool needPlatformConnectionForMultiplayer() const /*override*/;

    virtual bool needPlatformConnectionForSplitScreenMultiplayer() const /*override*/;

    virtual bool needPlatformConnectionBeforeServerSearch() const /*override*/;

    virtual bool canChangePrimaryUserFromStartMenuScreen() const /*override*/;

    virtual bool hasPlatformPremiumAccess() const;

    virtual bool hasPlatformIcons() const /*override*/;

    virtual bool hasPlatformProfileCards() const /*override*/;

    virtual void getLinkedXuids(
        ::std::function<void(::std::string, ::std::string)> callback,
        ::std::vector<::std::string> const&                 platformIds
    ) const /*override*/;

    virtual void getLinkedPlatformIds(
        ::std::function<void(::std::string, ::std::string)> callback,
        ::std::vector<::std::string> const&                 xuids
    ) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> retrieveCIDToClientMap() /*override*/;

    virtual int getClientCID(::IClientInstance const& client) const /*override*/;

    virtual void registerSignOutListener(
        ::Core::CallbackListeners<int, ::Social::SignInResult>::Listener const& listener
    ) /*override*/;

    virtual void registerSignInListener(
        ::Core::CallbackListeners<int, ::Social::SignInResult>::Listener const& listener
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription registerIdentitySignInCallback(
        ::Social::IdentityType                              idType,
        ::std::function<void(uint, ::Social::IdentityType)> listener
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription registerIdentitySignOutCallback(
        ::Social::IdentityType                              idType,
        ::std::function<void(uint, ::Social::IdentityType)> listener
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription registerProfileImageChangedCallback(
        ::std::function<void(::Social::ProfileImageOptions, ::std::shared_ptr<::mce::Image>)> listener
    ) /*override*/;

    virtual bool needGamepadDisconnectScreen(int controllerId) /*override*/;

    virtual void onAppResumed() /*override*/;

    virtual void onAppSuspended() /*override*/;

    virtual void onAppFocusLost() /*override*/;

    virtual void forceCloudSaveOnWorld(::std::string const& levelId) /*override*/;

    virtual bool needsAsyncUserSelection(int, bool) /*override*/;

    virtual void getAsyncUserSelection(::std::function<void(int)>, int) /*override*/;

    virtual void getAsyncUserSelectionForNewPrimaryUser(int id, bool restrictToControllerIdChange) /*override*/;

    virtual ::Core::Subject<::Social::UserListObserver, ::Core::SingleThreadedLock>& getUserListSubject() /*override*/;

    virtual bool controllerChanged(int&, int&) /*override*/;

    virtual void registerLevelLocationObserver(::ILevelListCache& levelListCache) /*override*/;

    virtual ::Social::MultiplayerServiceObserver& getMultiplayerServiceObserver() /*override*/;

    virtual ::Social::MultiplayerServiceIdentifier getPlatformMultiplayerServiceIdentifier() const /*override*/;

    virtual bool willSyncUserDataStorage() const /*override*/;

    virtual void onLevelAdded(::std::string const& levelId) /*override*/;

    virtual void onLevelUpdated(::std::string const& levelId) /*override*/;

    virtual void onLevelDeleted(::std::string const& levelId) /*override*/;

    virtual void _onAppResumed();

    virtual void _onAppSuspended();

    virtual ::std::shared_ptr<::Social::UserCreationData>
    _prepareUserCreationData(::GameUserType userType, int controllerId, ::std::shared_ptr<::Options> options, uint id);

    virtual void _onUserAdded(::std::shared_ptr<::Social::User> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C UserManager();

    MCNAPI_C void _addUser(::std::shared_ptr<::Social::User> user);

    MCNAPI_C void _doAutoSignInIfPossible(::IMinecraftGame& minecraftGame);

    MCNAPI_C void _removeUserLoop(int id);

    MCNAPI_C void _signInFailed(::std::shared_ptr<::Social::User> user, ::std::error_code failure);

    MCNAPI_C void
    notifyUserStorageAreaChanged(::Social::User* _user, ::std::shared_ptr<::Core::FileStorageArea> oldStorageArea);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
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
    MCNAPI void $removeUser(int id, bool restartIfPrimary);

    MCNAPI void $removeClient(::std::shared_ptr<::IClientInstance> const& ci);

    MCNAPI ::std::shared_ptr<::Social::User>
    $setUserClient(int id, ::std::shared_ptr<::IClientInstance> const& clientPtr);

    MCNAPI bool $userHasClient(int id);

    MCNAPI ::std::string_view $getPlayFabTitleId() const;

    MCNAPI ::std::shared_ptr<::Social::User> $getPrimaryUser() const;

    MCNAPI ::std::shared_ptr<::Social::User> $getUserFromUserId(uint id);

    MCNAPI ::std::shared_ptr<::Social::User const> const $getUserFromUserId(uint id) const;

    MCNAPI ::std::shared_ptr<::Social::User> $getUserFromControllerId(int id) const;

    MCNAPI ::std::shared_ptr<::Social::User> $getUser(::IClientInstance const& client) const;

    MCNAPI ::std::shared_ptr<::Social::User> $getUser(::Social::XboxLiveUser const& liveUser);

    MCNAPI ::GameUserType $getUserTypeFromUserId(uint id) const;

    MCNAPI bool $isChatAllowedWhenBlockedByPlatform() const;

    MCNAPI ::std::vector<::std::shared_ptr<::Social::User>> const& $getUsers() const;

    MCNAPI bool $isUserSignedIn(uint id);

    MCNAPI bool $isPrimaryUserInitialSignInInProgress() const;

    MCNAPI ::Bedrock::Threading::Async<void> $createPrimaryUserAsync(::std::shared_ptr<::Options> options);

    MCNAPI void $initPrimaryIdentity();

    MCNAPI bool $isSecondaryUserCreationAllowed(int id) const;

    MCNAPI void $setSecondaryUserCreationAllowed(int id);

    MCNAPI ::Bedrock::Threading::Async<void> $addSecondaryUserAsync(
        int                                                           id,
        ::std::shared_ptr<::Options>                                  options,
        ::std::function<void(::Social::UserPlatformConnectionResult)> callback
    );

    MCNAPI void $tick(::IMinecraftGame& minecraftGame);

    MCNAPI void $updateMapping(bool onScreenAcceptingAllControllerInput, bool inGame);

    MCNAPI bool $isPrimaryUserReady() const;

    MCNAPI bool $canAccessPlayScreen();

    MCNAPI bool $needToShowPlatformStoreConnectConfirmationScreen();

    MCNAPI bool $canAccessSettingsScreen();

    MCNAPI bool $canAccessAchievementsScreen();

    MCNAPI bool $canAccessSkinScreen();

    MCNAPI bool $canAccessStoreScreen() const;

    MCNAPI bool $canAccessRealmsPendingInvitesScreen();

    MCNAPI bool $canHandleInvites();

    MCNAPI bool $needPlatformConnectionBeforeXBLSignIn();

    MCNAPI bool $needPlatformConnectionForMultiplayer() const;

    MCNAPI bool $needPlatformConnectionForSplitScreenMultiplayer() const;

    MCNAPI bool $needPlatformConnectionBeforeServerSearch() const;

    MCNAPI bool $canChangePrimaryUserFromStartMenuScreen() const;

    MCNAPI bool $hasPlatformPremiumAccess() const;

    MCNAPI bool $hasPlatformIcons() const;

    MCNAPI bool $hasPlatformProfileCards() const;

    MCNAPI void $getLinkedXuids(
        ::std::function<void(::std::string, ::std::string)> callback,
        ::std::vector<::std::string> const&                 platformIds
    ) const;

    MCNAPI void $getLinkedPlatformIds(
        ::std::function<void(::std::string, ::std::string)> callback,
        ::std::vector<::std::string> const&                 xuids
    ) const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> $retrieveCIDToClientMap();

    MCNAPI int $getClientCID(::IClientInstance const& client) const;

    MCNAPI void
    $registerSignOutListener(::Core::CallbackListeners<int, ::Social::SignInResult>::Listener const& listener);

    MCNAPI void
    $registerSignInListener(::Core::CallbackListeners<int, ::Social::SignInResult>::Listener const& listener);

    MCNAPI ::Bedrock::PubSub::Subscription $registerIdentitySignInCallback(
        ::Social::IdentityType                              idType,
        ::std::function<void(uint, ::Social::IdentityType)> listener
    );

    MCNAPI ::Bedrock::PubSub::Subscription $registerIdentitySignOutCallback(
        ::Social::IdentityType                              idType,
        ::std::function<void(uint, ::Social::IdentityType)> listener
    );

    MCNAPI ::Bedrock::PubSub::Subscription $registerProfileImageChangedCallback(
        ::std::function<void(::Social::ProfileImageOptions, ::std::shared_ptr<::mce::Image>)> listener
    );

    MCNAPI bool $needGamepadDisconnectScreen(int controllerId);

    MCNAPI void $onAppResumed();

    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppFocusLost();

    MCNAPI void $forceCloudSaveOnWorld(::std::string const& levelId);

    MCNAPI bool $needsAsyncUserSelection(int, bool);

    MCNAPI void $getAsyncUserSelection(::std::function<void(int)>, int);

    MCNAPI void $getAsyncUserSelectionForNewPrimaryUser(int id, bool restrictToControllerIdChange);

    MCNAPI ::Core::Subject<::Social::UserListObserver, ::Core::SingleThreadedLock>& $getUserListSubject();

    MCNAPI bool $controllerChanged(int&, int&);

    MCNAPI void $registerLevelLocationObserver(::ILevelListCache& levelListCache);

    MCNAPI ::Social::MultiplayerServiceObserver& $getMultiplayerServiceObserver();

    MCNAPI ::Social::MultiplayerServiceIdentifier $getPlatformMultiplayerServiceIdentifier() const;

    MCNAPI bool $willSyncUserDataStorage() const;

    MCNAPI void $onLevelAdded(::std::string const& levelId);

    MCNAPI void $onLevelUpdated(::std::string const& levelId);

    MCNAPI void $onLevelDeleted(::std::string const& levelId);

    MCNAPI void $_onAppResumed();

    MCNAPI void $_onAppSuspended();

    MCNAPI ::std::shared_ptr<::Social::UserCreationData>
    $_prepareUserCreationData(::GameUserType userType, int controllerId, ::std::shared_ptr<::Options> options, uint id);

    MCNAPI void $_onUserAdded(::std::shared_ptr<::Social::User> const&);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIUserManager();

    MCNAPI static void** $vftableForLevelListCacheObserver();

    MCNAPI static void** $vftableForMultiplayerServiceObserver();
    // NOLINTEND
};

} // namespace Social
