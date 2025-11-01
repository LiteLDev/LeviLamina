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
class CloudSaveSystemWrapper;
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
namespace Social { class XboxLiveUser; }
namespace Social { struct AuthToken; }
namespace Social { struct MultiIdentitySigninResult; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct PlatformUserProfileData; }
namespace Social { struct UserBanDetails; }
namespace Social { struct UserSignInProperties; }
namespace mce { struct Image; }
// clang-format on

namespace Social {

class User : public ::std::enable_shared_from_this<::Social::User> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~User() = default;

    // vIndex: 1
    virtual void initStorageAreas() = 0;

    // vIndex: 2
    virtual ::GameUserType getType() const = 0;

    // vIndex: 3
    virtual bool isPrimaryUser() const = 0;

    // vIndex: 4
    virtual bool isAnonymous() const = 0;

    // vIndex: 5
    virtual bool isConnected() const = 0;

    // vIndex: 6
    virtual bool isReady() const = 0;

    // vIndex: 7
    virtual bool needsPlatformReconnect() const = 0;

    // vIndex: 8
    virtual bool isSignedIn(::Social::IdentityType) const = 0;

    // vIndex: 10
    virtual bool isSignInInProgress(::Social::IdentityType) const = 0;

    // vIndex: 9
    virtual bool isSignInInProgress() const = 0;

    // vIndex: 11
    virtual bool signIn(::Social::UserSignInProperties const&) = 0;

    // vIndex: 12
    virtual void cancelSignIn(::Social::IdentityType) = 0;

    // vIndex: 13
    virtual void signOut(::Social::IdentityType, ::std::function<void(bool)>) = 0;

    // vIndex: 14
    virtual void clearCachedCredentials(::Social::IdentityType) = 0;

    // vIndex: 15
    virtual bool hasNetworkPrivileges() const = 0;

    // vIndex: 16
    virtual ::Bedrock::PubSub::Subscription registerIdentitySignInSubscriber(::Social::IdentityType, ::std::function<void(uint, ::Social::IdentityType)>) = 0;

    // vIndex: 17
    virtual ::Bedrock::PubSub::Subscription registerIdentitySignOutSubscriber(::Social::IdentityType, ::std::function<void(uint, ::Social::IdentityType)>) = 0;

    // vIndex: 18
    virtual ::CallbackToken connectAsync(::std::function<void(::Social::UserPlatformConnectionResult)>, bool) = 0;

    // vIndex: 19
    virtual void enterOfflineMode(::std::function<void(bool)>) = 0;

    // vIndex: 20
    virtual ::Social::UserPlatformConnectionState getPlatformConnectionState() const = 0;

    // vIndex: 21
    virtual uint getLocalUserId() const = 0;

    // vIndex: 22
    virtual ::std::string const& getId(::Social::IdentityType) const = 0;

    // vIndex: 23
    virtual ::std::string const& getMinecraftAccountID() const = 0;

    // vIndex: 25
    virtual void getAuthToken(::Social::IdentityType, ::std::string const&, ::std::function<void(::Social::AuthToken)>) const = 0;

    // vIndex: 24
    virtual ::Bedrock::Threading::Async<::Social::AuthToken> getAuthToken(::Social::IdentityType, ::std::string const&) const = 0;

    // vIndex: 26
    virtual ::std::string const& getPlayFabSessionTicket() const = 0;

    // vIndex: 27
    virtual ::std::string const& getPlayFabEntityToken() const = 0;

    // vIndex: 29
    virtual ::std::shared_ptr<::Social::Identity> getIdentity(::Social::IdentityType) = 0;

    // vIndex: 28
    virtual ::std::shared_ptr<::Social::Identity const> const getIdentity(::Social::IdentityType) const = 0;

    // vIndex: 30
    virtual bool hasIdentity(::Social::IdentityType) const = 0;

    // vIndex: 31
    virtual ::Bedrock::Threading::Async<bool> unlinkXboxLiveAccount() = 0;

