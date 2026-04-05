#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
class ILevelListCache;
struct ControllerIDtoClientMap;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class SingleThreadedLock; }
namespace Social { class MultiplayerServiceObserver; }
namespace Social { class UserListObserver; }
namespace mce { struct Image; }
class IClientInstance;
class IMinecraftGame;
class Options;
namespace Social { class ProfileImageOptions; }
namespace Social { class User; }
namespace Social { class XboxLiveUser; }
// clang-format on

namespace Social {

class IUserManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IUserManager() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~IUserManager() /*override*/;
#endif

    virtual ::Bedrock::Threading::Async<void> createPrimaryUserAsync(::std::shared_ptr<::Options> options) = 0;

    virtual void initPrimaryIdentity() = 0;

    virtual ::std::shared_ptr<::Social::User> getPrimaryUser() const = 0;

    virtual bool isSecondaryUserCreationAllowed(int id) const = 0;

    virtual void setSecondaryUserCreationAllowed(int id) = 0;

    virtual ::Bedrock::Threading::Async<void> addSecondaryUserAsync(
        int                                                           id,
        ::std::shared_ptr<::Options>                                  options,
        ::std::function<void(::Social::UserPlatformConnectionResult)> callback
    ) = 0;

    virtual bool controllerChanged(int&, int&) = 0;

    virtual bool canChangePrimaryUserFromStartMenuScreen() const = 0;

    virtual void getAsyncUserSelection(::std::function<void(int)>, int) = 0;

    virtual void getAsyncUserSelectionForNewPrimaryUser(int id, bool restrictToControllerIdChange) = 0;

    virtual void forceCloudSaveOnWorld(::std::string const& levelId) = 0;

    virtual ::Core::Subject<::Social::UserListObserver, ::Core::SingleThreadedLock>& getUserListSubject() = 0;

    virtual bool isPrimaryUserReady() const = 0;

    virtual bool canAccessPlayScreen() = 0;

    virtual bool needToShowPlatformStoreConnectConfirmationScreen() = 0;

    virtual bool canAccessSettingsScreen() = 0;

    virtual bool canAccessAchievementsScreen() = 0;

    virtual bool canAccessSkinScreen() = 0;

    virtual bool canAccessStoreScreen() const = 0;

    virtual bool canAccessRealmsPendingInvitesScreen() = 0;

    virtual bool canHandleInvites() = 0;

    virtual bool needPlatformConnectionBeforeXBLSignIn() = 0;

    virtual bool needPlatformConnectionForMultiplayer() const = 0;

    virtual bool needPlatformConnectionForSplitScreenMultiplayer() const = 0;

    virtual bool needPlatformConnectionBeforeServerSearch() const = 0;

    virtual bool needsAsyncUserSelection(int, bool) = 0;

    virtual bool hasPlatformIcons() const = 0;

    virtual bool hasPlatformProfileCards() const = 0;

    virtual void getLinkedXuids(
        ::std::function<void(::std::string, ::std::string)> callback,
        ::std::vector<::std::string> const&                 platformIds
    ) const = 0;

    virtual void getLinkedPlatformIds(
        ::std::function<void(::std::string, ::std::string)> callback,
        ::std::vector<::std::string> const&                 xuids
    ) const = 0;

    virtual void onAppResumed() = 0;

    virtual void onAppSuspended() = 0;

    virtual void onAppFocusLost() = 0;

    virtual void removeUser(int id, bool restartIfPrimary) = 0;

    virtual void removeClient(::std::shared_ptr<::IClientInstance> const& ci) = 0;

    virtual ::std::shared_ptr<::Social::User>
    setUserClient(int id, ::std::shared_ptr<::IClientInstance> const& clientPtr) = 0;

    virtual bool userHasClient(int id) = 0;

    virtual ::std::string_view getPlayFabTitleId() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> retrieveCIDToClientMap() = 0;

    virtual int getClientCID(::IClientInstance const& client) const = 0;

    virtual void
    registerSignOutListener(::Core::CallbackListeners<int, ::Social::SignInResult>::Listener const& listener) = 0;

    virtual void
    registerSignInListener(::Core::CallbackListeners<int, ::Social::SignInResult>::Listener const& listener) = 0;

    virtual ::Bedrock::PubSub::Subscription registerIdentitySignInCallback(
        ::Social::IdentityType                              idType,
        ::std::function<void(uint, ::Social::IdentityType)> listener
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription registerIdentitySignOutCallback(
        ::Social::IdentityType                              idType,
        ::std::function<void(uint, ::Social::IdentityType)> listener
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription registerProfileImageChangedCallback(
        ::std::function<void(::Social::ProfileImageOptions, ::std::shared_ptr<::mce::Image>)> listener
    ) = 0;

    virtual bool needGamepadDisconnectScreen(int controllerId) = 0;

    virtual void tick(::IMinecraftGame& minecraftGame) = 0;

    virtual void updateMapping(bool onScreenAcceptingAllControllerInput, bool inGame) = 0;

    virtual ::std::shared_ptr<::Social::User> getUser(::IClientInstance const& client) const = 0;

    virtual ::std::shared_ptr<::Social::User> getUser(::Social::XboxLiveUser const& liveUser) = 0;

    virtual ::std::shared_ptr<::Social::User> getUserFromControllerId(int id) const = 0;

    virtual ::std::shared_ptr<::Social::User> getUserFromUserId(uint id) = 0;

    virtual ::std::shared_ptr<::Social::User const> const getUserFromUserId(uint id) const = 0;

    virtual ::GameUserType getUserTypeFromUserId(uint id) const = 0;

    virtual bool isChatAllowedWhenBlockedByPlatform() const = 0;

    virtual ::std::vector<::std::shared_ptr<::Social::User>> const& getUsers() const = 0;

    virtual bool isUserSignedIn(uint id) = 0;

    virtual bool isPrimaryUserInitialSignInInProgress() const = 0;

    virtual void registerLevelLocationObserver(::ILevelListCache& levelListCache) = 0;

    virtual ::Social::MultiplayerServiceObserver& getMultiplayerServiceObserver() = 0;

    virtual ::Social::MultiplayerServiceIdentifier getPlatformMultiplayerServiceIdentifier() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Social
