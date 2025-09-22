#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/PlayFabEnvironment.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/common/GameUserType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/identity/IdentityType.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ILevelListCache;
class IMinecraftGame;
class Options;
struct ControllerIDtoClientMap;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class SingleThreadedLock; }
namespace Social { class MultiplayerServiceObserver; }
namespace Social { class ProfileImageOptions; }
namespace Social { class User; }
namespace Social { class UserListObserver; }
namespace Social { class XboxLiveUser; }
namespace mce { struct Image; }
// clang-format on

namespace Social {

class IUserManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IUserManager() /*override*/ = default;

    // vIndex: 1
    virtual ::Bedrock::Threading::Async<void> createPrimaryUserAsync(::std::shared_ptr<::Options>) = 0;

    // vIndex: 2
    virtual void initPrimaryIdentity() = 0;

    // vIndex: 3
    virtual ::std::shared_ptr<::Social::User> getPrimaryUser() const = 0;

    // vIndex: 4
    virtual bool isSecondaryUserCreationAllowed(int) const = 0;

    // vIndex: 5
    virtual void setSecondaryUserCreationAllowed(int) = 0;

    // vIndex: 6
    virtual ::Bedrock::Threading::Async<void> addSecondaryUserAsync(
        int,
        ::std::shared_ptr<::Options>,
        ::std::function<void(::Social::UserPlatformConnectionResult)>
    ) = 0;

    // vIndex: 7
    virtual bool controllerChanged(int&, int&) = 0;

    // vIndex: 8
    virtual bool canChangePrimaryUserFromStartMenuScreen() const = 0;

    // vIndex: 9
    virtual void getAsyncUserSelection(::std::function<void(int)>, int) = 0;

    // vIndex: 10
    virtual void getAsyncUserSelectionForNewPrimaryUser(int, bool) = 0;

    // vIndex: 11
    virtual void forceCloudSaveOnWorld(::std::string const&) = 0;

    // vIndex: 12
    virtual ::Core::Subject<::Social::UserListObserver, ::Core::SingleThreadedLock>& getUserListSubject() = 0;

    // vIndex: 13
    virtual bool isPrimaryUserReady() const = 0;

    // vIndex: 14
    virtual bool canAccessPlayScreen() = 0;

    // vIndex: 15
    virtual bool needToShowPlatformStoreConnectConfirmationScreen() = 0;

    // vIndex: 16
    virtual bool canAccessSettingsScreen() = 0;

    // vIndex: 17
    virtual bool canAccessAchievementsScreen() = 0;

    // vIndex: 18
    virtual bool canAccessSkinScreen() = 0;

    // vIndex: 19
    virtual bool canAccessStoreScreen() const = 0;

    // vIndex: 20
    virtual bool canAccessRealmsPendingInvitesScreen() = 0;

    // vIndex: 21
    virtual bool canHandleInvites() = 0;

    // vIndex: 22
    virtual bool needPlatformConnectionBeforeXBLSignIn() = 0;

    // vIndex: 23
    virtual bool needPlatformConnectionForMultiplayer() const = 0;

    // vIndex: 24
    virtual bool needPlatformConnectionForSplitScreenMultiplayer() const = 0;

    // vIndex: 25
    virtual bool needPlatformConnectionBeforeServerSearch() const = 0;

    // vIndex: 26
    virtual bool needsAsyncUserSelection(int, bool) = 0;

    // vIndex: 27
    virtual bool hasPlatformIcons() const = 0;

    // vIndex: 28
    virtual bool hasPlatformProfileCards() const = 0;

    // vIndex: 29
    virtual void
    getLinkedXuids(::std::function<void(::std::string, ::std::string)>, ::std::vector<::std::string> const&) const = 0;

    // vIndex: 30
    virtual void getLinkedPlatformIds(
        ::std::function<void(::std::string, ::std::string)>,
        ::std::vector<::std::string> const&
    ) const = 0;