    // vIndex: 32
    virtual void getUserDataObject(::Social::IUserDataObject&) const = 0;

    // vIndex: 33
    virtual void setUserDataObject(::Social::IUserDataObject const&) = 0;

    // vIndex: 34
    virtual ::Social::UserData const getUserData(::std::string const&) const = 0;

    // vIndex: 35
    virtual void setUserData(::std::string const&, ::Social::UserData const&) = 0;

    // vIndex: 36
    virtual void tick() = 0;

    // vIndex: 37
    virtual void finalize() = 0;

    // vIndex: 38
    virtual void disconnect() = 0;

    // vIndex: 39
    virtual void signOutFromPlatform() = 0;

    // vIndex: 40
    virtual bool isFinalized() const = 0;

    // vIndex: 41
    virtual ::CloudSaveSystemWrapper& getCloudSaveSystem() = 0;

    // vIndex: 43
    virtual ::std::string getDisplayName() const = 0;

    // vIndex: 42
    virtual ::std::string getDisplayName(::Social::IdentityType) const = 0;

    // vIndex: 44
    virtual ::Bedrock::PubSub::Subscription registerDisplayNameChangedSubscriber(::std::function<void(::std::string const&)>) = 0;

    // vIndex: 45
    virtual ::std::shared_ptr<::Core::FileStorageArea> const getStorageArea() const = 0;

    // vIndex: 46
    virtual ::Core::Path getSettingsDirectoryPath() const = 0;

    // vIndex: 47
    virtual bool hasValidSettingsDirectoryPath() const = 0;

    // vIndex: 48
    virtual ::std::shared_ptr<::IOptions> const getOptions() const = 0;

    // vIndex: 49
    virtual ::Social::XboxLiveUser& getLiveUser() const = 0;

    // vIndex: 50
    virtual void checkPrivilegeWithUIAsync(int, ::std::string const&, ::std::function<void(::Social::PermissionCheckResult)>) = 0;

    // vIndex: 51
    virtual ::RelationshipStatus mayChatWith(::std::string const&) = 0;

    // vIndex: 52
    virtual bool mayChatWithMe(::std::string const&) const = 0;

    // vIndex: 53
    virtual bool isMutedPlayer(::std::string const&) = 0;

    // vIndex: 54
    virtual ::Social::PermissionCheckResult multiplayerAllowed() const = 0;

    // vIndex: 55
    virtual ::Social::PermissionCheckResult chatAllowed() const = 0;

    // vIndex: 56
    virtual ::Social::PermissionCheckResult addFriendAllowed() const = 0;

    // vIndex: 57
    virtual ::Social::PermissionCheckResult userGeneratedContentAllowed() const = 0;

    // vIndex: 58
    virtual ::Social::PermissionCheckResult createAndJoinClubsAllowed() const = 0;

    // vIndex: 59
    virtual ::Social::PermissionCheckResult viewingProfilesAllowed() const = 0;

    // vIndex: 60
    virtual ::Social::PermissionCheckResult uploadCapturesAllowed() const = 0;

    // vIndex: 61
    virtual bool isRemotePlatformUser() const = 0;

    // vIndex: 62
    virtual bool shouldClearChatOnJoinGame() const = 0;

    // vIndex: 63
    virtual int getGameControllerId() const = 0;

    // vIndex: 64
    virtual void setGameControllerId(int) = 0;

    // vIndex: 65
    virtual ::std::string getPlatformID() const = 0;

    // vIndex: 66
    virtual bool hasPremiumPlatformAccess() const = 0;

    // vIndex: 67
    virtual void checkPremiumPlatformStatusAsync(::std::function<void(bool)>) = 0;

    // vIndex: 68
    virtual bool hasPlatformIcons() const = 0;

    // vIndex: 69
    virtual bool hasPlatformProfileCards() const = 0;

    // vIndex: 70
    virtual void getLinkedXuids(::std::function<void(::std::string, ::std::string)>, ::std::vector<::std::string> const&) = 0;

