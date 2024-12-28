#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
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
namespace Social { struct PlatformUserProfileData; }
namespace Social { struct PlayerIDs; }
// clang-format on

namespace Social {

class Identity : public ::std::enable_shared_from_this<::Social::Identity> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk514a35;
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
    // vIndex: 0
    virtual ~Identity();

    // vIndex: 1
    virtual ::Social::IdentityEventResponse initialize(::std::weak_ptr<::Social::User>);

    // vIndex: 2
    virtual ::Social::IdentityType getType() const = 0;

    // vIndex: 3
    virtual void tick();

    // vIndex: 4
    virtual void signIn(::Social::IdentitySignInProperties const&);

    // vIndex: 5
    virtual void cancelSignIn();

    // vIndex: 6
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>> signOut();

    // vIndex: 7
    virtual void doDisconnect();

    // vIndex: 8
    virtual bool isSignedIn() const;

    // vIndex: 9
    virtual bool isNewAccount() const;

    // vIndex: 10
    virtual bool isSignInInProgress() const;

    // vIndex: 11
    virtual bool isGuest() const;

    // vIndex: 12
    virtual bool isRemote() const;

    // vIndex: 13
    virtual void onDisplayNameUpdate(::std::string const&);

    // vIndex: 14
    virtual ::gsl::span<::Social::IdentityType const> getDependencies() const;

    // vIndex: 15
    virtual ::Social::IdentityEventResponse onIdentitySignIn(::Social::Identity&);

    // vIndex: 16
    virtual ::Social::IdentityEventResponse onIdentitySignOut(::Social::IdentityType);

    // vIndex: 17
    virtual ::std::string const& getId() const;

    // vIndex: 18
    virtual ::Social::PlayerIDs getIds() const;

    // vIndex: 19
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Social::AuthToken>>
    getAuthToken(::std::string const&) const;

    // vIndex: 20
    virtual void getUserDataObject(::Social::IUserDataObject&) const;

    // vIndex: 21
    virtual void setUserDataObject(::Social::IUserDataObject const&);

    // vIndex: 22
    virtual ::Social::UserData const getUserData(::std::string const&) const;

    // vIndex: 23
    virtual void setUserData(::std::string const&, ::Social::UserData const&);

    // vIndex: 24
    virtual bool hasCachedCredentials() const;

    // vIndex: 25
    virtual void clearCachedCredentials();

    // vIndex: 26
    virtual ::std::string const& getDisplayName() const;

    // vIndex: 27
    virtual void setPresence(::std::string const&);

    // vIndex: 28
    virtual void clearPresence();

    // vIndex: 29
    virtual bool hasPlayedLegacyGame() const;

    // vIndex: 30
    virtual bool getLegacyOptionsData(::std::vector<uchar>&);

    // vIndex: 31
    virtual void checkIsLegacyPlayer(::std::weak_ptr<::Social::User>);

    // vIndex: 32
    virtual bool hasPremiumPlatformAccess() const;

    // vIndex: 33
    virtual void checkPremiumPlatformStatusAsync(::std::function<void(bool)>);

    // vIndex: 34
    virtual bool hasPlatformIcons() const;

    // vIndex: 35
    virtual bool hasPlatformProfileCards() const;

    // vIndex: 36
    virtual ::std::string getPlatformId() const;

    // vIndex: 37
    virtual ::std::string getPlatformOfflineID() const;

    // vIndex: 38
    virtual ::std::string getPlatformOnlineID() const;

    // vIndex: 39
    virtual ::Social::PermissionDenyReason isMultiplayerAllowed() const;

    // vIndex: 40
    virtual ::Social::PermissionDenyReason isChatAllowed() const;

    // vIndex: 41
    virtual ::Social::PermissionDenyReason isAddFriendAllowed() const;

    // vIndex: 42
    virtual ::Social::PermissionDenyReason isUserGeneratedContentAllowed() const;

    // vIndex: 43
    virtual ::Social::PermissionDenyReason isCreateAndJoinClubsAllowed() const;

    // vIndex: 44
    virtual ::Social::PermissionDenyReason isViewingProfilesAllowed() const;

    // vIndex: 45
    virtual ::Social::PermissionDenyReason isUploadCapturesAllowed() const;

    // vIndex: 46
    virtual int addPermissionsChangeListener(::std::function<void()>);

    // vIndex: 47
    virtual void removePermissionsChangeListener(int);

    // vIndex: 48
    virtual bool isPlatformParentalControlsEnabled() const;

    // vIndex: 49
    virtual void refreshPlatformParentalControlsSetting();

    // vIndex: 50
    virtual void refreshFriendListProfileDataIfAllowed();

    // vIndex: 51
    virtual bool isBlockingUser(::std::string const&) const;

    // vIndex: 52
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Social::PlatformUserProfileData>>
    getProfile(::std::string const&);

