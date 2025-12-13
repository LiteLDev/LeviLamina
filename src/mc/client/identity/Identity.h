#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/identity/IdentityEventResponse.h"
#include "mc/identity/IdentityType.h"
#include "mc/identity/PermissionDenyReason.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserDataObject; }
namespace Social { class User; }
namespace Social { class UserData; }
namespace Social { struct AuthToken; }
namespace Social { struct IdentitySignInProperties; }
namespace Social { struct PlayerIDs; }
namespace Social { struct PlatformUserProfileData; }
// clang-format on

namespace Social {

class Identity : public ::std::enable_shared_from_this<::Social::Identity> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk168348;
    ::ll::UntypedStorage<1, 1>  mUnk2436b9;
    ::ll::UntypedStorage<8, 32> mUnkc3caa1;
    ::ll::UntypedStorage<8, 32> mUnk7dafe5;
    ::ll::UntypedStorage<4, 4>  mUnk8c70f8;
    // NOLINTEND

public:
    // prevent constructor by default
    Identity& operator=(Identity const&);
    Identity(Identity const&);
    Identity();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~Identity() = default;
#else // LL_PLAT_C
    virtual ~Identity();
#endif

    virtual ::Social::IdentityEventResponse initialize(::std::weak_ptr<::Social::User> weakOwner);

    virtual ::Social::IdentityType getType() const = 0;

    virtual void tick();

    virtual void signIn(::Social::IdentitySignInProperties const& signInProperties);

    virtual void cancelSignIn();

    virtual ::Bedrock::Threading::Async<bool> signOut();

    virtual void doDisconnect();

    virtual bool isSignedIn() const;

    virtual bool isNewAccount() const;

    virtual bool isSignInInProgress() const;

    virtual bool isGuest() const;

    virtual bool isRemote() const;

    virtual ::gsl::span<::Social::IdentityType const> getDependencies() const;

    virtual ::Social::IdentityEventResponse onIdentitySignIn(::Social::Identity& justSignedIn);

    virtual ::Social::IdentityEventResponse onIdentitySignOut(::Social::IdentityType justSignedOut);

    virtual ::std::string const& getId() const;

    virtual ::Social::PlayerIDs getIds() const;

    virtual ::Bedrock::Threading::Async<::Social::AuthToken> getAuthToken(::std::string const& url) const;

    virtual void getUserDataObject(::Social::IUserDataObject&) const;

    virtual void setUserDataObject(::Social::IUserDataObject const& userDataObject);

    virtual ::Social::UserData const getUserData(::std::string const& key) const;

    virtual void setUserData(::std::string const& key, ::Social::UserData const& value);

    virtual bool hasCachedCredentials() const;

    virtual void clearCachedCredentials();

    virtual ::std::string getDisplayName() const;

    virtual void setPresence(::std::string const& presenceData);

    virtual void clearPresence();

    virtual bool hasPlayedLegacyGame() const;

    virtual bool getLegacyOptionsData(::std::vector<uchar>& outBuffer);

    virtual void checkIsLegacyPlayer(::std::weak_ptr<::Social::User> weakOwner);

    virtual bool hasPremiumPlatformAccess() const;

    virtual void checkPremiumPlatformStatusAsync(::std::function<void(bool)> callback);

    virtual bool hasPlatformIcons() const;

    virtual bool hasPlatformProfileCards() const;

    virtual ::std::string getPlatformId() const;

    virtual ::std::string getPlatformOfflineID() const;

    virtual ::std::string getPlatformOnlineID() const;

    virtual ::Social::PermissionDenyReason isMultiplayerAllowed() const;

    virtual ::Social::PermissionDenyReason isChatAllowed() const;

    virtual ::Social::PermissionDenyReason isAddFriendAllowed() const;

    virtual ::Social::PermissionDenyReason isUserGeneratedContentAllowed() const;

    virtual ::Social::PermissionDenyReason isCreateAndJoinClubsAllowed() const;

    virtual ::Social::PermissionDenyReason isViewingProfilesAllowed() const;

    virtual ::Social::PermissionDenyReason isUploadCapturesAllowed() const;

    virtual int addPermissionsChangeListener(::std::function<void()>);

    virtual void removePermissionsChangeListener(int);

    virtual bool isPlatformParentalControlsEnabled() const;

    virtual void refreshPlatformParentalControlsSetting();

    virtual void refreshFriendListProfileDataIfAllowed();

    virtual bool isBlockingUser(::std::string const&) const;