    // vIndex: 71
    virtual void getLinkedPlatformIds(::std::function<void(::std::string, ::std::string)>, ::std::vector<::std::string> const&) = 0;

    // vIndex: 72
    virtual ::Social::PlatformImageService& getPlatformFriendsImageService() = 0;

    // vIndex: 73
    virtual void getPlatformProfile(::std::string const&, ::std::function<void(::Social::PlatformUserProfileData&)>) = 0;

    // vIndex: 74
    virtual void getPlatformProfiles(::std::vector<::std::string> const&, ::std::function<void(::std::vector<::Social::PlatformUserProfileData>&&)>) = 0;

    // vIndex: 75
    virtual ::Social::ProfileImageOptions getDefaultProfileImageOptions() const = 0;

    // vIndex: 76
    virtual ::Bedrock::Threading::Async<::std::shared_ptr<::mce::Image>> getProfileImage(::Social::ProfileImageOptions const&) = 0;

    // vIndex: 77
    virtual ::Bedrock::Threading::Async<::Core::PathBuffer<::std::string>> getProfileImageFile(::Social::ProfileImageOptions const&) = 0;

    // vIndex: 78
    virtual bool canSignInToXBL() const = 0;

    // vIndex: 79
    virtual void setNeedsPlatformReconnect() = 0;

    // vIndex: 80
    virtual ::std::string getPlatformOfflineID() const = 0;

    // vIndex: 81
    virtual ::std::string getPlatformOnlineID() const = 0;

    // vIndex: 82
    virtual void associateClientInstance(::std::shared_ptr<::IClientInstance>) = 0;

    // vIndex: 84
    virtual ::std::weak_ptr<::IClientInstance> getAssociateClientInstance() = 0;

    // vIndex: 83
    virtual ::std::weak_ptr<::IClientInstance const> const getAssociateClientInstance() const = 0;

    // vIndex: 85
    virtual void setPresence(::std::string const&) = 0;

    // vIndex: 86
    virtual void clearPresence() = 0;

    // vIndex: 87
    virtual bool hasPlayedLegacyGame() const = 0;

    // vIndex: 88
    virtual bool getLegacyOptionsData(::std::vector<uchar>&) const = 0;

    // vIndex: 89
    virtual void onAppSuspend() = 0;

    // vIndex: 90
    virtual void onAppResumed() = 0;

    // vIndex: 91
    virtual ::std::optional<::Social::UserBanDetails> getBanInfo() const = 0;

    // vIndex: 92
    virtual void updateAppearanceDisplayName(::std::string const&) = 0;

    // vIndex: 93
    virtual void initIdentity() = 0;

    // vIndex: 94
    virtual void setUserManager(::Bedrock::NonOwnerPointer<::Social::UserManager>) = 0;

    // vIndex: 95
    virtual void _onSignOut(::Social::IdentityType) = 0;

    // vIndex: 96
    virtual void _notifyIdentitiesOfSignIn(::std::shared_ptr<::Social::Identity>, ::std::function<bool(::Social::IdentityEventResponse, ::std::shared_ptr<::Social::Identity>)>) = 0;

    // vIndex: 97
    virtual void _notifyIdentitySignInEventSubscribers(::Social::IdentityType) = 0;

    // vIndex: 98
    virtual void _notifyIdentitySignOutEventSubscribers(::Social::IdentityType) = 0;

    // vIndex: 99
    virtual void setStorageArea(::std::shared_ptr<::Core::FileStorageArea>, ::BuildPlatform) = 0;

    // vIndex: 100
    virtual void _postSignInSteps(::Social::MultiIdentitySigninResult, ::std::vector<::Social::IdentityType>&) = 0;

    // vIndex: 101
    virtual void _finalizeSignIn(::Social::MultiIdentitySigninResult&&, ::std::vector<::Social::IdentityType>&&, ::std::set<::Social::IdentityType>&&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