    // vIndex: 53
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::vector<::Social::PlatformUserProfileData>>>
    getProfiles(::std::vector<::std::string> const&);

    // vIndex: 54
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::vector<::Social::PlatformUserProfileData>>>
    getFriendProfiles();

    // vIndex: 55
    virtual void pruneProfileImageCache();

    // vIndex: 56
    virtual void getLinkedXuids(
        ::std::function<void(::std::string, ::std::string)>,
        ::std::vector<::std::string> const&,
        ::std::shared_ptr<::Social::Identity> const
    );

    // vIndex: 57
    virtual void
    getLinkedPlatformIds(::std::function<void(::std::string, ::std::string)>, ::std::vector<::std::string> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Social::IdentityEventResponse $initialize(::std::weak_ptr<::Social::User>);

    MCAPI void $tick();

    MCAPI void $signIn(::Social::IdentitySignInProperties const&);

    MCAPI void $cancelSignIn();

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>> $signOut();

    MCAPI void $doDisconnect();

    MCAPI bool $isSignedIn() const;

    MCAPI bool $isNewAccount() const;

    MCAPI bool $isSignInInProgress() const;

    MCAPI bool $isGuest() const;

    MCAPI bool $isRemote() const;

    MCAPI void $onDisplayNameUpdate(::std::string const&);

    MCAPI ::gsl::span<::Social::IdentityType const> $getDependencies() const;

    MCAPI ::Social::IdentityEventResponse $onIdentitySignIn(::Social::Identity&);

    MCAPI ::Social::IdentityEventResponse $onIdentitySignOut(::Social::IdentityType);

    MCAPI ::std::string const& $getId() const;

    MCAPI ::Social::PlayerIDs $getIds() const;

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Social::AuthToken>>
    $getAuthToken(::std::string const&) const;

    MCAPI void $getUserDataObject(::Social::IUserDataObject&) const;

    MCAPI void $setUserDataObject(::Social::IUserDataObject const&);

    MCAPI ::Social::UserData const $getUserData(::std::string const&) const;

    MCAPI void $setUserData(::std::string const&, ::Social::UserData const&);

    MCAPI bool $hasCachedCredentials() const;

    MCAPI void $clearCachedCredentials();

    MCAPI ::std::string const& $getDisplayName() const;

    MCAPI void $setPresence(::std::string const&);

    MCAPI void $clearPresence();

    MCAPI bool $hasPlayedLegacyGame() const;

    MCAPI bool $getLegacyOptionsData(::std::vector<uchar>&);

    MCAPI void $checkIsLegacyPlayer(::std::weak_ptr<::Social::User>);

    MCAPI bool $hasPremiumPlatformAccess() const;

    MCAPI void $checkPremiumPlatformStatusAsync(::std::function<void(bool)>);

    MCAPI bool $hasPlatformIcons() const;

    MCAPI bool $hasPlatformProfileCards() const;

    MCAPI ::std::string $getPlatformId() const;

    MCAPI ::std::string $getPlatformOfflineID() const;

    MCAPI ::std::string $getPlatformOnlineID() const;

    MCAPI ::Social::PermissionDenyReason $isMultiplayerAllowed() const;

    MCAPI ::Social::PermissionDenyReason $isChatAllowed() const;

    MCAPI ::Social::PermissionDenyReason $isAddFriendAllowed() const;

    MCAPI ::Social::PermissionDenyReason $isUserGeneratedContentAllowed() const;

    MCAPI ::Social::PermissionDenyReason $isCreateAndJoinClubsAllowed() const;

    MCAPI ::Social::PermissionDenyReason $isViewingProfilesAllowed() const;

    MCAPI ::Social::PermissionDenyReason $isUploadCapturesAllowed() const;

    MCAPI int $addPermissionsChangeListener(::std::function<void()>);

    MCAPI void $removePermissionsChangeListener(int);

    MCAPI bool $isPlatformParentalControlsEnabled() const;

    MCAPI void $refreshPlatformParentalControlsSetting();

    MCAPI void $refreshFriendListProfileDataIfAllowed();

    MCAPI bool $isBlockingUser(::std::string const&) const;

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Social::PlatformUserProfileData>>
    $getProfile(::std::string const&);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::vector<::Social::PlatformUserProfileData>>>
    $getProfiles(::std::vector<::std::string> const&);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::vector<::Social::PlatformUserProfileData>>>
    $getFriendProfiles();

    MCAPI void $pruneProfileImageCache();

    MCAPI void $getLinkedXuids(
        ::std::function<void(::std::string, ::std::string)>,
        ::std::vector<::std::string> const&,
        ::std::shared_ptr<::Social::Identity> const
    );

    MCAPI void
    $getLinkedPlatformIds(::std::function<void(::std::string, ::std::string)>, ::std::vector<::std::string> const&);
    // NOLINTEND
};

} // namespace Social