    // vIndex: 31
    virtual void onAppResumed() = 0;

    // vIndex: 32
    virtual void onAppSuspended() = 0;

    // vIndex: 33
    virtual void onAppFocusLost() = 0;

    // vIndex: 34
    virtual void removeUser(int, bool) = 0;

    // vIndex: 35
    virtual void removeClient(::std::shared_ptr<::IClientInstance> const&) = 0;

    // vIndex: 36
    virtual void setUserClient(int, ::std::shared_ptr<::IClientInstance> const&) = 0;

    // vIndex: 37
    virtual bool userHasClient(int) = 0;

    // vIndex: 38
    virtual ::Social::PlayFabEnvironment getEnvironment() const = 0;

    // vIndex: 39
    virtual ::std::string_view getPlayFabTitleId() const = 0;

    // vIndex: 40
    virtual ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> retrieveCIDToClientMap() = 0;

    // vIndex: 41
    virtual int getClientCID(::IClientInstance const&) const = 0;

    // vIndex: 42
    virtual void registerSignOutListener(::Core::CallbackListeners<int, ::Social::SignInResult>::Listener const&) = 0;

    // vIndex: 43
    virtual void registerSignInListener(::Core::CallbackListeners<int, ::Social::SignInResult>::Listener const&) = 0;

    // vIndex: 44
    virtual ::Bedrock::PubSub::Subscription
        registerIdentitySignInCallback(::Social::IdentityType, ::std::function<void(uint, ::Social::IdentityType)>) = 0;

    // vIndex: 45
    virtual ::Bedrock::PubSub::Subscription registerIdentitySignOutCallback(
        ::Social::IdentityType,
        ::std::function<void(uint, ::Social::IdentityType)>
    ) = 0;

    // vIndex: 46
    virtual ::Bedrock::PubSub::Subscription registerProfileImageChangedCallback(
        ::std::function<void(::Social::ProfileImageOptions, ::std::shared_ptr<::mce::Image>)>
    ) = 0;

    // vIndex: 47
    virtual bool needGamepadDisconnectScreen(int) = 0;

    // vIndex: 48
    virtual void tick(::IMinecraftGame&) = 0;

    // vIndex: 49
    virtual void updateMapping(bool, bool) = 0;

    // vIndex: 51
    virtual ::std::shared_ptr<::Social::User> getUser(::IClientInstance const&) const = 0;

    // vIndex: 50
    virtual ::std::shared_ptr<::Social::User> getUser(::Social::XboxLiveUser const&) = 0;

    // vIndex: 52
    virtual ::std::shared_ptr<::Social::User> getUserFromControllerId(int) const = 0;

    // vIndex: 54
    virtual ::std::shared_ptr<::Social::User> getUserFromUserId(uint) = 0;

    // vIndex: 53
    virtual ::std::shared_ptr<::Social::User const> const getUserFromUserId(uint) const = 0;

    // vIndex: 55
    virtual ::GameUserType getUserTypeFromUserId(uint) const = 0;

    // vIndex: 56
    virtual bool isChatAllowedWhenBlockedByPlatform() const = 0;

    // vIndex: 57
    virtual ::std::vector<::std::shared_ptr<::Social::User>> const& getUsers() const = 0;

    // vIndex: 58
    virtual bool isUserSignedIn(uint) = 0;

    // vIndex: 59
    virtual bool isPrimaryUserInitialSignInInProgress() const = 0;

    // vIndex: 60
    virtual void registerLevelLocationObserver(::ILevelListCache&) = 0;

    // vIndex: 61
    virtual ::Social::MultiplayerServiceObserver& getMultiplayerServiceObserver() = 0;

    // vIndex: 62
    virtual ::Social::MultiplayerServiceIdentifier getPlatformMultiplayerServiceIdentifier() const = 0;

    // vIndex: 63
    virtual bool willSyncUserDataStorage() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Social
