#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/PlayFabEnvironment.h"
#include "mc/client/social/IUserManager.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/common/GameUserType.h"
#include "mc/deps/core/threading/IAsyncResult.h"
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
namespace Core { class SingleThreadedLock; }
namespace Social { class ProfileImageOptions; }
namespace Social { class User; }
namespace Social { class UserListObserver; }
namespace Social { class XboxLiveUser; }
namespace Social { struct UserCreationData; }
namespace mce { struct Image; }
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
    ::ll::UntypedStorage<8, 80>  mUnke2ad39;
    ::ll::UntypedStorage<8, 64>  mUnkb91d4c;
    ::ll::UntypedStorage<8, 64>  mUnk8857ff;
    ::ll::UntypedStorage<4, 4>   mUnkcd597a;
    ::ll::UntypedStorage<8, 32>  mUnkbb4da2;
    ::ll::UntypedStorage<8, 16>  mUnk89970d;
    ::ll::UntypedStorage<8, 8>   mUnk89c3de;
    ::ll::UntypedStorage<8, 8>   mUnk210f01;
    ::ll::UntypedStorage<8, 64>  mUnkcbca67;
    ::ll::UntypedStorage<8, 64>  mUnk1ef83f;
    ::ll::UntypedStorage<8, 128> mUnk178e67;
    ::ll::UntypedStorage<8, 24>  mUnke2a1f9;
    ::ll::UntypedStorage<8, 24>  mUnk8ad5f5;
    ::ll::UntypedStorage<8, 24>  mUnkfea690;
    // NOLINTEND