    virtual ::Bedrock::Threading::Async<::Social::PlatformUserProfileData> getProfile(::std::string const&);

    virtual ::Bedrock::Threading::Async<::std::vector<::Social::PlatformUserProfileData>>
    getProfiles(::std::vector<::std::string> const&);

    virtual ::Bedrock::Threading::Async<::std::vector<::Social::PlatformUserProfileData>> getFriendProfiles();

    virtual void pruneProfileImageCache();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _triggerSignInCallback(
        ::IMinecraftEventing::SignInAccountType   accountType,
        ::Social::IdentitySignInProperties const& signInProperties,
        ::std::error_code                         error,
        ::std::string                             gamertagHint,
        bool                                      getMultipleIDs
    );
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
    MCNAPI ::Social::IdentityEventResponse $initialize(::std::weak_ptr<::Social::User> weakOwner);

    MCNAPI void $tick();

    MCNAPI void $signIn(::Social::IdentitySignInProperties const& signInProperties);

    MCNAPI void $cancelSignIn();

    MCNAPI ::Bedrock::Threading::Async<bool> $signOut();

    MCNAPI void $doDisconnect();

    MCNAPI bool $isSignedIn() const;

    MCNAPI bool $isNewAccount() const;

    MCNAPI bool $isSignInInProgress() const;

    MCNAPI bool $isGuest() const;

    MCNAPI bool $isRemote() const;

    MCNAPI ::gsl::span<::Social::IdentityType const> $getDependencies() const;

    MCNAPI ::Social::IdentityEventResponse $onIdentitySignIn(::Social::Identity& justSignedIn);

    MCNAPI ::Social::IdentityEventResponse $onIdentitySignOut(::Social::IdentityType justSignedOut);

    MCNAPI ::std::string const& $getId() const;

    MCNAPI ::Social::PlayerIDs $getIds() const;

    MCNAPI ::Bedrock::Threading::Async<::Social::AuthToken> $getAuthToken(::std::string const& url) const;

    MCNAPI void $getUserDataObject(::Social::IUserDataObject&) const;

    MCNAPI void $setUserDataObject(::Social::IUserDataObject const& userDataObject);

    MCNAPI ::Social::UserData const $getUserData(::std::string const& key) const;

    MCNAPI void $setUserData(::std::string const& key, ::Social::UserData const& value);

    MCNAPI bool $hasCachedCredentials() const;

    MCNAPI void $clearCachedCredentials();

    MCNAPI ::std::string $getDisplayName() const;

    MCNAPI void $setPresence(::std::string const& presenceData);

    MCNAPI void $clearPresence();

    MCNAPI bool $hasPlayedLegacyGame() const;

    MCNAPI bool $getLegacyOptionsData(::std::vector<uchar>& outBuffer);

    MCNAPI void $checkIsLegacyPlayer(::std::weak_ptr<::Social::User> weakOwner);

    MCNAPI bool $hasPremiumPlatformAccess() const;

    MCNAPI void $checkPremiumPlatformStatusAsync(::std::function<void(bool)> callback);

    MCNAPI bool $hasPlatformIcons() const;

    MCNAPI bool $hasPlatformProfileCards() const;

    MCNAPI ::std::string $getPlatformId() const;

    MCNAPI ::std::string $getPlatformOfflineID() const;

    MCNAPI ::std::string $getPlatformOnlineID() const;

    MCNAPI ::Social::PermissionDenyReason $isMultiplayerAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isChatAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isAddFriendAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isUserGeneratedContentAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isCreateAndJoinClubsAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isViewingProfilesAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isUploadCapturesAllowed() const;

    MCNAPI int $addPermissionsChangeListener(::std::function<void()>);

    MCNAPI void $removePermissionsChangeListener(int);

    MCNAPI bool $isPlatformParentalControlsEnabled() const;

    MCNAPI void $refreshPlatformParentalControlsSetting();

    MCNAPI void $refreshFriendListProfileDataIfAllowed();

    MCNAPI bool $isBlockingUser(::std::string const&) const;

    MCNAPI ::Bedrock::Threading::Async<::Social::PlatformUserProfileData> $getProfile(::std::string const&);

    MCNAPI ::Bedrock::Threading::Async<::std::vector<::Social::PlatformUserProfileData>>
    $getProfiles(::std::vector<::std::string> const&);

    MCNAPI ::Bedrock::Threading::Async<::std::vector<::Social::PlatformUserProfileData>> $getFriendProfiles();

    MCNAPI void $pruneProfileImageCache();
#endif


    // NOLINTEND
};

} // namespace Social
