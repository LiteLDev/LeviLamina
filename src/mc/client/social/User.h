#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/client/social/UserPlatformConnectionState.h"
#include "mc/common/GameUserType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/identity/IdentityEventResponse.h"
#include "mc/identity/IdentityType.h"

// auto generated forward declare list
// clang-format off
class CallbackToken;
class IClientInstance;
class IOptions;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Social { class IUserDataObject; }
namespace Social { class Identity; }
namespace Social { class PlatformImageService; }
namespace Social { class ProfileImageOptions; }
namespace Social { class UserData; }
namespace Social { class UserManager; }
namespace Social { struct AuthToken; }
namespace Social { struct MultiIdentitySigninResult; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct UserBanDetails; }
namespace Social { struct UserSignInProperties; }
namespace mce { struct Image; }
struct CloudSaveSystemWrapper;
namespace Social { struct PlatformUserProfileData; }
namespace Social { struct XboxLiveUser; }
// clang-format on

namespace Social {

class User : public ::std::enable_shared_from_this<::Social::User> {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~User() = default;
#else // LL_PLAT_C
    virtual ~User();
#endif

    virtual void initStorageAreas() = 0;

    virtual ::GameUserType getType() const = 0;

    virtual bool isPrimaryUser() const = 0;

    virtual bool isAnonymous() const = 0;

    virtual bool isConnected() const = 0;

    virtual bool isReady() const = 0;

    virtual bool needsPlatformReconnect() const = 0;

    virtual bool isSignedIn(::Social::IdentityType) const = 0;

    virtual bool isSignInInProgress(::Social::IdentityType) const = 0;

    virtual bool isSignInInProgress() const = 0;

    virtual bool signIn(::Social::UserSignInProperties const&) = 0;

    virtual void cancelSignIn(::Social::IdentityType) = 0;

    virtual void signOut(::Social::IdentityType, ::std::function<void(bool)>) = 0;

    virtual void clearCachedCredentials(::Social::IdentityType) = 0;

    virtual bool hasNetworkPrivileges() const = 0;