public:
    // prevent constructor by default
    UserManager& operator=(UserManager const&);
    UserManager(UserManager const&);
    UserManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UserManager() /*override*/ = default;

    // vIndex: 34
    virtual void removeUser(int, bool) /*override*/;

    // vIndex: 35
    virtual void removeClient(::std::shared_ptr<::IClientInstance> const&) /*override*/;

    // vIndex: 36
    virtual void setUserClient(int, ::std::shared_ptr<::IClientInstance> const&) /*override*/;

    // vIndex: 37
    virtual bool userHasClient(int) /*override*/;

    // vIndex: 38
    virtual ::Social::PlayFabEnvironment getEnvironment() const /*override*/;

    // vIndex: 39
    virtual ::std::string_view getPlayFabTitleId() const /*override*/;

    // vIndex: 3
    virtual ::std::shared_ptr<::Social::User> getPrimaryUser() const /*override*/;

    // vIndex: 54
    virtual ::std::shared_ptr<::Social::User> getUserFromUserId(uint) /*override*/;

    // vIndex: 53
    virtual ::std::shared_ptr<::Social::User const> const getUserFromUserId(uint) const /*override*/;

    // vIndex: 52
    virtual ::std::shared_ptr<::Social::User> getUserFromControllerId(int) const /*override*/;

    // vIndex: 51
    virtual ::std::shared_ptr<::Social::User> getUser(::IClientInstance const&) const /*override*/;

    // vIndex: 50
    virtual ::std::shared_ptr<::Social::User> getUser(::Social::XboxLiveUser const&) /*override*/;

    // vIndex: 55
    virtual ::GameUserType getUserTypeFromUserId(uint) const /*override*/;

    // vIndex: 56
    virtual bool isChatAllowedWhenBlockedByPlatform() const /*override*/;

    // vIndex: 57
    virtual ::std::vector<::std::shared_ptr<::Social::User>> const& getUsers() const /*override*/;

    // vIndex: 58
    virtual bool isUserSignedIn(uint) /*override*/;

    // vIndex: 59
    virtual bool isPrimaryUserInitialSignInInProgress() const /*override*/;

    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
        createPrimaryUserAsync(::std::shared_ptr<::Options>) /*override*/;

    // vIndex: 2
    virtual void initPrimaryIdentity() /*override*/;

    // vIndex: 4
    virtual bool isSecondaryUserCreationAllowed(int) const /*override*/;

    // vIndex: 5
    virtual void setSecondaryUserCreationAllowed(int) /*override*/;

    // vIndex: 6
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    addSecondaryUserAsync(int, ::std::shared_ptr<::Options>, ::std::function<void(::Social::UserPlatformConnectionResult)>) /*override*/
        ;

    // vIndex: 48
    virtual void tick(::IMinecraftGame&) /*override*/;

    // vIndex: 49
    virtual void updateMapping(bool, bool) /*override*/;

    // vIndex: 13
    virtual bool isPrimaryUserReady() /*override*/;

    // vIndex: 14
    virtual bool canAccessPlayScreen() /*override*/;

    // vIndex: 15
    virtual bool needToShowPlatformStoreConnectConfirmationScreen() /*override*/;

    // vIndex: 16
    virtual bool canAccessSettingsScreen() /*override*/;

    // vIndex: 17
    virtual bool canAccessAchievementsScreen() /*override*/;

    // vIndex: 18
    virtual bool canAccessSkinScreen() /*override*/;

    // vIndex: 19
    virtual bool canAccessStoreScreen() /*override*/;

    // vIndex: 20
    virtual bool canAccessRealmsPendingInvitesScreen() /*override*/;

    // vIndex: 21
    virtual bool canHandleInvites() /*override*/;

    // vIndex: 22
    virtual bool needPlatformConnectionBeforeXBLSignIn() /*override*/;

    // vIndex: 23
    virtual bool needPlatformConnectionForMultiplayer() const /*override*/;

    // vIndex: 24
    virtual bool needPlatformConnectionForSplitScreenMultiplayer() const /*override*/;

    // vIndex: 25
    virtual bool needPlatformConnectionBeforeServerSearch() const /*override*/;

    // vIndex: 8
    virtual bool canChangePrimaryUserFromStartMenuScreen() const /*override*/;

    // vIndex: 64
    virtual bool hasPlatformPremiumAccess() const;

    // vIndex: 27
    virtual bool hasPlatformIcons() const /*override*/;

    // vIndex: 28
    virtual bool hasPlatformProfileCards() const /*override*/;

    // vIndex: 29
    virtual void
    getLinkedXuids(::std::function<void(::std::string, ::std::string)>, ::std::vector<::std::string> const&) const
        /*override*/;

    // vIndex: 30
    virtual void
    getLinkedPlatformIds(::std::function<void(::std::string, ::std::string)>, ::std::vector<::std::string> const&) const
        /*override*/;

    // vIndex: 40
    virtual ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> retrieveCIDToClientMap() /*override*/;

    // vIndex: 41
    virtual int getClientCID(::IClientInstance const&) const /*override*/;

    // vIndex: 42
    virtual void
    registerSignOutListener(::Core::CallbackListeners<int, ::Social::SignInResult>::Listener const&) /*override*/;

    // vIndex: 43
    virtual void
    registerSignInListener(::Core::CallbackListeners<int, ::Social::SignInResult>::Listener const&) /*override*/;

    // vIndex: 44
    virtual ::Bedrock::PubSub::Subscription
        registerIdentitySignInCallback(::Social::IdentityType, ::std::function<void(uint, ::Social::IdentityType)>) /*override*/
        ;

    // vIndex: 45
    virtual ::Bedrock::PubSub::Subscription
        registerIdentitySignOutCallback(::Social::IdentityType, ::std::function<void(uint, ::Social::IdentityType)>) /*override*/
        ;

    // vIndex: 46
    virtual ::Bedrock::PubSub::Subscription
        registerProfileImageChangedCallback(::std::function<
                                            void(::Social::ProfileImageOptions, ::std::shared_ptr<::mce::Image>)>) /*override*/
        ;

    // vIndex: 47
    virtual bool needGamepadDisconnectScreen(int) /*override*/;

    // vIndex: 31
    virtual void onAppResumed() /*override*/;

    // vIndex: 32
    virtual void onAppSuspended() /*override*/;

    // vIndex: 33
    virtual void onAppFocusLost() /*override*/;

    // vIndex: 11
    virtual void forceCloudSaveOnWorld(::std::string const&) /*override*/;

    // vIndex: 26
    virtual bool needsAsyncUserSelection(int, bool) /*override*/;

    // vIndex: 9
    virtual void getAsyncUserSelection(::std::function<void(int)>, int) /*override*/;

    // vIndex: 10
    virtual void getAsyncUserSelectionForNewPrimaryUser(int, bool) /*override*/;

    // vIndex: 12
    virtual ::Core::Subject<::Social::UserListObserver, ::Core::SingleThreadedLock>& getUserListSubject() /*override*/;

    // vIndex: 7
    virtual bool controllerChanged(int&, int&) /*override*/;

    // vIndex: 60
    virtual void registerLevelLocationObserver(::ILevelListCache&) /*override*/;

    // vIndex: 61
    virtual ::Social::MultiplayerServiceObserver& getMultiplayerServiceObserver() /*override*/;

    // vIndex: 62
    virtual ::Social::MultiplayerServiceIdentifier getPlatformMultiplayerServiceIdentifier() const /*override*/;

    // vIndex: 63
    virtual bool willSyncUserDataStorage() const /*override*/;

    // vIndex: 2
    virtual void onLevelAdded(::std::string const&) /*override*/;

    // vIndex: 3
    virtual void onLevelUpdated(::std::string const&) /*override*/;

    // vIndex: 4
    virtual void onLevelDeleted(::std::string const&) /*override*/;

    // vIndex: 65
    virtual void _onAppResumed();

    // vIndex: 66
    virtual void _onAppSuspended();

    // vIndex: 67
    virtual ::std::shared_ptr<::Social::UserCreationData>
    _prepareUserCreationData(::GameUserType, int, ::std::shared_ptr<::Options>, uint);

    // vIndex: 68
    virtual void _onUserAdded(::std::shared_ptr<::Social::User> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Social