    virtual ::Bedrock::PubSub::Subscription registerIdentitySignInSubscriber(
        ::Social::IdentityType,
        ::std::function<void(uint, ::Social::IdentityType)>
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription registerIdentitySignOutSubscriber(
        ::Social::IdentityType,
        ::std::function<void(uint, ::Social::IdentityType)>
    ) = 0;

    virtual ::CallbackToken connectAsync(::std::function<void(::Social::UserPlatformConnectionResult)>, bool) = 0;

    virtual void enterOfflineMode(::std::function<void(bool)>) = 0;

    virtual ::Social::UserPlatformConnectionState getPlatformConnectionState() const = 0;

    virtual uint getLocalUserId() const = 0;

    virtual ::std::string const& getId(::Social::IdentityType) const = 0;

    virtual ::std::string const& getMinecraftAccountID() const = 0;

    virtual void
    getAuthToken(::Social::IdentityType, ::std::string const&, ::std::function<void(::Social::AuthToken)>) const = 0;

    virtual ::Bedrock::Threading::Async<::Social::AuthToken>
    getAuthToken(::Social::IdentityType, ::std::string const&) const = 0;

    virtual ::std::string const& getPlayFabSessionTicket() const = 0;

    virtual ::std::string const& getPlayFabEntityToken() const = 0;

    virtual ::std::shared_ptr<::Social::Identity> getIdentity(::Social::IdentityType) = 0;

    virtual ::std::shared_ptr<::Social::Identity const> const getIdentity(::Social::IdentityType) const = 0;

    virtual bool hasIdentity(::Social::IdentityType) const = 0;

    virtual ::Bedrock::Threading::Async<bool> unlinkXboxLiveAccount() = 0;

    virtual void getUserDataObject(::Social::IUserDataObject&) const = 0;

    virtual void setUserDataObject(::Social::IUserDataObject const&) = 0;

    virtual ::Social::UserData const getUserData(::std::string const&) const = 0;

    virtual void setUserData(::std::string const&, ::Social::UserData const&) = 0;

    virtual void tick() = 0;

    virtual void finalize() = 0;

    virtual void disconnect() = 0;

    virtual void signOutFromPlatform() = 0;

    virtual bool isFinalized() const = 0;

    virtual ::CloudSaveSystemWrapper& getCloudSaveSystem() = 0;

    virtual ::std::string getDisplayName() const = 0;

    virtual ::std::string getDisplayName(::Social::IdentityType) const = 0;

    virtual ::Bedrock::PubSub::Subscription
        registerDisplayNameChangedSubscriber(::std::function<void(::std::string const&)>) = 0;

    virtual ::std::shared_ptr<::Core::FileStorageArea> const getStorageArea() const = 0;

    virtual ::Core::Path getSettingsDirectoryPath() const = 0;

    virtual bool hasValidSettingsDirectoryPath() const = 0;

    virtual ::std::shared_ptr<::IOptions> const getOptions() const = 0;

    virtual ::Social::XboxLiveUser& getLiveUser() const = 0;

    virtual void
    checkPrivilegeWithUIAsync(int, ::std::string const&, ::std::function<void(::Social::PermissionCheckResult)>) = 0;

    virtual ::RelationshipStatus mayChatWith(::std::string const&) = 0;

    virtual bool mayChatWithMe(::std::string const&) const = 0;

    virtual bool isMutedPlayer(::std::string const&) = 0;

    virtual ::Social::PermissionCheckResult multiplayerAllowed() const = 0;

    virtual ::Social::PermissionCheckResult chatAllowed() const = 0;

    virtual ::Social::PermissionCheckResult addFriendAllowed() const = 0;

    virtual ::Social::PermissionCheckResult userGeneratedContentAllowed() const = 0;

    virtual ::Social::PermissionCheckResult createAndJoinClubsAllowed() const = 0;

    virtual ::Social::PermissionCheckResult viewingProfilesAllowed() const = 0;

    virtual ::Social::PermissionCheckResult uploadCapturesAllowed() const = 0;

    virtual bool isRemotePlatformUser() const = 0;

    virtual bool shouldClearChatOnJoinGame() const = 0;

    virtual int getGameControllerId() const = 0;

    virtual void setGameControllerId(int) = 0;

    virtual ::std::string getPlatformID() const = 0;

    virtual bool hasPremiumPlatformAccess() const = 0;

    virtual void checkPremiumPlatformStatusAsync(::std::function<void(bool)>) = 0;

    virtual bool hasPlatformIcons() const = 0;

    virtual bool hasPlatformProfileCards() const = 0;

    virtual void
    getLinkedXuids(::std::function<void(::std::string, ::std::string)>, ::std::vector<::std::string> const&) = 0;

    virtual void
    getLinkedPlatformIds(::std::function<void(::std::string, ::std::string)>, ::std::vector<::std::string> const&) = 0;

    virtual ::Social::PlatformImageService& getPlatformFriendsImageService() = 0;

    virtual void
    getPlatformProfile(::std::string const&, ::std::function<void(::Social::PlatformUserProfileData&)>) = 0;

    virtual void getPlatformProfiles(
        ::std::vector<::std::string> const&,
        ::std::function<void(::std::vector<::Social::PlatformUserProfileData>&&)>
    ) = 0;

    virtual ::Social::ProfileImageOptions getDefaultProfileImageOptions() const = 0;

    virtual ::Bedrock::Threading::Async<::std::shared_ptr<::mce::Image>>
    getProfileImage(::Social::ProfileImageOptions const&) = 0;

    virtual ::Bedrock::Threading::Async<::Core::PathBuffer<::std::string>>
    getProfileImageFile(::Social::ProfileImageOptions const&) = 0;

    virtual bool canSignInToXBL() const = 0;

    virtual void setNeedsPlatformReconnect() = 0;

    virtual ::std::string getPlatformOfflineID() const = 0;

    virtual ::std::string getPlatformOnlineID() const = 0;

    virtual void associateClientInstance(::std::shared_ptr<::IClientInstance>) = 0;

    virtual ::std::weak_ptr<::IClientInstance> getAssociateClientInstance() = 0;

    virtual ::std::weak_ptr<::IClientInstance const> const getAssociateClientInstance() const = 0;

    virtual void setPresence(::std::string const&) = 0;

    virtual void clearPresence() = 0;

    virtual bool hasPlayedLegacyGame() const = 0;

    virtual bool getLegacyOptionsData(::std::vector<uchar>&) const = 0;

    virtual void onAppSuspend() = 0;

    virtual void onAppResumed() = 0;

    virtual ::std::optional<::Social::UserBanDetails> getBanInfo() const = 0;

    virtual void updateAppearanceDisplayName(::std::string const&) = 0;

    virtual void initIdentity() = 0;

    virtual void setUserManager(::Bedrock::NonOwnerPointer<::Social::UserManager>) = 0;

    virtual void _onSignOut(::Social::IdentityType) = 0;

    virtual void _notifyIdentitiesOfSignIn(
        ::std::shared_ptr<::Social::Identity>,
        ::std::function<bool(::Social::IdentityEventResponse, ::std::shared_ptr<::Social::Identity>)>
    ) = 0;

    virtual void _notifyIdentitySignInEventSubscribers(::Social::IdentityType) = 0;

    virtual void _notifyIdentitySignOutEventSubscribers(::Social::IdentityType) = 0;

    virtual void setStorageArea(::std::shared_ptr<::Core::FileStorageArea>, ::BuildPlatform) = 0;

    virtual void _postSignInSteps(::Social::MultiIdentitySigninResult, ::std::vector<::Social::IdentityType>&) = 0;

    virtual void _finalizeSignIn(
        ::Social::MultiIdentitySigninResult&&,
        ::std::vector<::Social::IdentityType>&&,
        ::std::set<::Social::IdentityType>&&
    ) = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static char const* const& OPTIONS_FILENAME();
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
